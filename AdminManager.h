#pragma once
#include <string>
#include "Client.h"
#include "Admin.h"
class AdminManager
{
public:
	static void printClientMenu();
	static Admin* login(int id, string password);
	static Admin* updatePassword(Admin* admin);
	static bool AdminOptions(Admin* admin);
};

