#include<iostream>
using namespace std;
int main() {
    int x ;
    double sum = 0;
    cout << " Enter x : ";
    cin >> x;
        if( x == 0 ) {
            cout << "sum = " << sum ;
        }
        else {
            while( x > 0 , x!=0 ) {
                x = 0;
                cout << " Enter x : ";
                cin >> x;
                sum = sum + x;
                }
        }
        cout << "sum = " << sum;
    }