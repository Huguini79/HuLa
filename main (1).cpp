#include<iostream>
#include<string>
#include<vector>
#include<limits>
#include<ctime>
#include<cstdlib>
#include<algorithm>

using namespace std;

vector<string> lista_codigo;
vector<string> elementos_random;

void sumar(double a, double e);
void restar(double a, double e);
void multiplicar(double a, double e);
void dividir(double a, double e);

int main(void) {
    string import, modulo;
    cin >> import >> modulo;
    cin.ignore();

    if (import == "import" && modulo == "main") {
        while (true) {
            string comando1, comando2, comando3;
            double num1, num2;
            string operador;
            cin >> comando1;

            if(comando1 == "create") {
                cin >> comando2;
                lista_codigo.push_back(comando2);
                cout << "Element created successfully" << endl;
                
            } else if(comando1 == "System.println") {
                cin >> comando2;
                cout << comando2 << endl;
                
            } else if(comando1 == "read_i") {
                cin >> comando2 >> comando3;
                cout << comando3 << comando2 << endl;
                
            } else if(comando1 == "addition") {
                cin >> num1 >> num2;
                sumar(num1, num2);
                
            } else if(comando1 == "subtraction") {
                cin >> num1 >> num2;
                restar(num1, num2);
                
            } else if(comando1 == "multiplication") {
                cin >> num1 >> num2;
                multiplicar(num1, num2);
                
            } else if(comando1 == "division") {
                cin >> num1 >> num2;
                dividir(num1, num2);
                
            } else if(comando1 == "random") {
                srand(time(NULL));
                cin >> comando2 >> comando3;
                elementos_random.push_back(comando2);
                elementos_random.push_back(comando3);
                int indiceAleatorio = rand() % elementos_random.size();
                string palabra_aleatoria = elementos_random[indiceAleatorio];
                cout << "Random: " << palabra_aleatoria << endl;
                elementos_random.clear();
                
            } else if(comando1 == "help") {
                cout << "random | Chooses a random word from two words" << endl;
                cout << "System.println | Prints a word" << endl;
                cout << "read_i | Reads user input" << endl;
                cout << "addition | Sum two numbers" << endl;
                cout << "subtraction | Subtract two numbers" << endl;
                cout << "multiplication | Multiply two numbers" << endl;
                cout << "division | Divide two numbers" << endl;
                cout << "create | Adds an element to a list" << endl;
                cout << "exit | Exit the program" << endl;
                cout << "square | Draws a square" << endl;
                cout << "surprise | I can't say anything, it's suprise" << endl;
                cout << "show_list | Shows the list" << endl;
                
            } else if(comando1 == "calculator") {
                cin >> num1 >> operador >> num2;
                if(operador == "+") {
                    sumar(num1, num2);
                    
                } else if(operador == "-") {
                    restar(num1, num2);
                    
                } else if(operador == "*") {
                    multiplicar(num1, num2);
                    
                } else if(operador == "/") {
                    dividir(num1, num2);
                    
                } else {
                    cout << "Wrong operator" << endl;
                }
                
            } else if(comando1 == "exit") {
                return 0;
                
            } else if(comando1 == "square") {
                for(int i = 0; i <= 5; i++) {
                    cout << ".";
                }
                cout << endl;
                cout << ".    ." << endl;
                cout << ".    ." << endl;
                cout << ".    ." << endl;
                cout << ".    ." << endl;
                for(int ii = 0; ii <= 5; ii++) {
                    cout << ".";
                }
                cout << endl;
                
            } else if(comando1 == "surprise") {
                cout << "H   H   U   U   L        AAAAA" << endl;
                cout << "H   H   U   U   L       A     A" << endl;
                cout << "HHHHH   U   U   L       AAAAAAA" << endl;
                cout << "H   H   U   U   L       A     A" << endl;
                cout << "H   H   UUUU    LLLLL   A     A" << endl;
                
            } else if(comando1 == "show_list") {
            	for(int i = 0; i < lista_codigo.size(); i++) {
                    cout << lista_codigo[i];
                    if (i != lista_codigo.size() - 1) {
                        cout << ", ";
                    }
                }
				cout << endl;
			}
            
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } else {
        cout << "Error: No module selected." << endl;
        return 1;
    }
}

void sumar(double a, double e) {
    double suma = a + e;
    cout << suma << endl;
}

void restar(double a, double e) {
    double resta = a - e;
    cout << resta << endl;
}

void multiplicar(double a, double e) {
    double multi = a * e;
    cout << multi << endl;
}

void dividir(double a, double e) {
    double divi = a / e;
    cout << divi << endl;
}