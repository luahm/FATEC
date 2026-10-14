#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int elementos[20], n, soma=0;
	
	cout<<"Insere, mostra e soma vetores\n";
	
	for(n=0; n<=19; n++)
	{
		elementos[n]=(n*2)+10;
		
	}
	for(n=0; n<=19; n++)
	{
		cout<<elementos[n]<<" ";
		soma = soma+elementos[n];
	}
		
		cout<<"\n\nA soma dos vetores eh:"<<soma;
		
		
	
	
	
	
	
	
	return 0;
}
