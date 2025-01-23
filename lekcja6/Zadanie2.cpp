#include<iostream>
using namespace std;
int main(){
	int b[5];
	int z;
	int w = 0;
	for(int i = 0;i != 5;i++){
		cout <<"podaj liczbe nr."<<i+1<<endl;
		cin >> b[i];
	}
	for(int g = 0;g != 5;g++){
		if(b[g] <= w){
			w = b[g];
		}
	}
	cout <<"najmniejsza podana liczba to: "<<w;
	return 0;
}