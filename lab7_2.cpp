#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    string name,movie,date,A;
    int NS;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cin.ignore();
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name <<": ";
    cin >>  NS;
    cout << "Fahsai: I think you may be GEAR "<< NS - <<". I have a free movie ticket for you.\n";
    cout <<"Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout << name <<": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name <<": ";
    getline(cin,date);
    cout << date <<"....that is OK!!! I'm looking forward to watching "<< movie << " with you.";
    cout << name <<": ";
    cin >> A;
    cout << "Fahsai: 555+ see you "<<date<<". Bye Bye \(^ ^)/";
    return 0;
}