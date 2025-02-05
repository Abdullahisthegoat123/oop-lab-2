#include <iostream>
using namespace std;

struct employee
{
    string name;
    int hoursWorked;
    int hourlyRate;
};
int main()
{
    int n;
    cout << "Enter the number of Employees: ";
    cin >> n;
    employee *e = new employee[n];
    int salary;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name for employee#" << i + 1 << ": ";
        cin >> e[i].name;
        cout << "Enter the hours worked for employee#" << i + 1 << ": ";
        cin >> e[i].hoursWorked;
        cout << "Enter the hourly rate for employee#" << i + 1 << ": ";
        cin >> e[i].hourlyRate;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Employee#" << i + 1 << ":" << endl;
        cout << "Name: " << e[i].name << endl;
        cout << "Hours Worked: " << e[i].hoursWorked << endl;
        cout << "Hourly Rate: " << e[i].hourlyRate << endl;
        cout << "Salary: $ " << e[i].hourlyRate * e[i].hoursWorked << endl;
    }
    delete[] e;
}