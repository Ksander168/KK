#include <iostream>
#include <iomanip>
using namespace std;

void displayMenu()
{
    cout << "====|employee management system|====" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Update Employee " << endl;
    cout << " 3. Delete Employee" << endl;
    cout << "4. Sort employee emp by salary" << endl;
    cout << "5. display all employee" << endl;
    cout << "0. exit " << endl;
    cout << "==============================" << endl;
    cout << "enter your option:";
}
int employeeId[100];
string employeeName[100];
float employeeSalary[100];
int employeeCount = 0;
void addEmployee(){
    system("cls");
    cout << "====|Add employee|====" << endl;
    employeeId[employeeCount] = employeeCount + 1;
    cout << "Enter EmployeeName:";
    cin.ignore();
    getline(cin, employeeName[employeeCount]);
    cout << "Enter employee salary:";
    cin >> employeeSalary[employeeCount];
    employeeCount++;
    cout << "employee Added Successfully!" << endl;
}
void displayAllemployee(){

    system("cls");
    cout << "====|Display all employee|====" << endl;
    cout << setw(5) << "ID " << setw(20) << "Name" << setw(10) << "salary" << endl;
    for (int i = 0; i < employeeCount; i++)
    {
        cout << setw(5) << employeeId[i] << setw(20) << employeeName[i] << setw(10) << employeeSalary << endl;
    }
    cout << "Total Employee:" << employeeCount << endl;
    }

    int main(){
        system("cls");
        int option;
    do
    {
        displayMenu(); 
        cin >> option;
        switch (option){
        case 1:
            addEmployee();
            break;
        case 5:
            displayAllemployee();
            break;
        case 0:
            cout << "exiting the program..." << endl;
            break;
        default:
            cout << "Invalid option! Please try again. " << endl;
        } 
                
    }while (option != 0);
return 0;
}