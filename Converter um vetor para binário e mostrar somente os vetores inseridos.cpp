#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int a[15], valorDecimal, resto, n=0;
	
	cout<<"Solicita, converte em binario mostra Vetores\n\n";
	
	cout<<"Digite um valor inteiro (em base decimal):\n";


		cin>>valorDecimal;
	
	for (n = 0; valorDecimal > 0; n++) //é possível utilizar um WHILE para obter o mesmo resultado, mas provavelmente o que o professor quer é um FOR mesmo... para isso apenas troque por: while(valorDecimal > 0) e adicione um n++ ao final
	{                                  
	resto = valorDecimal % 2;
	valorDecimal = valorDecimal / 2;
	a[n] = resto;
}
	
	for(n=n-1; n>=0; n--)
	{
		
		cout<<a[n];
	}

		

	
	
		
	
	return 0;
}
