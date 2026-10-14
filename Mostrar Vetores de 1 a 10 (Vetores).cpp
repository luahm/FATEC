#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int elementos[10], n;
	
	cout<<"Insere e mostra vetores\n";
	
	for(n=0; n<=9; n++)
	{
		elementos[n]=n+1;
	}
	for(n=0; n<=9; n++)
	{
		cout<<elementos[n]<<" ";
	}
	
	
	
	
	
	return 0;
}
