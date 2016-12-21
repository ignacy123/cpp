#include <iostream>
using namespace std;
main(){
int factor = 2;
int rfactor = 0;

long a = 600851475143;
long b = a;
	while(factor<a){
		while(a%factor == 0){
			rfactor = factor;
			a/=factor;
			
		}
		if(a%factor != 0){
			factor++;
		}		
	}
	cout<<a<<endl;
return 0;
};
