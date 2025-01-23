#include<iostream>
using namespace std;
int main(){
	int b[10];
	int z;
	int h = 0;
	int p = 0;
	for(int i = 0;i != 10;i++){
		cout <<"podaj liczbe nr."<<i+1<<endl;
		cin >> b[i];
	}
	for(int g = 0;g != 10;g++){
		z += b[g];
	}
	z -= (z%2);
	int r = (z/2);
	cout <<"liczby parzyste: ";
	for(int w = 0;w != r;w++){
		h += 2;
		cout <<h<<" ";
		p += h;
	}
	cout <<endl<<"suma liczb parzystych: "<<p;
	return 0;
}