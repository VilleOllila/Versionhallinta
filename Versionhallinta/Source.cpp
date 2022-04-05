#include <iostream>
using namespace std;

//aliohjelmat
float sum(float x, float y) {
	return x + y;
};

float sub(float x, float y) {
    return x - y;
}

float divide(float x, float y) {
	if ( y == 0) {
		cout << "Warning: division by zero.\n";
	}
	return x / y;
}

float multi(float x, float y) {
	return (x * y);
}

int main() {
	char op;
	float num1, num2;
	cout << "Enter first number ";
	cin >> num1;
	cout << "Enter second number ";
	cin >> num2;
	cout << "Select operation \n"
		"+ = addition \n ";
		"- = substraction \n";
		"* = multiplication \n";
		"/ = division \n";
	cin >> op;

	switch (op) {
	case '+':
		cout << "You chose addition \n";
		cout << num1 << " + " << num2 << " = " << sum(num1, num2) << endl;
		break;

    case '-':
		cout << "You chose substraction \n";
        cout << num1 << " - " << num2 << " = " << sub(num1, num2) << endl;
		break;

	case '/':
		cout << "You chose division \n";
		cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
	case '*':
		cout << "You chose multiplication \n";
		cout << num1 << " * " << num2 << " = " << multi(num1, num2) << endl;
		break;
	}
};
