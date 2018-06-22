#include<iostream>

using namespace std;

int main() {
    int four = 4;
    int three = 3;

    double half = 0.5;

    cout << "add int and double   : 4 + 0.5 = " << four + half  << endl;
    cout << "divide int and int   : 4 / 3   = " << four / three << endl;
    cout << "divide int by double : 4 / 0.5 = " << four / half  << endl;
    cout << "divide double by int : 0.5 / 4 = " << half / four  << endl;
}
