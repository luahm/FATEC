#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int a[15], valorDecimal, resto, n=0;
	
	cout<<"Solicita, converte em binario mostra Vetores\n\n";
	
	cout<<"Digite um valor inteiro (em base decimal):\n";


		cin>>valorDecimal;
	
	while(valorDecimal > 0)
	{
		resto =  valorDecimal % 2;
		valorDecimal = valorDecimal / 2;
		a[n] = resto;
		n++;
	}
	
	for(n=n-1; n>=0; n--)
	{
		
		cout<<a[n];
	}

		

	
	
		
	
	return 0;
}
