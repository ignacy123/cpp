#include <iostream>
using namespace std;

bool isPrime(int number){
        for(int j = number-1; j>2; j--){
                if(number%j == 0){
                        return false;
                }
        }
        return true;
}

main(){
int currentPrime = 0;
int primeCounter = 0;

	for(int i = 2; i++;primeCounter<10001){
		if(isPrime(i)){
			currentPrime = i;
			primeCounter++;
		}
	}
cout<<currentPrime;
return 0;
}
