#include <iostream>
#include <functional>

using namespace std;

function<int(int)> get_lambda_with_local_reference() {
    int local_arr[] = { 1, 2, 3, 4, 5 };
    return [&](int value) { return value + local_arr[2]; };
}

int main() {
    // This function returns a lambda which internally keeps a pointer to a local array.
    // Of course, when using the returned lambda, the array does not exist anymore.
    function<int(int)> function = get_lambda_with_local_reference();
    cout << "lambda uses stack-local reference:" << function(6) << endl;
}
