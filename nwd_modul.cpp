#include <iostream>
using namespace std;
main(){
int a;
int b;
int c;
	cin>>a;
	cin>>b;
		while(b!=0){
			c = a%b;
			a = b;
			b = c;
		}
cout<<"Nwd podanych liczb to: "; 
cout<<a<<endl;

return 0;
};
