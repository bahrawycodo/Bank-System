#include "Validation.h"
#include "Client.h"
bool Validation::Name(string name){
    bool flag = false;
    for (int i = 0; i < name.size(); ++i) {
        if (isalpha(name[i])) {
            flag = true;
        }
        else { flag = false; }
    }
    if (name.length() >= 5 && name.length() <= 20 && flag)
        return true;
    return false;
}
bool Validation::Password(string password) {
    if (password.length() >= 8 && password.length() <= 20)
        return true;
    return false;
}
bool Validation::Balance(double balance) {
    if (balance >= 1500)
        return true;
    return false;
}
bool Validation::Salary(double salary) {
    if (salary >= 5000)
        return true;
    return false;
}
bool Validation::NotorequalZero(double num) {
    if (num >= 0)
        return true;
    return false;
}
bool Validation::LargerthanZero(double num) {
    if (num > 0)
        return true;
    return false;
}
void Validation::NameException() {
    cout << "The name must be alphabetic chars and min size 5 and max size 20\n";
}
void Validation::PasswordException() {
    cout << "Password must be with min size 8 and max size 20\n";
}
void Validation::BalanceException() {
    cout << "Min balance is 1500\n";
}
void Validation::SalaryException() {
    cout << "Min Salary is 5000\n";
}
Client* Validation::ClientLogin(Client* client) {
    if (client != nullptr)
        return client;
    throw LoginException();
}
Employee* Validation::EmployeeLogin(Employee* employee) {
    if (employee != nullptr)
        return employee;
    throw LoginException();
}
Admin* Validation::AdminLogin(Admin* admin) {
    if (admin != nullptr)
        return admin;
    throw LoginException();
}
const char*NameException:: what() const throw() {
    return "The name must be alphabetic chars and min size 5 and max size 20\n";
    }
const char* PasswordException:: what() const throw() {
    return "Password must be with min size 8 and max size 20\n";
}
const char* BalanceException:: what() const throw() {
    return "Min balance is 1500\n";
}
const char* SalaryException:: what() const throw() {
    return "Min Salary is 5000\n";
}
const char* LoginException:: what() const throw() {
    return "Incorrect id or password\n";
}
