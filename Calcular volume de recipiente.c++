#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	float raio, altura, volume;
	
	cout<<"\n\n";
	cout<<"=================================== ";
	cout<<"CALCULAR VOLUME DE RECIPIENTE";
	cout<<"=================================== ";
	
	cout<<"\nQual e o raio do seu recipiente?\n";
	  cin>>raio;
	  
	cout<<"\nAgora, qual a altura do seu recipiente?\n";
	  cin>>altura;
	
	volume=3.14159*(raio*raio)*altura;
	
	cout<<"\n------------------------------------------------\n";
	cout<<"O volume do seu recipiente e: "<<volume<<endl;
	
  


	  return 0;
}
	  
	
	  
	  
