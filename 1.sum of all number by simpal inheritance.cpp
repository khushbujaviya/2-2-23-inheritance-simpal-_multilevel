/*1. WAP to find sum of all three number’s cubes by
	implementing single level inheritance: Class X->Class Y
- Class X has following members: a, b & c attributes in
	integer data type
- Class Y has following members: setData() and
	getData() methods*/
	
#include<iostream>
using namespace std;
class  x{
	public:
		int a,b,c,cubeA,cubeB,cubeC,sum;
	
};
class y:public x{
		public:
			void setData();
			void getData();
	};
	void y::setData(){

	cout<<"enter value a: ";
	cin>>a;
	cout<<"enter value b: ";
	cin>>b;
	cout<<"enter value c: ";
	cin>>c;
	cout<<endl;
	cubeA=a*a*a;
	cubeB=b*b*b;
	cubeC=c*c*c;
};
void y::getData(){
	cout<<"cubeA="<<cubeA<<endl;
	cout<<"cubeB="<<cubeB<<endl;
	cout<<"cubeC="<<cubeC<<endl;
	cout<<endl;
	sum=cubeA+cubeB+cubeC;
	cout<<"sum="<<sum<<endl;
};
main(){
	y obj;
	
	obj.setData();
	obj.getData();
}
