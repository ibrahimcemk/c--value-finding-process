# simple value finding process

 #include<iostream>

using namespace std;

int main()
{
int number;

	cout<<"Please enter the number:";
	cin>>number;
	if(number>0) cout<<"Entered Positive Value";
	else if(number<0) cout<<"Entered a Negative Value";
	else{
		cout<<"found a neutral number";
	}
}
