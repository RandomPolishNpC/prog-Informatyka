#include<iostream>
using namespace std;
int main(){
	int  a[3][3];
	int z;
	cout <<"podaj 9 liczb do tablicy 3x3: "<<endl;
	for(int b = 0;b < 3;b++){
		for(int g = 0;g < 3;g++){
			cout <<"kolumna: "<<(g+1)<<" wiersz: "<<(b+1)<<"- ";
			cin >> a[g][b];
		}
	}
	for(int b = 0;b < 3;b++){
		for(int g = 0;g < 3;g++){
			z += a[b][g];
		}
	}
	cout <<endl<<"srednia liczb: "<<z/9;
}