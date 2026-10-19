#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int a[10], b[10], mult, n;
	
	cout<<"Insere, multiplica e mostra vetores\n";
	
	for(n=0; n<=9; n++)
	{
		a[n]=n+1;
	}
	for(n=0; n<=9; n++)
	{
		cout<<a[n]<<" ";
	}
	
	cout<<"\n\nVetores multiplicados por 2:\n";
	
		for(n=0; n<=9; n++)
	{
		b[n]=a[n]*2;		
		
		cout<<b[n]<<" ";
		
}
	
	
	
	
	
	return 0;
}
