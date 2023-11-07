#include <iostream>
#include "Shared.h"
int main()
{
	Shared::firstLoad();

	Client c1(0,"halaa", "123456789", 3000);
	Client c(0,"hala Mohamed", "12345678", 2000);
	Client c2(0,"halaaa", "1234567810", 4000);
	Employee e1(0,"halaa", "123456789", 3000);
	Employee e(0,"hala Mohamed", "12345678", 2000);
	Employee e2(0,"halaaa", "1234567810", 4000);
	Admin* a = Admin::getAdmin() ;
	a->setData("Admin", "12345678", 5000);
	Shared::addAdmin(a);
	Shared::addClient(c1);
	Shared::addClient(c);
	Shared::addClient(c2);
	Shared::addEmployee(e);
	Shared::addEmployee(e1);
	Shared::addEmployee(e2);
	atexit(Shared::saveAll);
}
