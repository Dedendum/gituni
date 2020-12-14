
#include <iostream>
using namespace std;

int main()
{
    int N = 42;

    for (int i = 2; i < N / 2; ++i) {
        if (N % i == 0) {
            cout << "non primo";
            return 0;
        }
    }
    cout << "primo";
    return 0;
}