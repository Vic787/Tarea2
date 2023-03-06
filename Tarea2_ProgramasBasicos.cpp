/*
	Nombre: Víctor Fernando Minas Salazar
	Carné: 1290-22-12396
	Curso: Programación 1
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <cmath>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(){
	int n;
	
	cout << "------------------------- MENU -------------------------" << endl;
	cout << "1. Suma, resta, multiplicacion y division de dos numeros." << endl;
	cout << "2. Determinar si un numero es par o impar." << endl;
	cout << "3. Convertir km a mi, mt a pulg, de lb a kl y viceversa." << endl;
	cout << "4. Determinar si una palabra o numero es palindromo." << endl;
	cout << "5. Conversion de numeros arabigos a romanos." << endl;
	cout << "6. Conversion de numeros enteros a letras." << endl;
	cout << "7. Conversion de numeros enteros con decimal a letras." << endl;
	cout << "8. Una tabla de multiplicar." << endl;
	cout << "9. Todas las tablas de multiplicar del 1 al 10." << endl;
	cout << "10. Crear de forma grafica la multiplicacion manual." << endl;
	cout << "11. Conversion de numeros decimales a binario." << endl;
	cout << "12. Conversion de numeros decimales a hexadecimales." << endl;
	cout << "13. Crear figuras geometricas basicas." << endl;
	cout << "14. Mover un punto en toda la pantalla." << endl;
	cout << "15. Simulacion de un cajero automata." << endl;
	cout << "16. Calcular la hipotenusa." << endl;
	cout << "17. Calcular la altura de un triangulo equilatero." << endl;
	cout << "18. Calcular el factorial de un numero." << endl;
	cout << "19. Calcular el volumen de una esfera." << endl;
	cout << "20. Determinar el residuo de una division." << endl;
	cout << "\nIngrese un numero para acceder a su ejecucion: ";
	cin >> n;
	
	switch(n){
		case 1: // Suma, resta, multiplicacion y division de dos numeros.
			double n1, n2;
			
			cout << "Ingrese dos numeros:" << endl;
			cin >> n1 >> n2;
			
			cout << "Resultados: " << endl;
			cout << n1 << " + " << n2 << " = " << n1+n2 << endl;
			cout << n1 << " - " << n2 << " = " << n1-n2 << endl;
			cout << n1 << " x " << n2 << " = " << n1*n2 << endl;
			cout << n1 << " / " << n2 << " = " << n1/n2 << endl;
			break;
		case 2: // Determinar si un numero es par o impar.
				int num, cont;
				cout << "Ingrese un numero para verificarlo: ";
				cin >> num;
				
				for(int i = 1; i <= num; i++){
					if(num % 2 == 0){
						cont += 1;
					}
				}
				
				if(cont > 1){
					cout << "Es par." << endl;
				} else {
					cout << "Es impar." << endl;
				}
				break;
		case 3: // Convertir km a mi, mt a pulg, de lb a kl y viceversa.
			double km, mi, mt, pg, lb, kg;
			
			cout << "Ingrese una cantidad en km: ";
			cin >> km;
			cout << "Ingrese una cantidad en mi: ";
			cin >> mi;
			cout << "Ingrese una cantidad en mts: ";
			cin >> mt;
			cout << "Ingrese una cantidad en pulg: ";
			cin >> pg;
			cout << "Ingrese una cantidad en lb: ";
			cin >> lb;
			cout << "Ingrese una cantidad en kl: ";
			cin >> kg;
			
			// Salidas
			cout << "-> " << km << " km en mi son " << km*0.6214 << endl;
			cout << "-> " << mi << " mi en km son " << mi*1.6093 << endl;
			cout << "-> " << mt << " mt en pg son " << mt*39.3701 << endl;
			cout << "-> " << pg << " pg en mt son " << pg*0.0254 << endl;
			cout << "-> " << lb << " lb en kl son " << lb*0.4536 << endl;
			cout << "-> " << kg << " kg en lb son " << kg*2.2046 << endl;
			break;
		case 4: // Determinar si una palabra o numero es palindromo.
		// NOTA: UTILIZAR {} CUANDO APAREZCA EL ERROR DE JUMP TO CASE LABEL -FPERMISSIVE
			{
				string p;
				bool palindromo = true;
				
				cout << "Ingrese la palabra para verificarla: ";
				cin >> p;
				
				int length = p.length();
				for(int i = 0; i < length / 2; i++){
					if(p[i] == p[length - i - 1] && palindromo == true){
						palindromo = 1;
						break;
					}
				}
				
				if (palindromo){
					cout << "'" << p << "' es un numero/palabra palindroma." << endl;
				} else {
					cout << "'" << p << "' no es un numero/palabra palindroma." << endl;
				}
				break;
			}
		case 5: // Conversion de numeros arabigos a romanos.
			{
				int v[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	    		string s[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	    		int numero;
	    		string romano;
	
	    		cout << "Introduce un numero arabigo entre 1 y 3000: ";
	    		cin >> numero;
	
	    		if (numero >= 1 && numero <= 3000){
	        		for (int i = 0; i < 13; i++){
	            		while (numero >= v[i]){
	                		romano += s[i];
	                		numero -= v[i];
	            		}
	        		}
	        		cout << "El numero en numeros romanos es: " << romano << endl;
	    		} else {
	        		cout << "El numero no esta en el rango delimitado." << endl;
	    		}
				break;
			}
		case 6: // Conversion de numeros enteros a letras
			{
				int numero, unidades, decenas, centenas;
    
			    cout << "Ingrese un numero del 1 al 1000: ";
			    cin >> numero;
			
			    if (numero >= 1 && numero <= 1000) {
			        unidades = numero % 10;
			        decenas = (numero / 10) % 10;
			        centenas = (numero / 100) % 10;
			        
			        if (centenas > 0) {
			            switch (centenas) {
			                case 1: cout << "ciento ";
								break;
			                case 2: cout << "doscientos "; 
								break;
			                case 3: cout << "trescientos "; 
								break;
			                case 4: cout << "cuatrocientos "; 
								break;
			                case 5: cout << "quinientos "; 
								break;
			                case 6: cout << "seiscientos "; 
								break;
			                case 7: cout << "setecientos "; 
								break;
			                case 8: cout << "ochocientos "; 
								break;
			                case 9: cout << "novecientos "; 
								break;
			            }
			        }
			        
			        if (decenas > 0) {
			            switch (decenas) {
			                case 1: 
			                    if (unidades == 0) cout << "diez";
			                    else if (unidades == 1) cout << "once";
			                    else if (unidades == 2) cout << "doce";
			                    else if (unidades == 3) cout << "trece";
			                    else if (unidades == 4) cout << "catorce";
			                    else if (unidades == 5) cout << "quince";
			                    else cout << "dieci";
			                    break;
			                case 2: 
			                    if (unidades == 0){
			                    	cout << "veinte";
			                    } else {
			                    	cout << "veinti";
			                    }
			                    break;
			                case 3: cout << "treinta"; 
								break;
			                case 4: cout << "cuarenta"; 
								break;
			                case 5: cout << "cincuenta";
								break;
			                case 6: cout << "sesenta"; 
								break;
			                case 7: cout << "setenta"; 
								break;
			                case 8: cout << "ochenta"; 
								break;
			                case 9: cout << "noventa"; 
								break;
			            }
			        }
			        
			        if (decenas != 1) {
			            if (unidades > 0 || numero == 0) {
			                switch (unidades) {
			                    case 1: cout << "uno"; 
									break;
			                    case 2: cout << "dos"; 
									break;
			                    case 3: cout << "tres"; 
									break;
			                    case 4: cout << "cuatro"; 
									break;
			                    case 5: cout << "cinco"; 
									break;
			                    case 6: cout << "seis"; 
									break;
			                    case 7: cout << "siete"; 
									break;
			                    case 8: cout << "ocho"; 
									break;
			                    case 9: cout << "nueve"; 
									break;
			                }
			            }
			        }
			    } else {
			        cout << "El numero ingresado esta fuera de rango.";
			    }
				break;
			}
		case 7: // Conversion de numeros enteros con decimal a letras
			{
				float numero;
			    string unidad[21] = {"", "un", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve", "diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve", "veinte"};
			    string decena[10] = {"", "", "veinti", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
			
			    cout << "Introduce un numero con decimal entre 1 y 100: ";
			    cin >> numero;
			
			    int entero = static_cast<int>(numero);
			    int decimal = (numero - entero) * 100;
			
			    if (entero < 1 || entero > 100) {
			        cout << "El numero no está en el rango delimitado." << endl;
			        return 0;
			    }
			
			    if (entero <= 20) {
			        cout << unidad[entero];
			    } else if (entero < 30) {
			        cout << "veinti" << unidad[entero-20];
			    } else if (entero < 100) {
			        int d = entero / 10;
			        int u = entero % 10;
			        if (u == 0) {
			            cout << decena[d];
			        } else {
			            cout << decena[d] << " y " << unidad[u];
			        }
			    } else {
			        cout << "cien";
			    }
			
			    if (decimal > 0) {
			        if (entero > 0) {
			            cout << " con ";
			        }
			        if (decimal <= 20) {
			            cout << unidad[decimal];
			        } else {
			            int d = decimal / 10;
			            int u = decimal % 10;
			            if (u == 0) {
			                cout << decena[d];
			            } else {
			                cout << decena[d] << unidad[u];
			            }
			        }
			        cout << " centavo/s";
			    }
				break;
				
			}
		case 8: // Una tabla de multiplicar
			{
				int t;
				cout << "Ingrese el numero de la tabla de multiplicar que desea visualizar: ";
				cin >> t;
				
				cout << "----- Tabla del " << t << " -----" << endl;
				for(int i = 1; i <= 10; i++){
					cout << t << " x " << i << " = "<< t*i << endl;
				}
				break;
			}
		case 9: // Todas las tablas de multiplicar del 1 al 10
			{
				for(int i = 1; i <= 10; i++){
					cout << "----- Tabla del " << i << " -----" << endl;
					for(int j = 1; j <= 10; j++){
						cout << i << " x " << j << " = " << i*j << endl;
					}
					cout << endl;
				}
			}
		case 10: // Crear de forma grafica la multiplicacion manual
			{
				int n1, n2;
			    int res, c, p;
			
			    // Pedimos los dos números
			    cout << "Ingrese un numero: ";
			    cin >> n1;
			    cout << "Ingrese otro numero: ";
			    cin >> n2;
			
			    cout << "   " << n1 << endl;
			    cout << "x  " << n2 << endl;
			    cout << "------" << endl;
			    res = n1 * (n2 % 10);
			    
			    cout << "   " << res << endl;
			    p = n1 * (n2 / 10);
			    c = p / 10;
			    cout << "+ " << c << res % 10 << endl;
			    res = n1 * n2;
			    cout << "------" << endl;
			    cout << "  " << c << res % 100 << endl;
		    	break;
			}
		case 11: // Conversion de numeros decimales a binario
			{
				int n, binario = 0, potencia = 1;
			    cout << "Ingrese un numero con decimal: ";
			    cin >> n;
			
			    while (n > 0) {
			        binario += (n % 2) * potencia;
			        n /= 2;
			        potencia *= 10;
			    }
			
			    cout << "El numero en binario es: " << binario << endl;
				break;
			}
		case 12: // Conversion de numeros decimales a hexadecimales
			{
				int decimal;
				string hexadecimal = "";
			    char digitosHexadecimales[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
			    
			    cout << "Ingrese un numero para convertirlo: ";
			    cin >> decimal;
			
			    while (decimal > 0) {
			        int resto = decimal % 16;
			        hexadecimal = digitosHexadecimales[resto] + hexadecimal;
			        decimal /= 16;
			    }

    			cout << "El numero en hexadecimal es: " << hexadecimal << endl;
				break;
			}
		case 13: // Crear figuras geometricas basicas
			{
				int opc;
				cout << "---------- FIGURAS GEOMETRICAS ----------" << endl;
				cout << "1. Cuadrado" << endl;
				cout << "2. Triangulo" << endl;
				cout << "3. Rectangulo" << endl;
				cout << "Ingrese la figura que desea visualizar: ";
				cin >> opc;
				
				switch(opc){
					case 1:
						for(int i=0; i<5; i++){
                			for(int j=0; j<5; j++){
                    			cout << "* ";
                			}
                			cout << endl;
            			}
            			break;
            		case 2:
            			for(int i=0; i<5; i++){
                			for(int j=0; j<=i; j++){
                 			   cout << "* ";
                			}
               				cout << endl;
            			}
           				break;
           			case 3:
           				for (int i = 0; i < 5; i++){
				        	for (int j = 0; j < 20; j++){
				            	cout << "*";
				        	}
				        	cout << endl;
				    	}
           				break;
				}
				break;
			}
		case 14: // Mover un punto en toda la pantalla
			{
				system("cls");
	
			    CONSOLE_SCREEN_BUFFER_INFO csbi;
			    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
			    int screenWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
			    int screenHeight = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
			
			    int x = screenWidth / 2;
			    int y = screenHeight / 2;
			    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y });
			    cout << ".";
			
			    while (true) {
			        if (GetAsyncKeyState(VK_LEFT)) {
			            x--;
			        }
			        if (GetAsyncKeyState(VK_RIGHT)) {
			            x++;
			        }
			        if (GetAsyncKeyState(VK_UP)) {
			            y--;
			        }
			        if (GetAsyncKeyState(VK_DOWN)) {
			            y++;
			        }
			        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y });
			    }
	
				break;
			}
		case 15: // Simulacion de un cajero automata
			{
				int saldo = 5000; // saldo inicial
			    int opcion;
			    int monto;
			
			    cout << "Bienvenido al Cajero Automatico" << endl;
			    cout << "1. Consultar saldo" << endl;
			    cout << "2. Retirar dinero" << endl;
			    cout << "3. Salir" << endl;
			    cout << "Ingrese su opcion: ";
			    cin >> opcion;
			
			    switch(opcion) {
			        case 1:
			            cout << "Su saldo es de Q" << saldo << endl;
			            break;
			        case 2:
			            cout << "Ingrese la cantidad a retirar: ";
			            cin >> monto;
			            if(monto > saldo) {
			                cout << "Saldo insuficiente" << endl;
			            } else {
			                saldo -= monto;
			                cout << "Retiro exitoso" << endl;
			                cout << "Saldo restante: Q" << saldo << endl;
			            }
			            break;
			        case 3:
			            cout << "Gracias por utilizar nuestros servicios!" << endl;
			            break;
			        default:
			            cout << "Error. Ingrese un numero valido." << endl;
			            break;
	    		}
	    		break;
	    	}
		case 16: // Calcular la hipotenusa
			int a, b, c;
			cout << "Ingrese a y b: " << endl;
			cin >> a >> b;
			c = sqrt((a*a)+(b*b));
			cout << "La hipotenusa es de: " << c;
			break;
		case 17: // Calcular la altura de un triangulo equilatero
			{
				int a;
				float h;
				cout << "Ingrese el lado del triangulo equilatero: " << endl;
				cin >> a;
				h = (sqrt(3)/2)*a;
				cout << "La altura del triangulo equilatero es de: " << h << endl;
				break;
			}
		case 18: // Calcular el factorial de un numero
			{
				int num, fact = 1;
			    cout << "Ingrese un numero entero positivo: ";
			    cin >> num;
			    if (num < 0) {
			        cout << "El numero debe ser positivo.\n";
			        return 0;
			    }
			    for (int i = 1; i <= num; i++) {
			        fact *= i;
			    }
			    cout << "El factorial de " << num << " es: " << fact << endl;
				break;
			}
		case 19: // Calcular el volumen de una esfera
			{
				int r;
				float v;
				
				cout << "Ingrese el radio de la esfera: ";
				cin >> r;
				v = ((4/3)*3.1416)*r*r*r;
				cout << "El volumen de la esfera es de: " << v;
				break;
			}
		case 20:
			{
				int dividendo, divisor, residuo;

			    cout << "Ingrese el dividendo: ";
			    cin >> dividendo;
			
			    cout << "Ingrese el divisor: ";
			    cin >> divisor;
			
			    residuo = dividendo % divisor;
			
			    cout << "El residuo de la division es: " << residuo << endl;
				break;
			}
	}
	return 0;
}
