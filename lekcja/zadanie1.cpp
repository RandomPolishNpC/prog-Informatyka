#include<iostream>
using namespace std;
int main(){
	int b[5];
	int z;
	for(int i = 0;i != 5;i++){
		cout <<"podaj liczbe nr."<<i+1<<endl;
		cin >> b[i];
	}
	for(int g = 0;g != 5;g++){
		z += b[g];
	}
	cout <<"srednia liczb wynosi: "<<z/5;
	return 0;
}