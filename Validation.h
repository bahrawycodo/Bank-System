#include <iostream>
#include <string>
#include <fstream> 
#include <exception>
#include "Admin.h"
using namespace std;
#pragma once
class Validation {
public:
    static bool Name(string name);
    static bool Password(string password);
    static bool Balance(double balance);
    static bool Salary(double salary);
    static bool NotorequalZero(double num);
    static bool LargerthanZero(double num);
    static void NameException();
    static void PasswordException();
    static void BalanceException();
    static void SalaryException();
    static Client* ClientLogin(Client* client);
    static Employee* EmployeeLogin(Employee* employee);
    static Admin* AdminLogin(Admin* admin);

};
class NameException :public exception {
    virtual const char* what() const throw();
};
class PasswordException :public exception {
    virtual const char* what() const throw();
};
class BalanceException :public exception {
    virtual const char* what() const throw();
};
class SalaryException :public exception {
    virtual const char* what() const throw();
};
class LoginException :public exception {
    virtual const char* what() const throw();
};

