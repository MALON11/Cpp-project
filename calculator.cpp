#include<iostream>
using namespace std;
int main()
{
	float cir,r,rec,l,w;
	int op;
	float x=3.14;
	cout<<"VIVIANUS REVELIAN VICTOR\n";
	cout<<"23100123090012\n";
	do
	{
	cout<<"\nwelcome to my simple calculator\n";
	cout<<"choose options you want to execute\n 1.area of a circle\n2.perimeter of rectangle\n";
	cin>> op;
		switch(op)
		{
		case 1:
			cout<<"enter radius\n";
			cin>> r;
			cir=x*r*r;
			cout<<cir<<"\n";
			break;
		case 2:
			cout<<"enter length\n";
			cin>> l;
			cout<<"enter width\n";
			cin>> w;
			rec=2*(l+w);
			cout<<rec<<"\n";
			break;
			case 3:
				cout<<"exit";
				break;
		}
	}
	while(op!=0 && op<4);
	cout<<"\ninvalid option";
}