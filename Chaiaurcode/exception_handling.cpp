#include<iostream>
#include<string>
using namespace std;
class Printer{
    string _name;
    int _availablePaper;
    public:
    Printer(string name,int paper){
        _name = name;
        _availablePaper = paper;
    }
    void Print(string txt_doc){
        int requiredPaper = txt_doc.length()/10;
        // if(requiredPaper>_availablePaper) throw "No paper ";  //string exception
        if(requiredPaper>_availablePaper) throw 404;
        cout<<"Printing...."<< txt_doc << endl;
        _availablePaper-=requiredPaper;
    }
};
int main(){
    Printer myPrinter("Hp DeskJet", 10);
    try{
        myPrinter.Print("Hi, I am Aditya and I want to be a Software Engineer.");
        myPrinter.Print("Hi, I am Aditya and I want to be a Software Engineer.");
        myPrinter.Print("Hi, I am Aditya and I want to be a Software Engineer.");
    }

    catch(const char* textException){
        cout<<"Exception:"<<textException<<endl;
    }
    catch(int numException){
        if(numException==500) cout<<"Exception: "<<" Internal server error"<<endl;
        else if(numException==401) cout<<"Exception: "<<" Authentication error"<<endl;
        else cout<<"Exception: "<<" User not found"<<endl;
    }
    catch(...){//means  it can handle any type of exception
        cout<<"Exception happened!"<<endl;
    }

    system("pause>nul");
    return 0;
}

/*
Printing....Hi, I am Aditya and I want to be a Software Engineer.
Printing....Hi, I am Aditya and I want to be a Software Engineer.
terminate called after throwing an instance of 'char const*'

- Specific handlers first only then we put default handlers
*/