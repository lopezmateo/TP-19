#include <iostream>
using namespace std;

int main (){
	
	int  a,b,c,d,e,f,g,h,i,j;
	float promedio;
	int suma=a+b+c+d+e+f+g+h+i+j;
	
	cout<<"ingrese 10 numeros por favor"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	cin>>f;
	cin>>g;
	cin>>h;
	cin>>i;
	cin>>j;
	
	promedio=(suma)/10.0;
	
	cout<<"el promedio de los 10 numeros es:"<<promedio<<endl;
	
	return 0;
}