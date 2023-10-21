#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    cout << "Please enter login Credentials" << endl;
    cout << "Username:";
    string Uname;
    string Pword;
    cin >> Uname;
    cout << "Password:";
    cin >> Pword;
    cout << "\nUsername:" << Uname << "\nPassword:" << Pword << endl;

    string myText;
    ifstream MyFile(Uname+".txt");
    MyFile >> myText;
    cout << myText;
    if(Pword == myText){
        cout << "Access granted";
    }
    else{
        cout << "Access Denied";
    }
    MyFile.close();

    return 0;
}
