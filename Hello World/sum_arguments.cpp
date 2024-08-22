#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

    int sum = 0;

    for (int i = 0; i < argc; ++i) {
        int arg_val = atoi(argv[i]);
        sum += arg_val;
    }

    cout << "Sum of Arguments: " << to_string(sum) << endl;

}