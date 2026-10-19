#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int a[5], n;
	
	cout<<"Solicita e mostra Vetores\n\n";
	
	cout<<"Digite 5 valores inteiros:\n";
	
	for(n=0; n<=4; n++)
	{
		cin>>a[n];
	}
	for(n=0; n<=4; n++)
	{
		cout<<a[n]<<" ";
	}

		

	
	
		
	
	return 0;
}
