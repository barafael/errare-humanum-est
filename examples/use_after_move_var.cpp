#include <iostream>
#include <string>

using namespace std;

int main() {
    string origin = "This is a string.";

    string moved = std::move(origin);

    cout << "origin after move: \"" << origin << "\"" << endl;
    cout << "moved  after move: \"" << moved  << "\"" << endl;

    // Binding that was moved out from can be reassigned
    origin = "Hello, I'm back!";
    cout << "origin after being reassigned: \"" << origin << "\"" << endl;
}