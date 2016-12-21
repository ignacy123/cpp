#include<iostream>
using namespace std;
struct Ulamek{
	int licznik;
	int mianownik;
};

int odejmij (int a){
	if(a==0){
		return 0;
	}
	cout<<a<<endl;
	odejmij(a-1);	
}
int polowa (int  b){
	b = b/2;
	return b;
}
void polowa2 (int & b){
	b = b/2;	
}

main(){
	Ulamek ulamek;
	Ulamek ulamek2;
	cout<<"Podaj licznik:"<<endl;
	cin>>ulamek.licznik;
	cout<<"Podaj mianownik:"<<endl;
	cin>>ulamek.mianownik;
	cout<<"Podaj a:"<<endl;
	int a;
	cin>>a;
	polowa(a);
	int c = polowa(a);
	cout<<"c = "<<c<<endl;
	polowa2(c);
	cout<<"c2 = "<<c<<endl;
	cout<<(double)ulamek.licznik/ulamek.mianownik<<endl;


	//Ulamek * wsk;
	//* wsk = ulamek;
	//ulamek2 = * wsk;
	//cout<<ulamek2<<endl;
	//cout<<wsk<<endl;
	return 0;
}
