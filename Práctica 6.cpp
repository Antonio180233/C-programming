// Práctica 6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
#define tam_max 50

using namespace std;


////////////////////////////////////////////
class PilaF {
private:
	int tope;
	float   elems[tam_max];
public:
	PilaF() {
		tope = -1;
	}
	bool push(float m);
	float pop();
	bool empty();
	bool full();
	float verTope();

};


bool PilaF::push(float m) {

	if (tope == tam_max) {

		return false;
	}
	else {
		tope++;
		elems[tope] = m;
		return true;
	}

}

float PilaF::pop() {

	if (empty() == true) {
		exit(0);
	}
	else {
		float temp;
		temp = elems[tope];
		tope--;
		return temp;
	}

}

bool PilaF::empty() {
	if (tope == -1) {
		return true;
	}
	else {
		return false;
	}

}

bool PilaF::full() {

	if (tope == tam_max) {
		return true;
	}
	else {
		return false;
	}

}


float PilaF::verTope()
{
	if (full() == true) {
		exit(0);
	}
	else {
		float temp;
		temp = elems[tope];
		return temp;
	}

}


///////////////////////////////////////////////////////////////
class Pila {
private:
	int tope;
	char   elems[tam_max];
public:
	Pila() {
		tope = -1;
	}
	bool push(char m);
	char pop();
	bool empty();
	bool full();
	char verTope();

};


bool Pila::push(char m) {

	if (tope == tam_max) {

		return false;
	}
	else {
		tope++;
		elems[tope] = m;
		return true;
	}

}

char Pila::pop() {

	if (empty() == true) {
		exit(0);
	}
	else {
		char temp;
		temp = elems[tope];
		tope--;
		return temp;
	}

}

bool Pila::empty() {
	if (tope == -1) {
		return true;
	}
	else {
		return false;
	}

}

bool Pila::full() {

	if (tope == tam_max) {
		return true;
	}
	else {
		return false;
	}

}


char Pila::verTope()
{
	if (full() == true) {
		exit(0);
	}
	else {
		char temp;
		temp = elems[tope];
		return temp;
	}

}

////////////////////////////////////////////////////////////
int comprobar(char t) {
	if (t == '(')return 1;
	if (t == ')')return 2;
	if ((t <= 90 && t >= 65) || (t <= 122 && t >= 97) || (t <= 57 && t >= 48))return 3;
	if (t == '*' || t == '+' || t == '^' || t == '/' || t == '-')return 4;
	else return 0;
}
int precedencia(char t)
{
	if (t == '^')return 3;
	if (t == '*' || t == '/' || t == '%')return 2;
	if (t == '+' || t == '-')return 1;
	if (t == '(' || t == ')')return 0;
	else return 0;
}


/////////////////////////////////////////////////////////////////
int main()
{

	Pila Op, f;
	char exp_infija[50], exp_postfija[50];
	int i = 0, i_post = 0;

	PilaF s;
	float e, oper1, oper2, res;

	cout << "Introduce la expresion a convertir:(es importante que tu expresion contenga parentesis(expresion)" << endl;
	cin >> exp_infija;
	


	while (exp_infija[i] != '\0') {
		switch (comprobar(exp_infija[i])) {
		case 1:
			Op.push(exp_infija[i]);
			break;
		case 2:
			while (Op.verTope() != '(')
			{
				exp_postfija[i_post] = Op.pop();
				i_post++;
			}
			Op.pop();
			break;
		case 3:
			exp_postfija[i_post] = exp_infija[i];
			i_post++;
			break;
		case 4:
			if (Op.empty()) {
				Op.push(exp_infija[i]);
			}
			else {
				int op_nv = precedencia(exp_infija[i]);
				int op_ol = precedencia(Op.verTope());
				if (op_nv > op_ol) {
					Op.push(exp_infija[i]);
				}
				else {
					do {
						exp_postfija[i_post] = Op.pop();
						i_post++;
						op_ol = precedencia(Op.verTope());
					} while (!(op_nv > op_ol));
					Op.push(exp_infija[i]);
				}
			}
			break;
		}
		i++;
	}

	


	
	for (int j = 0; j < i_post; j++) {
		if (isdigit(exp_postfija[j])) {
			e = exp_postfija[j] - '0';
			s.push(e);
		}
		else {
			
			switch (exp_postfija[j]) {
			case '+':
				oper2 = s.pop();
				oper1 = s.pop();
				res = oper1 + oper2;
				s.push(res);
				break;
			case '-':
				oper2 = s.pop();
				oper1 = s.pop();
				res = oper1 - oper2;
				s.push(res);
				break;
			case '/':
				oper2 = s.pop();
				oper1 = s.pop();
				res = oper1 / oper2;
				s.push(res);
				break;
			case '*':
				oper2 = s.pop();
				oper1 = s.pop();
				res = oper1 * oper2;
				s.push(res);
				break;
			case '^':
				oper2 = s.pop();
				oper1 = s.pop();
				res = pow(oper1, oper2);
				break;
			default:
				break;
			}
		}
	}

	system("cls");

	cout << "Expresion infija: " << exp_infija << endl;
	cout << "Expresion postfija: ";
	for (int i = 0; i < i_post; i++) {
		cout << exp_postfija[i];
	}
	cout << "\nResultado: " << s.pop() << endl;
}


