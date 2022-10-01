//Creado por: Kevin Logan Tatum Hidalgo 
#include<iostream>
using namespace std;
int main()
{
	int KLTH_i=0,KLTH_l;
	float KLTH_x,KLTH_s=0;
	cout<<"ingrese el limite KLTH_l="; cin>>KLTH_l;
	do{

	cout<<"ingrese el numero KLTH_x="; cin>>KLTH_x;
	KLTH_i=KLTH_i+1;
	KLTH_s=KLTH_s+KLTH_x;



	}while(KLTH_i<KLTH_l);
	cout<<"Se ingresaron "<<KLTH_l<<" numeros "<< "que sumaron "<<KLTH_s<<endl;
	return 0;
}
