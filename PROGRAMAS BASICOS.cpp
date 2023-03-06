#include <iostream>
#include <cmath>
#include <conio.h>
#include <ctime>
#include <windows.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#define A (M_PI)/180.0
using namespace std;

main (){
	
	int mn,opcion;	
        cout<<"						MENU 				"<<endl;
        cout<<""<<endl;
        cout << "1. Suma, Resta, Multiplicacion y Division de dos Numeros" << endl;
        cout << "2. Numero Par o Impar" << endl;
        cout << "3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa" << endl;
        cout << "4. Determinar si una palabra o un numero es palindromo" << endl;
        cout << "5. Conversion de Numeros Arabigos a Romanos" << endl;
        cout << "6. Conversion de Numeros Enteros a Letras" << endl;
        cout << "7. Conversion de Numeros Enteros con Decimal a Letras" << endl;
        cout << "8. Tablas de Multiplicar" << endl;
        cout << "9. Todas las Tablas de Multiplicar 1-10" << endl;
        cout << "10. Forma Grafica de la Multiplicacion Manual" << endl;
        cout << "11. Conversion de Numeros Decimales-Binario" << endl;
        cout << "12. Conversion de Numeros Decimales a Hexadecimales" << endl;
        cout << "13. Figuras Geometricas Basicas" << endl;
        cout << "14. Mover un punto en toda la pantalla" << endl;
        cout << "15. Simulacion de un Cajero" << endl;
        cout << "16. Calcular la hipotenusa" << endl;
        cout << "17. Ordenar Numeros de Manera Asendente" << endl;
        cout << "18. Area de un Triangulo de 3 Lados" << endl;
        cout << "19. Subcidio de una Familia" << endl;
        cout << "20. Resultante entre dos Fuerzas" << endl;
        cout << "21. SALIR" << endl;
        cout << "		INGRESE SU OPCION: "<< endl; 
        cin>>mn;
     switch(mn)
     	{
     		
case 1 : cout<<"Suma, Resta, Multiplicacion y Division de dos Numeros"<<endl;
     {
	  float x,y,s,r,m,d;
      cout<<"Ingrese primer numero: ";
      cin>>x;
      cout<<"Ingrese segundo numero: ";
      cin>>y;
      s=x+y;
      r=x-y;
      m=x*y;
      d=x/y;
      cout<<"Suma: "<<x<<"+"<<y<<"= "<<s;
      cout<<""<<endl;
      cout<<"Resta: "<<x<<"-"<<y<<"= "<<r;
      cout<<""<<endl;
      cout<<"Multiplicacion: "<<x<<"*"<<y<<"= "<<m;
      cout<<""<<endl;
      cout<<"Division: "<<x<<"/"<<y<<"= "<<d;
    return 0;
	}
	
case 2:cout<<"Numero es Par o Impar"<<endl;
cout<<""<<endl;
     float nm;
     div_t rst;
     cout << "Ingrese un Digito" <<endl;
     cin >> nm; 
     rst=div(nm,2);
     if (rst.rem>0)
	 {
     cout<<nm<<" Su numero es Impar"<<endl;
	 }else {
     cout<<" Su numero es Par"<<endl;
	 }
     cin.get();
     cin.ignore();
     return 0;	
     
case 3:cout<<"Convertir de Km a Mill, M a Pulg, de Lbs a Kls y Viceversa"<<endl;
cout<<""<<endl;
     {
     float input;
     char uni;
     cout << "Ingrese un valor seguido de la Unidad (km= kilometros, m= metros, lb= libras) ";
     cin >> input >> uni;
     switch (uni) {
        case 'km':  
            input *= 0.621371;
            cout<< "El valor convertido a millas es: " << input << " mi" << endl;
            break;
        case 'm':  
            input *= 39.3701;
            cout << "El valor convertido a pulgadas es: " << input << " in" << endl;
            break;
        case 'lb':  
            input *= 0.453592;
            cout << "El valor convertido a kilos es: " << input << " kg" << endl;
            break;
        default:
            cout << "Unidad no Reconocida" << endl;
     } 
	 return 0;
	 }
	 
case 4:cout<<"Determinar si la Palabra o Numero es Palindromo"<<endl; 
     { 
     float input;
     cout << "Ingresa una palabra o numero: ";
     cin >> input;
     char* ptr = reinterpret_cast<char*>(&input);
     int tamano = sizeof(input);
     bool es_palindromo = true;
     for (int i = 0; i < tamano / 2; i++) {
        if (ptr[i] != ptr[tamano - 1 - i]) {
            es_palindromo = false;
            break;
        }
     }
     if (es_palindromo) {
        cout << "La entrada es un palindromo" << endl;
     } else {
        cout << "La entrada no es un palindromo" << endl;
     }
     return 0;
	 }

case 5:cout<<"Conversion de Numeros Arabigos a Romanos"<<endl;
      {
	 int c;
	 int d;
	 int m;
	 float n;
	 int u;
	 cout << "Escribe un numero" << endl;
	 cin >> n;
	 m = int(n/1000)%10;
	 c = int(n/100)%10;
	 d = int(n/10)%10;
	 u = int(n/1)%10;
	 if (m>3) {
		cout << "El numero no es calculable" << endl;
	 } else {
		switch (m) {
		case 1:
			cout << "M";
			break;
		case 2:
			cout << "MM";
			break;
		case 3:
			cout << "MMM";
			break;
		}
		switch (c) {
		case 1:
			cout << "C";
			break;
		case 2:
			cout << "CC";
			break;
		case 3:
			cout << "CCC";
			break;
		case 4:
			cout << "CD";
			break;
		case 5:
			cout << "D";
			break;
		case 6:
			cout << "DC";
			break;
		case 7:
			cout << "DCC";
			break;
		case 8:
			cout << "DCCC";
			break;
		case 9:
			cout << "CM";
			break;
		}
		switch (d) {
		case 1:
			cout << "X";
			break;
		case 2:
			cout << "XX";
			break;
		case 3:
			cout << "XXX";
			break;
		case 4:
			cout << "XL";
			break;
		case 5:
			cout << "L";
			break;
		case 6:
			cout << "LX";
			break;
		case 7:
			cout << "LXX";
			break;
		case 8:
			cout << "LXXX";
			break;
		case 9:
			cout << "XC";
			break;
		}
		switch (u) {
		case 1:
			cout << "I" << endl;
			break;
		case 2:
			cout << "II" << endl;
			break;
		case 3:
			cout << "III" << endl;
			break;
		case 4:
			cout << "IV" << endl;
			break;
		case 5:
			cout << "V" << endl;
			break;
		case 6:
			cout << "VI" << endl;
			break;
		case 7:
			cout << "VII" << endl;
			break;
		case 8:
			cout << "VIII" << endl;
			break;
		case 9:
			cout << "IX" << endl;
			break;
		}
 	}
	 return 0;
	 }
	 
case 6:cout<<"Conversion de Numeros Enteros a Letras"<<endl;
     {
	 int x;
	 cout<<"Ingrese un Digito"<<endl;
	 cin>>x;
     if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
     else

    	{
		if(x>=900)	{cout<<"NOVECIENTOS "	;x=x-900;}
   	   else if(x>=800)	{cout<<"OCHOCIENTOS "	;x=x-800;}
	   else if(x>=700)	{cout<<"SETECIENTOS "	;x=x-700;}
	   else if(x>=600)	{cout<<"SEISCIENTOS "	;x=x-600;}
	   else if(x>=500)	{cout<<"QUINIENTOS "	;x=x-500;}
	   else if(x>=400)	{cout<<"CUATROCIENTOS "	;x=x-400;}
	   else if(x>=300)	{cout<<"TRESCIENTOS "	;x=x-300;}
	   else if(x>=200)	{cout<<"DOSCIENTOS "	;x=x-200;}
	   else if(x>100)	{cout<<"CIENTO "	;x=x-100;}
	   else if(x==100)	{cout<<"CIEN"		;x=x-100;}
		if(x>90)	{cout<<"NOVENTA Y "	;x=x-90; }
	    	if(x==90)	{cout<<"NOVENTA"	;x=x-90; }  
	    	if(x>80)	{cout<<"OCHENTA Y "	;x=x-80; }
	    	if(x==80)	{cout<<"OCHENTA"	;x=x-80; }
	    	if(x>70)	{cout<<"SETENTA Y "	;x=x-70; }
	    	if(x==70)	{cout<<"SETENTA"	;x=x-70; }
	    	if(x>60)	{cout<<"SESENTA Y "	;x=x-60; }
	    	if(x==60)	{cout<<"SESENTA"	;x=x-60; }
	    	if(x>50)	{cout<<"CINCUENTA Y "	;x=x-50; }
	    	if(x==50)	{cout<<"CINCUENTA"	;x=x-50; }
	    	if(x>40)	{cout<<"CUARENTA Y "	;x=x-40; }
	    	if(x==40)	{cout<<"CUARENTA"	;x=x-40; }
	    	if(x>30)	{cout<<"TREINTA Y "	;x=x-30; }
	    	if(x==30)	{cout<<"TREINTA"	;x=x-30; }
	    	if(x>20)	{cout<<"VEINTI"		;x=x-20; }
	    	if(x==20)	{cout<<"VEINTE"		;x=x-20; }
		if(x>=16)	{cout<<"DIECI"		;x=x-10; }
	   else if(x==15)	{cout<<"QUINCE"		;x=x-15; }
	   else if(x==14)	{cout<<"CATORCE"	;x=x-14; }
	   else if(x==13)	{cout<<"TRECE"		;x=x-13; } 
	   else if(x==12)	{cout<<"DOCE"		;x=x-12; }
	   else if(x==11)	{cout<<"ONCE"		;x=x-11; }
	   else if(x==10)	{cout<<"DIEZ"		;x=x-10; }		
		if(x==9)	{cout<<"NUEVE"		;x=x-9;  }
		if(x==8)	{cout<<"OCHO"		;x=x-8;  }
		if(x==7)	{cout<<"SIETE"		;x=x-7;  }
	    	if(x==6)	{cout<<"SEIS"		;x=x-6;  }
	   else if(x==5)	{cout<<"CINCO"		;x=x-5;  }
	   else if(x==4)	{cout<<"CUATRO"		;x=x-4;	 }
	   else if(x==3)	{cout<<"TRES"		;x=x-3;	 }
	   else if(x==2)	{cout<<"DOS"		;x=x-2;	 }
	   else if(x==1)	{cout<<"UNO"		;x=x-1;	 }
	   }
      cout<<endl;
	  cin.ignore();return 0;
	  }
	  
case 7:cout<<"Conversion de Numeros Enteros con Decimal a Letras"<<endl; 
    {
     double valor;
     int miles,cientos,unidades,decimales;
     char numeros[100][20] = 
     {
     {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
     {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
     {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
     {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
     {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
     {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
     {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
     {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
     {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
     {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
      };
     char centenas[10][20] = 
     {
     {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
     };
     std::cout << "Introduzca Numero: ";
     std::cin >> valor;
     miles = ((int)valor)/1000;
     cientos = (((int)valor)%1000)/100;
     unidades = ((int)valor)%100;
     decimales = ((int) (valor*100.0))%100 ;
     if (miles)
     std::cout << numeros[miles] << " mil ";
     if (cientos)
     std::cout << centenas[cientos] << " ";
     if (unidades) 
     std::cout << numeros[unidades];
     if (decimales)
      {
     if(miles || cientos || unidades)
     {
     std::cout << " con ";
     }
     std::cout << numeros[decimales] << " centavos.";
     }
     std::cout << std::endl;
     system("pause");
     return 0;
	 } 
  
 
case 8:cout<<"Tablas de Multiplicar"<<endl;
	  {
     float nm,i;
	 do{
	 cout<<"Ingrese un numero a Multiplicar: ";
	 cin>>nm;	
	  }while((nm<1) || (nm>10));
     for(int i=1; i<=10; i++){
	 cout<<nm<<"*"<<i<<"= "<<nm * i<<endl;
	 }
	 return 0;
	 }

case 9:cout<<"Todas las Tablas de Multiplicar 1-10"<<endl;
     {
     float num1 = 1.0, num2 = 1.0, resultado;
     while (num1 <= 10.0) {
        cout << "Tabla del " << num1 << ":" << endl;
        while (num2 <= 10.0) {
            resultado = num1 * num2;
            cout << num1 << " x " << num2 << " = " << resultado << endl;
            num2 += 1.0;
        }
        num2 = 1.0;
        num1 += 1.0;
        cout << endl;
     }
     return 0;
 	}
 	
case 10:cout<<"Forma Grafica de la Multiplicacion Manual"<<endl;
     {
     float num1 = 45.0, num2 = 32.0, resultado, espacio = 0.0;
     cout << "  " << num1 << endl;
     cout << "x " << num2 << endl;
     cout << "-----" << endl;
     while (num2 > 0.0) {
        resultado = num1 * (num2 - int(num2));
        num2 = int(num2);
        espacio += 1.0;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << resultado << endl;
        resultado = num1 * num2;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << resultado << endl;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << "-----" << endl;
        num2 /= 10.0;
     }
     resultado = num1 * int(num2);
     for (float i = 0.0; i < espacio; i += 1.0) {
        cout << " ";
     }
     cout << resultado << endl;
     cout << "-----" << endl;
     cout << " " << num1 * num2 << endl;
     return 0;
	 }
	 
case 11:cout<<"Conversion de Numeros Decimales-Binario"<<endl;
     {
 	float binario;
 	int n;
 	float x;
 	cout << "Digita un numero" << endl;
 	cin >> n;
 	cout << "El numero " <<n<< " En binario seria: " << endl;
 	x = 1;
 	binario = 0;
 	while (n>=1) {
		if (n%2==1) {
			binario = binario+x;
		}
		n = int(n/2);
		x = x*10;
 	}
 	cout << binario << endl;
 	return 0;
 	}

case 12:cout<<"Conversion de Numeros Decimales a Hexadecimales"<<endl; 
     {
     int decimalNumber;
     cout << "Ingrese un Numero Decimal: ";
     cin >> decimalNumber;
     stringstream ss;
     ss << hex << decimalNumber;
     string hexNumber = ss.str();
	 cout << "El numero hexadecimal es: "<< hexNumber << endl;
     return 0;
	 }
   
case 13:cout<<"Figuras Geometricas Basicas"<<endl;
	cout << "Triangulo:" << endl;
	cout << "  **  " << endl;
	cout << " **** " << endl;
	cout << "******" << endl;
	cout << "Circulo:" << endl;
	cout << "  ***  " << endl;
	cout << " ***** " << endl;
	cout << "*******" << endl;
	cout << "*******" << endl;
	cout << " ***** " << endl;
	cout << "  ***  " << endl;
	cout << "Cuadrado:" << endl;
	cout << "******" << endl;
	cout << "*    *" << endl;
	cout << "*    *" << endl;
	cout << "*    *" << endl;
	cout << "******" << endl;
	return 0;
     
case 14:cout<<"Mover un Punto en la Pantalla"<<endl; 
     {
	 int x = 0, y = 0; 
     int dx = 1, dy = 1; 
     while (true)
    {
        system("cls");
        for (int i = 0; i < y; i++)
            std::cout << std::endl;
        for (int i = 0; i < x; i++)
            std::cout << " ";
        std::cout << "*" << std::endl;
        x += dx;
        y += dy;
        if (x == 0 || x == 10) 
            dx = -dx;
        if (y == 0 || y == 10) 
            dy = -dy;

        break;
      }
	  }
     return 0;
     
case 15:cout<<"Simulacion de un Cajero"<<endl;
     {
 	float conta;
	 string contra;
	 float dep;
	 int rst;
	 float ret;
	 float sd;
	 sd = 1000;
	 conta = 1;
 	while (conta<=3) {
		cout << "Escribe la contraseña" << endl;
		cin >> contra;
		if (contra=="abc") {
			conta = 4;
			rst = 0;
			while (rst!=4) {
				cout << "1: = Consultar saldo" << endl;
				cout << "2: = Ingresar saldo" << endl;
				cout << "3: = Retirar saldo" << endl;
				cout << "4: = Salir" << endl;
				cin >> rst;
				switch (rst) {
				case 1:
					cout << "Tu saldo actual es: Q " << sd << endl;
					break;
				case 2:
					cout << "Ingresa la cantidad a depositar" << endl;
					cin >> dep;
					sd = sd+dep;
					cout << "Tu saldo actual es es: Q" << sd << endl;
					break;
				case 3:
					cout << "Ingresa la cantidad a retirar" << endl;
					cin >> ret;
					if (ret>sd) {
						cout << "La cantidad supera el saldo" << endl;
						cout << "Tu saldo actual es: Q" << sd << endl;
					} else {
						sd = sd-ret;
						cout << "Tu saldo actual es: Q" << sd << endl;
					}
					break;
				}
			}
		} else {
			conta = conta+1;
			if (conta==4) {
				cout << "Has fallado los 3 intentos" << endl;
			} else {
				cout << "La contraseÃ±a es incorrecta" << endl;
			}
		}
	 }
	 	return 0;
		 }

case 16:cout<<"Calcular la hipotenusa"<<endl;
     {
     float cat1 = 5.0;
     float cat2 = 6.0;
     float hipo = sqrt(pow(cat1, 2.0) + pow(cat2, 2.0));
     std::cout << "La hipotenusa es: " << hipo << std::endl;
     return 0;
	 }
	
case 17:cout<<"Ordenar Numeros de Manera Asendente"<<endl;
     {
     int a,b,c,temp; 
	 cout<<"Ingrese un numero: "<<endl;
	 cin>>a; 
	 cout<<"Ingrese un segundo numero: "<<endl;
	 cin>>b; 
	 cout<<"Ingrese un tercer numero: "<<endl;
	 cin>>c; if (a>b)   {temp=a;    a=b;    b=temp;} if (a>c)   {temp=a;    a=c;    c=temp;} 
	 
	 if (b>c)   {temp=b;    b=c;    c=temp;} 
	 cout<<"Ordenando "<<a<<" , "<<b<<" y "<<c<<" de menor a mayor seria:"; 
	 cout<<"\n"<<a<<" , "<<b<<" , "<<c<<""; 
     return 0;
	 }		 
		
case 18:cout<<"Area de un Triangulo de 3 Lados"<<endl;
{
float a,b,c;                             
float p,at,r;              
              
cout<<"Ingrese el valor del lado a: ";
cin>>a;    
cout<<"Ingrese el valor del lado b: ";
cin>>b;    
cout<<"Ingrese el valor del lado c: ";
cin>>c;    

p=(a+b+c)/2.0;    r=p*(p-a)*(p-b)*(p-c);    
if (r>=0)       {at=sqrt(r);       cout<<at;}      
 else       	
{cout<<"No existe tal triangulo...!";} 
return 0;
 } 
 
 case 19:cout<<"Subcidio de una Familia"<<endl;
 {
 	int he,hne,nh; char viu;       
	 int sub,subtot,total; 
	 cout<<"Ingrese el numero de hijos en edad escolar: ";
	 cin>>he; 
	 cout<<"Ingrese el numero de hijos que NO estan en edad escolar: ";
	 cin>>hne; nh=he+hne; 
	 if (nh<=2)    sub=30;    
	 else    {if (nh<=5)          
	 sub=50;          
	 else          
	 sub=60;} subtot=sub+he*5; 
	 cout<<"Es la madre viuda? Responda 'S' si SI y 'N' si NO: ";
	 cin>>viu; if (viu=='S')             
    total=subtot+15;       
	 else    total=subtot; cout<<"\nUd. recibira un subsidio de: "<<total<<" Nuevos Soles"; 
return 0; 	
 }
 
case 20:cout<<"Resultante entre dos Fuerzas"<<endl;
{
	float f1,f2,anggrados;    
	float R,angradian;    
	cout<<"Ingrese el valor de f1: ";
	cin>>f1;    
	cout<<"Ingrese el valor de f2: ";
	cin>>f2;    
	cout<<"Ingrese el valor del angulo entre f1 y f2: ";
	cin>>anggrados;    
	angradian=anggrados*A;    
	R=sqrt(pow(f1,2)+pow(f2,2)+2*f1*f2*cos(angradian));   
	 cout<<R;
return 0;	
}
		} 
	cin.ignore(); return 0;	  
}

