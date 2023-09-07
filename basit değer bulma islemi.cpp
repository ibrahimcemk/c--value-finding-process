#include<iostream>

using namespace std;

int main()
{
	int sayi;
	
	cout<<"Lutfen sayiyi girin:";
	cin>>sayi;
	if(sayi>0) cout<<"Pozitif Deger Girdiniz";
	else if(sayi<0) cout<<"Negatif Deger Girdiniz";
	else{
		cout<<"Notr Sayi Buldunuz";
	}
}
