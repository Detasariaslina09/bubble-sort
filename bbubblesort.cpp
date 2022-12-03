#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Masukkan Banyak Angka : ";
	cin>>a;
	int angka[a];
	int temp = 0;
	
	for(int i=0; i<a; i++){
		cin>>angka[i];
	}

	for(int i=0; i<a; i++){
	for(int j=0; j<a; j++){
	if (angka[j] > angka [j+1]){
		temp= angka[j];
		angka[j]= angka[j+1];
		angka[j+1]= temp;
	}
}
}cout<<"\n";


for(int i=0; i<a; i++){
	cout<<angka[i];
}
}
