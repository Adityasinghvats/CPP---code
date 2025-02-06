#include<iostream>
#include<fstream>
#include<limits>

void displayMessage(const std::string& msg){
    std::cout<< msg <<std::endl;
}

void displayMenu() {
    displayMessage("\nPassword Manager");
    displayMessage(" 1. Add Password");
    displayMessage(" 2. View Passwords");
    displayMessage(" 3. Exit");
    displayMessage("Enter your choice: ");
}

void SavePassword(const std::string& site, const std::string& password){
    std::ofstream file("passwords.txt", std::ios::app);//append
     if (file.is_open()) { // best practice is to test if the file was correctly opened before using
        file << site << " " << password << "\n"; // inserts strings into file using space in between to read later
        file.close(); // not required, once out of scope the file closes, but its best practice to manually close it
        displayMessage("Password saved successfully!");
    } else { // if there was an error opening file, we handle it here
        std::cerr << "Error: Unable to open file for writing.\n";
    }
}

void LoadPasswords() {
    std::ifstream file("passwords.txt");
    if (file.is_open()) {
        std::string site, password;
        displayMessage("\nSaved Passwords:");
        while (file >> site >> password) {//takes out data from file
            std::cout << "  Site: " << site << ", Password: " << password << "\n";
        }
        file.close();
    } else {
        std::cerr << "\n[System] No passwords saved yet.\n";
    }
}

int main(){
    int choice;
    std::string site, password;

    do{
        displayMenu();
        std::cin >> choice;
        if (std::cin.fail()) {
            std::cin.clear(); // clears any fail flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 
        }
        switch (choice) { 
            case 1:
                displayMessage("Enter site name: ");
                std::cin >> site;
                displayMessage("Enter password: ");
                std::cin >> password;
                SavePassword(site, password);
                break;
            case 2:
                LoadPasswords();
                break;
            case 3:
                displayMessage("\n[System] Exiting...");
                break;
            default:
                displayMessage("\n[System] Invalid choice. Please try again.");
        }
    } while(choice != 3);
    return 0;
}