#include <iostream>
#include <windows.h>
#include <sstream>
#include <cmath>

using namespace std;
	int a, b, c, d, z;
	string e, f, g;
	float h, i, j;
	
int pro1(){
	cout<<"-----Suma, resta, mulplicacion y division-----\n\n";
	cout<<"1# Ingresa un numero: ";
	cin>>a;
	cout<<"2# Ingresa un numero: ";
	cin>>b;
	
	cout<<"\n\nSuma: "<<a+b;
	cout<<"\nResta: "<<a-b;
	cout<<"\nMultiplicación: "<<a*b;
	cout<<"\nDivicion: "<<a/b;
};

int pro2(){
	cout<<"--------------Numero impar o par?-------------\n\n";
	cout<<"Ingresa un numero: ";
	cin>>a;
	if(a%2==0){
		cout<<"\n\nEl numero es par";
	}else{
		cout<<"\n\nEl numero es impar";
	}
};

int pro3(){
	char mj;
	cout<<"--------------Conversor de unidades------------\n\n";
	cout<<"'A' a 'B'"<<endl;
	cout<<"Kilometros a millas ----------- 1"<<endl;
	cout<<"Metros a pulgadas ------------- 2"<<endl;
	cout<<"Libras a kilos ---------------- 3"<<endl;
	cout<<"\nIngresa opción: ";
	cin>>a;
	if(a<1 || a>3){
		do{	
			cout<<"Ingresa una opcion valida por favor: ";
			cin>>a;
		}while(a<1 || a>3);
	}
	cout<<"Desea convertir a la inversa 'B' a 'A'(s/n): ";
	cin>>mj;
	cout<<endl;
	switch(a){
		case 1: 
			if(mj=='n' || mj=='N'){
				cout<<"Ingrese Kilometros: ";
				cin>>h;
				cout<<"Millas: "<<h/1.609;
			}else{
				cout<<"Ingrese Millas: ";
				cin>>h;
				cout<<"Kilometros: "<<h*1.609;
			}
		break;
		case 2: 
			if(mj=='n' || mj=='N'){
				cout<<"Ingrese Metros: ";
				cin>>h;
				cout<<"Pulgadas: "<<h*39.37;
			}else{
				cout<<"Ingrese Pulgadas: ";
				cin>>h;
				cout<<"Metros: "<<h/39.37;
			}
		break;
		case 3: 
			if(mj=='n' || mj=='N'){
				cout<<"Ingrese Libras: ";
				cin>>h;
				cout<<"Kilos: "<<h/2.205;
			}else{
				cout<<"Ingrese Kilos: ";
				cin>>h;
				cout<<"Libras: "<<h*2.205;
			}
		break;
	}
};

int pro4(){
	cout<<"------------------Palindromo?-----------------\n\n";
	cout<<"Ingresa un numero: ";
	cin>>e;
	a = e.length();
	b = a;
	c = 0;
	for(int i = 0; i <a; i++){
		if(e.substr(i,1) == e.substr(b-1,1)){
			c++;
		};
		b--;
	};
	if(c==a){
		cout<<"\n\nEs palindromo";
	}else{
		cout<<"\n\nNo es palindromo";
	}
};

int pro5(){
	cout<<"--------Conversor de arabigos a romanos-------\n\n";
	cout<<"Ingrese numero entero positivo: ";
	cin>>a;
	if(a<=0 || a>1000){
		do{
			cout<<"Ingresa un numero valido por favor: ";
			cin>>a;
		}while(a<=0 || a>1000);
	}
	
	if(a==1000){
	e += "M";
	a -= 1000;
	}else if(a>=900){
		e += "CM";
		a -= 900;
	}
	
	if(a>=500){
		e += "D";
		a -= 500;
	}else if(a>=400){
		e += "CD";
		a -= 400;
	}
	
	while(a>=100 || a>=90){
		if(a>=100){
			e += "C";
			a -= 100;
		}else if(a>=90){
			e += "XC";
			a -= 90;
		}
	}
	
	if(a>=50){
		e += "L";
		a -= 50;
	}else if(a>=40){
		e += "XL";
		a -= 40;
	}
	
	while(a>=10 || a>=9){
		if(a>=10){
			e += "X";
			a -= 10;
		}else if(a>=9){
			e += "IV";
			a -= 9;
		}
	}
		
	if(a>=5){
		e += "V";
		a -= 5;
	}else if(a>=4){
		e += "IV";
		a -= 4;
	}
	
	while(a>=1){
		e += "I";
		a--;
	}
	
	cout<<e;
};

int pro6(int aa){
	string *uni, *diez, *dec, *cen;
	uni = new string [10];
	diez = new string [10];
	dec = new string [10];
	cen = new string [10];
	uni[0] = "cero";
	uni[1] = "uno";
	uni[2] = "dos";
	uni[3] = "tres";
	uni[4] = "cuatro";
	uni[5] = "cinco";
	uni[6] = "seis";
	uni[7] = "siete";
	uni[8] = "ocho";
	uni[9] = "nueve";
	diez[0] = "diez";
	diez[1] = "once";
	diez[2] = "doce";
	diez[3] = "trece";
	diez[4] = "catorce";
	diez[5] = "quince";
	dec[2] = "veinte";
	dec[3] = "treinta";
	dec[4] = "cuarenta";
	dec[5] = "cincuenta";
	dec[6] = "sesenta";
	dec[7] = "setenta";
	dec[8] = "ochenta";
	dec[9] = "noventa";
	dec[1] = "diez";
	cen[5] = "quinientos ";
	cen[7] = "setecientos ";
	cen[9] = "novecientos ";
	
	if(aa>1001 || aa<0){
		do{
		
		cout<<"Ingresa un numero correcto por favor... ";
		cin>>aa;
		}while(aa>1001 || aa<0);
	}
	
	if (aa==1000){
		f = "mil";
		e = "";
	}else{
		b = aa/100;
		c = (aa/10)%10;
		d = aa%10;
		
		if(a<10 || b>0){
			e = uni[d];
		}
		
		if(c==1 && d>=1 && d<=5){
			e = diez[d];
		};
		
		if(c==1 && d>5){
			e = "dieci"+uni[d];
		}
		
		if(c==2 && d>0){
			e = "veinti"+uni[d];
		}
		
		if(c>0 && d==0){
			e = dec[c];
		}else if(c>0 && c!=1 && c!=2 && d>0){
			e = dec[c] + " y " + uni[d];
		};
		
		f = "";
		if(aa==100){
			e = "cien";
		}else if(aa>100){
			f = "ciento ";
		};
		
		if(b>1 && c==0 && d==0){
			f = uni[b] + "cientos ";
			e = "";
		}else if(b>1){
			f = uni[b] + "cientos ";
		}
		
		if(b==5 || b==7 || b==9){
			f = cen[b];
		}
	}
	
	if(z == 0 && aa<10){
		e = "cero " + e;
	}
	
	cout<<f<<e;
	delete[] uni;
	delete[] diez;
	delete[] dec;
	delete[] cen;
};

int pro7(int jmsm){
	//Obtención de decimales :v 
	d = jmsm%100;
	z = (jmsm/10)%10;
}


int pro8(){
	cout<<"------------Tabla de Multiplicar--------------\n\n";
	cout<<"Ingresa el valor a multiplicar: ";
	cin>>a;
	cout<<"\n\n";
	for(int i=1; i<11;i++){
		cout<<a<<" * "<<i<<" = "<<a*i<<endl;
	}
};

int pro9(){
	cout<<"-------Tablas de multiplicar del 1 al 10-------\n\n";
	for(int i=1; i<11;i++){
		cout<<"\nTabla del "<<i<<endl;
		for(int ii=1; ii<11;ii++){
			cout<<i<<" * "<<ii<<" = "<<i*ii<<endl;
		}
	}
};

int pro10(){
	int num1, num2, *mul, apo1, apo2;
	mul = new int [1];
	
	cout<<"--------Multiplicación de forma grafica--------\n\nIngresa numeros menores a 100..."<<endl;
	system("pause");
	system("cls");
	
	cout<<"--------Multiplicación de forma grafica--------\n\n";
	cout<<"1# Ingresa un numero: ";
	cin>>num1; 
	
	if(num1>=100){
		do{
			cout<<"Ingresa un numero valido... ";
			cin>>num1;
		}while(num1>=100);
	}
	
	cout<<"2# Ingresa un numero: ";
	cin>>num2; 
	
	if(num2>=100){
		do{
			cout<<"Ingresa un numero valido... ";
			cin>>num2;
		}while(num2>=100);
	}	
	
	system("cls");
	cout<<"--------Multiplicación de forma grafica--------\n\nEl resultado es: "<<endl;;
	if(num1>=10){
		e = "    ";
	}else{
		e = "     ";
	}

	cout<<e<<num1<<endl;
	
	if(num2>=10){
		e = "  ";
	}else{
		e = "   ";
	}
	
	cout<<e<<"x "<<num2<<endl;
	
	if(num1>=10 && num2>=10){
		mul[0] = num2/10;
		mul[1] = num2%10;
		apo1 = mul[1]*num1;
		apo2 = mul[0]*num1;
		
		cout<<"------------"<<endl;	
		
		if(apo1>=100){
			e = "   ";
		}else if(apo1>=10){
			e = "    ";
		}else{
			e = "     ";
		}
		if(apo2>=100){
			f = "+ ";
		}else if(apo2>=10){
			f = "+  ";
		}else {
			f = "+   ";
		}
		
		cout<<e<<apo1<<endl;
		cout<<f<<apo2<<endl;
	}

	apo1 = num1*num2;
	
	if(apo1>=1000){
		e = "  ";
	}else if(apo1>=100){
		e = "   ";
	}else if(apo1>=10){
		e = "    ";
	}else{
		e = "     ";
	}
	
	cout<<"------------"<<endl;
	cout<<e<<apo1;
	
	delete[] mul;
};

int pro11(){
	cout<<"-------Conversor de decimales a binario-------\n\n";
	cout<<"Ingresa un numero entero positivo: ";
	cin>>a; 
	
	if(a<0){
		do{
			cout<<"Ingresa un numero correcto: ";
			cin>>a;
		}while(a<0);
	}
	
	while(a!=0){
		stringstream ss;	
		b = a%2;
		ss << b;
		ss >> f;   
		a = a/2;
		e = f + e;
	}
	
	cout<<"Resultado en binario: "<<e;
}

int pro12(){
	string *hex;
	hex = new string [6];
	hex[0] = "A";
	hex[1] = "B";
	hex[2] = "C";
	hex[3] = "D";
	hex[4] = "E";
	hex[5] = "F";
	
	cout<<"------Conversor de decimales a hexadecimal------\n\n";
	cout<<"Ingresa un numero entero positivo: ";
	cin>>a; 
	
	if(a<0){
		do{
			cout<<"Ingresa un numero correcto: ";
			cin>>a;
		}while(a<0);
	}
	
	while(a!=0){
		stringstream ss;	
		b = a%16;
		ss << b;
		ss >> f;
		if(b>9 && b<16)   {
			f = hex[b-10];
		}
		a = a/16;
		e = f + e;
	}
	
	cout<<"Resultado en hexadecimal: "<<e;
	
	delete[] hex;
};

int pro13(){
	e = "----------Figuras geometricas basicas---------\n";
	cout<<e<<endl;
	cout<<"                ........."<<endl;
	cout<<"                ........."<<endl;
	cout<<"                ........."<<endl;
	cout<<"                ........."<<endl;
	Sleep(2000);
	system("cls");
	
	cout<<e<<endl;
	cout<<"                    ."<<endl;
	cout<<"                   ..."<<endl;
	cout<<"                  ....."<<endl;
	cout<<"                 ......."<<endl;
	cout<<"                ........."<<endl;
	Sleep(2000);
	system("cls");
	
	cout<<e<<endl;
	cout<<"                 ........."<<endl;
	cout<<"                ..........."<<endl;
	cout<<"                 ........."<<endl;
	Sleep(2000);
	system("cls");

	
	cout<<e<<endl;
	cout<<"                      ."<<endl;
	cout<<"                     ..."<<endl;
	cout<<"                    ....."<<endl;
	cout<<"                   ......."<<endl;
	cout<<"                    ....."<<endl;
	cout<<"                     ..."<<endl;
	cout<<"                      ."<<endl;
	system("pause");

};

int pro14(){
	cout<<"----------Punto por toda la pantalla----------\n\n";
	char mj='n', *punt;
	punt = new char [100];
	a = 1;
	b = 5;
	
	for(int i=0; i<100; i++){
		punt [i] = ' ';
	}
	
	do{
		while(a<b){
			a+=2;
			for(int i=1; i<100; i++){
				punt [i] = '>';
				punt [i-1] = ' ';
				for(int ii=0; ii<100; ii++){
					cout<<punt[ii];
				}
				system("cls");
				cout<<"----------Punto por toda la pantalla----------\n\n";
				for(int sal=0; sal<=a;sal++){
					cout<<endl;
				}
				Sleep(10);
			}
			
			for(int i=99; i>0; i--){
				punt [i] = '<';
				punt [i+1] = ' ';
				for(int ii=0; ii<100; ii++){
					cout<<punt[ii];
				}
				system("cls");
				cout<<"----------Punto por toda la pantalla----------\n\n";
				for(int sal=0; sal<=(a+1);sal++){
					cout<<endl;
				}
				Sleep(10);
			}
		}
		
		b+=5;
		
		cout<<"Deseas continuar? s/n: ";
		cin>>mj;
	}while(mj=='s' || mj=='S');
	
	delete[] punt;
};

int pro15(){
	b = 1;
	c = 500;
	char tip, mj;
	int tot = 0;
	string caj = "--------Simulador de cajero automatico--------\n\n";
	
	cout<<caj<<endl;
	cout<<"\nInformacion importante: "<<endl;
	cout<<"Codigo: 1234\n"<<"Tipo de cuenta: Monetaria\n"<<"Monto disponible: Q500\n\n";
	system("pause");
	system("cls");
	
	cout<<caj<<endl;
	cout<<"Inserte tarjeta (ins): ";
	cin>>e;
	
	if(e!="ins"){
		do{
			cout<<"Inserte de forma correcta la tarjeta por favor... ";
			cin>>e;
		}while(e!="ins");
	}
	
	system("cls");
	cout<<caj<<"\nBienvenido"<<endl;
	cout<<"Ingrese codigo: ";
	cin>>a;
	
	if(a!=1234){
		do{
			cout<<"Codigo incorrecto, ingreselo de nuevo: ";
			cin>>a;
			
			b++;
		}while(b!=3);
		
		if(b==3){
			system("cls");
			cout<<caj<<"\nPor la seguridad de su cuenta, la misma se ha desactivado.\nMotivo: intentos maximos excedidos";
			
			b = 0;
			system("pause");
		}
	}
	
	if(b!=0){
		do{
			system("cls");
			cout<<caj<<"\nEscoja el tipo de cuenta"<<endl;
			cout<<"Montaria ........... M\nAhorro.............. A\n\nIngrese el tipo de cuenta: ";
			cin>>tip;
			
			if(tip=='M' || tip=='m'){
				system("cls");
				cout<<caj<<"\nCuenta Monetaria\n\nIngrese el monto a retirar: ";
				cin>>a;
				
				if(a>c){
					cout<<"Monto a retirar excede el monto en su cuenta";
				}else if(a<1){
					cout<<"Monto a retirar debe ser mayor a 0";
				}else if(a%100!=0){
					cout<<"Monto invalido. Recuerde que unicamente se brindan billetes con valor a Q.100";
				}else{
					cout<<"Tome su dinero";
					tot += a;
					stringstream ss;
					ss << a;
					ss >> f; 
					c -= a;
					g += f;
				}
			}else{
				cout<<"\nNo cuenta con este tipo de cuenta activa";
			}
			
			cout<<"\nDesea realizar otra transaccion? s/n: ";
			cin>>mj;
		}while(mj=='s' || mj=='S');
		
		
		a = (g.length())/3;
		system("cls");
		cout<<caj<<"\n-------------------Resumen--------------------\n\n";
		
		for(int i=0;i<g.length();i+=3){
			cout<<"Retiro ................................ Q. "<<g.substr(i,3)<<endl;
		}
		
		cout<<"\nTotal ................................. Q. "<<tot<<endl;
		cout<<"\nHora: ";
		system("time /t");
		cout<<"Fecha: ";
		system("date /t");
		cout<<"\n\nGracias";
	}
	
	g = "";
};

int pro16(){
	cout<<"------------Calculo de hipotenusa-------------\n\n";
	cout<<"Ingrese el valor del cateto opuesto: ";
	cin>>h;
	cout<<"Ingrese el valor del cateto adyacente: ";
	cin>>i;
	cout<<"\nEl valor de la hipotenusa es: "<<sqrt((h*h)+(i*i));
};




int menu(int jul){
	system("cls");
	
	switch (jul){
		case 1:
			pro1();
		break;
		case 2:
			pro2();
		break;
		case 3:
			pro3();
		break;
		case 4:
			pro4();
		break;
		case 5:
			pro5();
		break;
		case 6:
			cout<<"---------Conversor de arabigos a letras--------\n\n";
			cout<<"Ingresa un numero menor o igual a 1000: ";
			cin>>a;
			pro6(a);
		break;
		case 7:
			cout<<"--Conversor de arabigos con decimales a letras--\n\n";
			cout<<"Ingresa un numero menor o igual a 1000 con dos decimales: ";
			cin>>h;
			
			pro6(h);
			h *= 100;
			pro7(h);
			
			cout<<" punto ";
			
			pro6(d);
		break;
		case 8:
			pro8();
		break;
		case 9:
			pro9();
		break;
		case 10:
			pro10();
		break;
		case 11:
			pro11();
		break;
		case 12:
			pro12();
		break;
		case 13:
			pro13();
		break;
		case 14:
			pro14();
		break;
		case 15:
			pro15();
		break;
		case 16:
			pro16();
		break;
		default: cout<<"Numero no es correcto...";
	}			
}

int main(){
	try{
		
		
		char fin;
		int inicio;
		do{
			cout<<"____________________MENU PRINCIPAL____________________\n\nEscoge una de las siguientes opciones: ";
			cout<<"\n1.Suma, resta, mulplicacion y division"<<endl;
			cout<<"2.Numero impar o par"<<endl;
			cout<<"3.Conversor de unidades"<<endl;
			cout<<"4.Palindromo?"<<endl;
			cout<<"5.Conversor de arabigos a romanos"<<endl;
			cout<<"6.Conversor de enteros a letras"<<endl;
			cout<<"7.Conversor de enteros con decimal a letras"<<endl;
			cout<<"8.Tabla de multiplicar"<<endl;
			cout<<"9.Tablas de multpliar del 1 al 10"<<endl;
			cout<<"10.Multiplicacion de forma grafica"<<endl;
			cout<<"11.Conversor de decimales a binario"<<endl;
			cout<<"12.Conversor de decimales a hexadecimal"<<endl;
			cout<<"13.Figuras geometricas basicas"<<endl;
			cout<<"14.Punto por toda la pantalla"<<endl;
			cout<<"15.Simulador de cajero automatico"<<endl;
			cout<<"16.Calculo de hipotenusa"<<endl;
			cout<<"\nIngresa una opcion: ";
			cin>>inicio;
			menu(inicio);
			
			cout<<"\n\n\n\nDeseas regresar al menu (s/n)? ";
			cin>>fin;
			
			if(fin=='s' || fin =='S'){
				system("cls");
				a = 0, b = 0, c = 0, d = 0, z = 1;
				e = "", f = "", g = "";
				h = 0, i = 0, j = 0;
			}
		}while(fin=='s' || fin =='S');
		
		system("pause");
		return 0;
		
	}catch(int falle){
		cout<<"Error";
	}
};
