#include<iostream>
#include<string>
using namespace std;


int main() {
    string name;
    float G ;
    cout << " What is your name? : ";
    cin >> name;
    cout << "What is your GPA? : ";
    cin >> G;
    
    if(G>=3.50) {
        cout << name << " Inw Jrim Jrim!! ";
    }
    else
    {
        cout << "Try harder, " << name << "!!!" ;
    }
}