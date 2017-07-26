#include <iostream>
using namespace std;

void FizzBuzz(int end) {
    int fb = 0;
    int f = 0;
    int b = 0;

    for (int i = 1; i <= end; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "Fizz & Buzz" << endl;
            fb = fb + i;
            continue;
        } else if (i % 3 == 0) {
            cout << "Fizz, ";
            f = f + i;
            continue;
        } else if (i % 5 == 0) {
            cout << "Buzz, ";
            b = b + i;
        } else {
            cout << i << ", ";
        }
    }
        cout << "\nThe sum of all Fizz is " << f << endl;
        cout << "The total of Buzz is " << b << endl;
        cout << "And the accumulated Fizz & Buzz equals " << fb << endl;

}

int main() {
    FizzBuzz(50);

    return 0;
}