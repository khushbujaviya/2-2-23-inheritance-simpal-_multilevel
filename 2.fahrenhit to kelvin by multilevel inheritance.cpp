/* 2. WAP to convert given degree celsius temperature intofahrenheit and convert that fahrenheit temperatureinto kelvin by implementing multilevel inheritance:
	 Class P -> Class Q -> Class R
	- Class P has following members: temperatureattribute in float
	- Class Q has following members: toFehrenheit()	method
	- Class R has following members: toKelvin() method   */

#include<iostream>
using namespace std;
class P{
	public:
		float f,c,k;
};
class Q:public P{
	public:
	void toFehrenheit();
	
};
void Q::toFehrenheit(){
	cout<<"enter value c: ";
	cin>>c;
	f=(9/5)*c+32;
	cout<<"f:"<<f<<endl;
	cout<<endl;
}
class K:public Q{
	public:
		void tokelvin();
};
void K::tokelvin(){
	k=(f-32)*5/9+273.15;
	cout<<"k="<<k<<endl;
	cout<<endl;
}
main(){
	K obj;
	obj.toFehrenheit();
	obj.tokelvin();
}

