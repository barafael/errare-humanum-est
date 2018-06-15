#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string origin = "This is a string.";

    vector<std::string> vec;

    // Copy origin and append to vec
    vec.push_back(origin);

    cout << "After pushing origin copy onto vec, origin is unchanged: \"" << origin << "\"\n";

    // Move origin into vec, invalidating origin variable (at runtime)
    vec.push_back(std::move(origin));

    cout << "After move into vec, origin is invalidated: \"" << origin << "\"\n";

    cout << "Contents of vec: \"" << vec[0] << "\", \"" << vec[1] << "\"\n";
}