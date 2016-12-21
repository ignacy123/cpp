#include <iostream>
using namespace std;

bool isPalindromic(int a) {
    int b = 0;
    int c = a;
    while (a > 0) {
        b = b * 10 + a % 10;
        a /= 10;
    }
    if (c == b) {
        return true;
    }
    return false;
}

main() {


    //    A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
    //
    //Find the largest palindrome made from the product of two 3-digit numbers.
    int currentBiggest = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            if (isPalindromic(i * j)) {
                if (i * j > currentBiggest) {
                    currentBiggest = i*j;
                }
            }
        }
    }
    cout << currentBiggest<<endl;
    return currentBiggest;
    return 0;
};
