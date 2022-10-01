//Creado por: Kevin Logan Tatum Hidalgo
#include<iostream>
using namespace std;
int main()
{
	float KLTH_x,KLTH_y,KLTH_s,KLTH_m,KLTH_d,KLTH_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de KLTH_x=:";
	cin>>KLTH_x;
	cout<<"Ingrese en valor de KLTH_y=:";
	//Operaciones 
	cin>>KLTH_y;
	KLTH_s=KLTH_x+KLTH_y;
	KLTH_m=KLTH_x*KLTH_y;
	KLTH_d=KLTH_x/KLTH_y;
	KLTH_r=KLTH_x-KLTH_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<KLTH_x<<" + "<<KLTH_y<<" = "<<KLTH_s<<endl;
	cout<<"Las multiplicacion de "<<KLTH_x<<" * "<<KLTH_y<<" = "<<KLTH_m<<endl;
	cout<<"Las division de "<<KLTH_x<<" / "<<KLTH_y<<" = "<<KLTH_d<<endl;
	cout<<"Las resta de "<<KLTH_x<<" - "<<KLTH_y<<" = "<<KLTH_r<<endl;
	return 0;
}
