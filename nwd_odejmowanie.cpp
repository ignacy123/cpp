#include <iostream>
using namespace std;
main(){
int a;
int b;
	cin>>a;
	cin>>b;
		while(a!=b){
			if(a>b){
				a = a-b;
			} else if(a<b){
				b = b-a;
			}
		}
cout<<"Nwd podanych liczb to: "; 
cout<<a<<endl;

return 0;
};
