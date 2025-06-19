#include<iostream>
#include <queue>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

//Node structure of tree for Huffman
struct Node{
    char ch;
    int freq;
    Node* left;
    Node* right;

    Node(char c, int f): ch(c), freq(f), left(nullptr), right(nullptr){}
    Node(int f): ch('\0'), freq(f), left(nullptr), right(nullptr) {}
};

//custom comparator using operator overloading
struct Compare{
    bool operator()(Node* a, Node* b){
        return a->freq > b->freq;
    }
};

class Huffman{
private:
    Node* root;
    unordered_map<char, string> codes;
    unordered_map<string, char> reverseCodes;

    //build frequency table
    unordered_map<char, int> buildFreqTable(const string& text){
        unordered_map<char, int> freq;
        for(char c: text){
            freq[c]++;
        }
        return freq;
    }

    //build the tree
    Node* buildTree(unordered_map<char, int>& freq){
        //queue of Node*, internally vector, Compare with freq
        priority_queue<Node*, vector<Node*>, Compare> pq;

        //create leaf nodes and add to priority queue
        for(auto &pair: freq){
            pq.push(new Node(pair.first, pair.second));
        }

        //edge case single character
        //make the single Node as a root
        if(pq.size() == 1){
            Node* single = pq.top();
            pq.pop();
            Node* newRoot = new Node(single->freq);
            newRoot->left = single;
            return newRoot;
        }

        //build tree - from bottom
        while(pq.size() > 1){
            Node* left = pq.top(); pq.pop();
            Node* right = pq.top(); pq.pop();

            Node* merged = new Node(left->freq + right->freq);
            merged->left = left;
            merged->right = right;

            pq.push(merged);
        }
        return pq.top();
    }

    //generate codes by traversing tree
    void generateCode(Node* node, string code){
        if(!node) {
            cerr<<"Node not found"<<endl;
            return;
        }
        //leaf nodes - store charactre and its code
        if(node->ch != '\0'){//handle single charc case
            if(code.empty()) code = "0";
            codes[node->ch] = code;
            reverseCodes[code] = node->ch;
            return;
        }
        generateCode(node->left, code+"0");// left with 0
        generateCode(node->right, code+"1");//right with 1
    }
    //clean memory
    void deleteTree(Node* node){
        if(!node) return;
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }

public:
    Huffman(): root(nullptr){}

    ~Huffman(){
        deleteTree(root);
    }

    //encode the input
    string encode(string& text){
        if(text.empty()) return "";

        auto freq = buildFreqTable(text);
        root = buildTree(freq);

        //genrate codes
        codes.clear();
        reverseCodes.clear();
        generateCode(root, "");

        //encode the string
        string encoded = "";
        for (char c: text){
            encoded += codes[c];
        }
        return encoded;
    }
    string decode(string &encoded){
        if(encoded.empty() || !root) return "";

        string decoded = "";
        Node* current = root;

        for(char bit: encoded){
            //handle single characteer case
            if(current->ch != '\0'){
                decoded += current->ch;
                current = root;
            }

            //traverse based on bits
            if(bit == '0'){
                current = current->left;
            }else{
                current = current->right;
            }

            //if we reah a leaf node, add character to result
            if(current && current->ch != '\0'){
                decoded += current->ch;
                current = root;
            }
        }
        return decoded;
    }
    void printCodes(){
        cout<<"Huffman codes:"<<endl;
        for(auto& pair: codes){
            cout << "'" << pair.first << "' : " << pair.second << endl;
        }
    }
};

int main(){
    Huffman huffman;
    
    // Test with sample text
    string text = "The quick brown fox jumps over the lazy dog. This is a test of Huffman coding compression algorithm.";
    cout << "Original text: " << text << endl;
    cout << "Size of original: " << text.size() * 8 << endl;
    
    // Encode
    string encoded = huffman.encode(text);
    cout << "Encoded: " << encoded << endl;
    cout << "Size of encoded: " << encoded.size() << endl;
    
    // Print codes
    huffman.printCodes();
    
    // Decode
    string decoded = huffman.decode(encoded);
    cout << "Decoded: " << decoded << endl;

    return 0;
}