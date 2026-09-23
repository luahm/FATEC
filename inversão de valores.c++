#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int a, b, invert;
	
	cout<<"\n\n";
	cout<<"=================================== ";
	cout<<"ALGORITMO MALUCO DOIDO LELE DA CUCA =================================== \n                                 BIRULEIBE DA MARACUTAIA (INVERTER A COM B)";
	
	cout<<"\nDigite o valor de A: ";
	  cin>>a;
	cout<<"\nDigite o valor de B: ";
	cin>>b;
	
	invert=a;
	a=b;
	b=invert;
	
	cout<<"\nA maracutaia ficou:";
	cout<<"A e igual "<<a<<" e B e igual "<<b<<endl;

	  return 0;
}
	  
	
	  
	  
