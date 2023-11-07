#include "AdminManager.h"
#include "FileManager.h"
#include "Admin.h"
#include <exception>
#include "validation.h"

void AdminManager::printClientMenu(){
	cout << "(1) Display my info\n";
	cout << "(2) Update Password\n";
	cout << "(3) Add new client\n";
	cout << "(4) Search for client\n";
	cout << "(5) List all clients\n";
	cout << "(6) Edit client info\n";
	cout << "(7) Add new Employee\n";
	cout << "(8) Search for Employee\n";
	cout << "(9) List all Employees\n";
	cout << "(10) Edit Employee info\n";
	cout << "(11) Logout\n";
	cout << "Your choise is: ";
}
//Admin* AdminManager::updatePassword(Admin* admin) {
//	string password;
//	cout << "Enter Password";
//	cin >> password;
//
//	
//}

//Admin* AdminManager::login(int id, string password){
//	vector<Admin> admins = FileManager::getAllAdmins();
//	for (Admin& admin : admins)
//	{
//		if (admin.getId() == id && admin.getPassword() == password) {
//			return &admin;
//			break;
//		}
//	}
//	return nullptr;
//}
bool AdminManager::AdminOptions(Admin* admin){
	int choice = 0;
	cin >> choice;
	return choice;
}