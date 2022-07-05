#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 0 || n < 0) {
        return false;
    }


    while (n >= 1) {
        if (n == 1) {
            return true;
        }

        if (n % 2 != 0) {
            return false;
        }

        n /= 2;
    }

    return true;
}

int main()
{
    cout << isPowerOfTwo(16);

    return 0;
}