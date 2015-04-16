#include <iostream>
using namespace std;

int num = 0,num2 = 0;
double resultado = 0.0;
string salida = "El resultado de la operacion es: ";
char a;
bool condicion = true;
int operacion;

void salir(){
	cout<<"¿Desea realizar otra operacion(S/N)?"<<endl;
	cin>>a;
	switch(a){
		case 's':
		break;
		case 'S':
		break;
		case 'n':
			condicion = false;
		break;
		case 'N':
			condicion = false;
		break;

	}
}

void multiplicar(){
	resultado = num*num2;
	cout<<salida<<resultado<<endl;
	salir();
}
void dividir(){
	resultado = num%num2;
	cout<<salida<<resultado<<endl;
	salir();
}
void restar(){
	resultado = num-num2;
	cout<<salida<<resultado<<endl;
	salir();
}
void sumar(){
	resultado = num+num2;
	cout<<salida<<resultado<<endl;
	salir();
}
void solicitarDatos(){
	cout<<"-------------------------"<<endl;
	cout<<"Trabajo Practico Numero 1"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<endl;

	cout<<"Ingrese el primer numero: ";
	cin>>num;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	cout<<"Ingrese la operacion a realizar: "<<endl;
	cout<<"1-Suma"<<endl;
	cout<<"2-Resta"<<endl;
	cout<<"3-Multiplicar"<<endl;
	cout<<"4-Dividir"<<endl;
	cin>>operacion;

	switch(operacion){
		case 1:
			dividir();
		break;
     	case 2:
			multiplicar();
		break;
		case 3:
			restar();
		break;
		case 4:
			sumar();
		break;
	}
}


int main(int argc, char const *argv[])
{
	while(condicion)
	{
	solicitarDatos();
	salir();
	}
}
