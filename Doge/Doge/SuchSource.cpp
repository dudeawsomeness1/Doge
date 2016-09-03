//McClain Jorgensen

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY); //Red text

	cout << "Pedo Mellon a Minno." << endl; //Speak, friend, and enter.
	string Password;
	getline(cin, Password);

	if (Password == "Mellon") { //Check if password is correct (Mellon), else "Access denied!"
		cout << "Good day, McClain. Please choose an option:" << endl;

		int option;
		do {
			//Display menu options
			cout << "1) Display operation Invilis Bella" << endl;
			cout << "2) Console color green" << endl;
			cout << "3) Exit Program" << endl;
			cin >> option;

			if (option == 1) { //Checking if user selected option 1
				cout << "Invilis Bella" << endl;
				cout << "CPU: i5-6600k" << endl;
				cout << "CPU Cooler: Cryorig H7" << endl;
				cout << "Motherboard: Z170-A" << endl;
				cout << "Memory: G.Skill TridentZ 16GB (2 x 8GB) DDR4-3000" << endl;
				cout << "Storage: SSD ~250GB & WD Blue 1TB" << endl;
				cout << "Graphics Card: EVGA GTX 1060 SSC" << endl;
				cout << "Case: Phantom 410" << endl;
				cout << "Power Supply: EVGA Supernova 750 B2" << endl;
				cout << "Asus Optical Drive" << endl;
				cout << "OS: Windows 10 Pro 64-bit" << endl;
				cout << "Case Fans: Two 120mm & one 140mm (all red LEDs)" << endl;
				cout << "Monitor: Atron Vision AVF240" << endl;
				cout << endl;
				cout << "Aquired as of 9/2/2016" << endl;
				cout << "----------------------" << endl;
				cout << "G502" << endl;
				cout << "CPU" << endl;
				cout << "Power Supply" << endl;
				cout << "Case Fans (120s)" << endl;
				cout << "Monitor" << endl;
				cout << endl;
			}
			else if (option == 2) {
				cout << "Setting console text color to green..." << endl;
				cout << endl;
				SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			}
			else if (option == 3) {
				cout << "Terminating Program" << endl;
			}
			else { //If user enters invalid option
				//Display error message
				cout << "Invalid option entered" << endl;
				cout << endl;
			}
		} while (option != 3);
	}
	else {
		cout << "Access denied!" << endl;
	}

	return 0;
}