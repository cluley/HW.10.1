#include <iostream>
#include<cstring>
using namespace std;

int main(int argc, char** argv) {
	const char hello[] = { "Здравствуйте, " };
	string name;
	string surname;
	cout << "Введите имя: ";
	cin >> name;
	cout << "Введите фамилию: ";
	cin >> surname;

	cout << hello + name + " " + surname + '!' << endl;

	return 0;
}