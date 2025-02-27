#include<iostream>
using namespace std;
int main(){
	int b[10];
	int z;
	for(int i = 0;i != 10;i++){
		cout <<"podaj liczbe nr "<<i+1<<": ";
		cin >> b[i];
	}
	cout <<"liczby parzyste: ";
	for(int g = 0;g != 10;g++){
		if(0==(b[g]%2)){
			cout <<b[g]<<", ";
			z += b[g];
		}
	}
	cout <<endl<<"suma liczb parzystych: "<<z;
	return 0;
}