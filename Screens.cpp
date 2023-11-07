#include <Windows.h>
#include <iostream>
using namespace std;
#include "Screens.h"
void Screens::bankName() {
	cout << "	   	@@         @@   @@@@@@@         #######    ########  ####     ##   ##   ##\n";
	cout << "           	@@    @    @@   @@              ##    ##   ##    ##  ## ##    ##   ##  ##\n";
	cout << "           	@@   @@@   @@   @@@@@@@         #######    ########  ##  ##   ##   ## #\n";
	cout << "           	@@  @@ @@  @@   @@              ##    ##   ##    ##  ##   ##  ##   ##  ##\n";
	cout << "           	@@@       @@@   @@@@@@@         #######    ##    ##  ##    ####    ##   ##\n";
}
void Screens::welcome() {
	cout << "\n\n\n\n\n\n           ##         ##   #######    ##        #######    ########    ####    ####    #######\n";
	cout << "           ##    #    ##   ##         ##        ##         ##    ##    ##  #  #  ##    ##\n";
	cout << "           ##   ###   ##   #######    ##        ##	   ##    ##    ##   ##   ##    #######\n";
	cout << "           ##  ## ##  ##   ##         ##        ##	   ##    ##    ##        ##    ##\n";
	cout << "           ###       ###   #######    ######    #######    ########    ##        ##    #######\n\n\n";
}
void Screens::loginOptions() {
	cout << "(1) Admin\n";
	cout << "(2) Employee\n";
	cout << "(3) Client\n";
}
int Screens::loginAs() {
	cout << "Login as: ";
	int loginChoice=0;
	cin >> loginChoice;
	return loginChoice;
}
void Screens::invalid(int c) {

}
void Screens::logout() {

}
void Screens::loginScreen(int c) {
	Screens::loginOptions();
	/*switch (switch_on)
	{
	default:
		break;
	}*/
	
}
void Screens::runApp() {
	system("color 97");
	welcome();
	bankName();
}