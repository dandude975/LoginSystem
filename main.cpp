#include <iostream>
#include <String>
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
    return 0;
}
