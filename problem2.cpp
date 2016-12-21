#include <iostream>
using namespace std;
main(){
int sum = 0;
int a = 0;
int b = 1;
int temp;
	while(a<=4000000 && b<=40000000){
		if(a%2 == 0){
			sum+=a;
		}
		if(b%2 == 0){
			sum+=b;
		}
		int temp = b;
		b+=a;
		a=temp;		
	}
	cout<<sum/2<<endl;
return 0;
};
