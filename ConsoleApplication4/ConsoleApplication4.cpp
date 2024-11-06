#include <iostream>
using namespace std;

int square(int a) {
	return a * a;
}
int rectangle(int a, int b) {
	return a * b;
}

int trapezium(int a, int b, int c) {
	return (a + b) * (c / 2);
}

int rombus(int a, int b) {
	return (a * b) / 2;
}

int parallelogram(int a, int b) {
	return a * b;
}


int main() {
	cout << "Choose the figure\n1 - square\n2 - rectangle\n3 - trapezium\n4 - rombus\n5 - parallelogram" << endl;
	int x;
	cin >> x;
	int a, b, c, d;
	if (x == 1) {
		cout << "First side:" << endl;
		cin >> a;

		int (*ptr)(int) = &square;
		cout << "Area of the square = " << ptr(a);
		return 0;
	}

	else if (x == 2) {
		cout << "First side:" << endl;
		cin >> a;
		cout << "Second side:" << endl;
		cin >> b;

		int (*ptr)(int, int) = &rectangle;
		cout << "Area of the rectangle = " << ptr(a, b);
		return 0;
	}

	else if (x == 3) {
		cout << "First side:" << endl;
		cin >> a;
		cout << "Second side:" << endl;
		cin >> b;
		cout << "Height:" << endl;
		cin >> c;

		int (*ptr)(int, int, int) = &trapezium;
		cout << "Area of the trapezium = " << ptr(a, b, c);
		return 0;
	}

	else if (x == 4) {
		cout << "First diagonal:" << endl;
		cin >> a;
		cout << "Second diagonal:" << endl;
		cin >> b;

		int (*ptr)(int, int) = &rombus;
		cout << "Area of the rombus = " << ptr(a, b);
		return 0;
	}

	else if (x == 5) {
		cout << "First side:" << endl;
		cin >> a;
		cout << "Height:" << endl;
		cin >> b;

		int (*ptr)(int, int) = &parallelogram;
		cout << "Area of the parallelogram = " << ptr(a, b);
		return 0;
	}

	else {
		cout << "Error" << endl;
	}


}