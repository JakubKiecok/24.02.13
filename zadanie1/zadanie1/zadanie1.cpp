#include <iostream>
using namespace std;

class Robot
{
public:
	string name;
	int serial_number;
	int digit;

	void runRobot() {
		if (digit == 1)
		{
			showRobot();
		}
		else
		{
			message();
		}
	}

	void showRobot() {
		cout << "Robot uruchomiony: " << serial_number << ", Nazwa: " << name << endl;
	}

	void message() {
		cout << "Robot nie uruchomiony" << endl;
	}
};

int main()
{
	int uruchomienie;

	cout << "Robot 1 - Start, inna wartość - robot nie diala " << endl;
	cout << "Co chcesz zrobic: "; cin >> uruchomienie;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	Robot mojrobot;
	mojrobot.digit = uruchomienie;
	mojrobot.serial_number = 12529572520;
	mojrobot.name = "Axis 3";
	mojrobot.runRobot();

	return EXIT_SUCCESS;
}