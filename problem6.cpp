#include <iostream>
using namespace std;



main() {

    int sumOfSquares = 0;
    int squaredSum = 0;
    for(int i = 1; i<=100; i++){
        sumOfSquares += i*i;
        squaredSum += i;
    }
	int square = squaredSum*squaredSum;
	int end = sumOfSquares-square;
	cout<<end<<endl;
    return 0;
};

