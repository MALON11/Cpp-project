#include<iostream>
using namespace std;
int main()
{
	 int no,b;
	 cout<<"enter any number";
	 cin>> no;
	 cout<<"reverse is given below\n";
	 while(no!=0)
	 {
	 	b=no%10;
	 	cout<<"\n"<<b;
	 	no=no/10;
	 }
	 return 0;
	 
	 
}