#include <iostream>
using namespace std;

class Maszyna
{
public:
	string nazwa;
	string uzycie;
	int serial_number;
	int digit;

	void useMashine() {
		if (serial_number  != 0)
		{
			if (digit == 1)
			{
				Run();
			}
			else if (digit == 2) {
				Reset();
			}
			else
			{
				Msg();
			}
		}
		else
		{
			cout << "Podaj nazwe, uzycie i numer seryjny maszyny" << endl;
			cout << "Nazwa: "; cin >> nazwa;
			cout << "Uzycie: "; cin >> uzycie;
			cout << "Numer seryjny: "; cin >> serial_number;
			while (serial_number == 0)
			{
				cout << "Numer seryjny nie moze sie rownac 0" << endl;
				cout << "Numer seryjny: "; cin >> serial_number;
			}
			
		}
		
	}
	void Run() {
		cout << "Maszyna została uruchomiona." << endl;
		cout << "Nazwa: " << nazwa << ", Uzycie: " << uzycie << ", Numer seryjny: " << serial_number << endl;
	}
	void Reset(){
		int taknie;
		cout << "Czy chcesz zrobic reset maszyny?" << endl;
		cout << "1 - tak, 2 - nie." << endl;
		cin >> taknie;
		if (taknie == 1)
		{
			nazwa = "";
			serial_number = 0;
			uzycie = "";
			cout << "Reset maszyny został wykonany" << endl;
		}
		else
		{
			cout << "Reset nie został wykonany";
		}
	}
	void Msg(){
		cout << "Maszyna nie zostala uruchomiona" << endl;
	}

};


int main()
{
	int uruchomienie;

	cout << "Maszyna 1 - Start, 2 - Reset, inna wartość - Maszyna nie diala " << endl;
	cout << "Co chcesz zrobic: "; cin >> uruchomienie;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	Maszyna maszina1;
	maszina1.digit = uruchomienie;
	maszina1.useMashine();
	

	return EXIT_SUCCESS;
}
