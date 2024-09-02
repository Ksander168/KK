#include <iostream>
#include <iomanip>

using namespace std;
void displayMenu()
{
    cout << "==========|Employer Management System |=============" << endl;
    cout << "1.Add Employee" << endl;
    cout << "2.Update Employer" << endl;
    cout << "3.Delete Employer" << endl;
    cout << "4.short Employer" << endl;
    cout<<"5.Display all Employee"<<endl;
    cout<<"6.Seach employee "<<endl;
    cout << "0.Exit" << endl;
    cout << "Enter your option: ";
}

int employeeId[100];
string employeeName[100];
float employeeSalary[100];
int employeecout = 0;
//  Add employeeId
void addEmployee()
{
    system("cls");
    cout << "==========| Add Employee |=============" << endl;
    employeeId[employeecout] = employeecout + 1;
    cout << "Enter employee name :";
    cin.ignore();
    getline(cin, employeeName[employeecout]);
    cout << "Enter employee salary :";
    cin >> employeeSalary[employeecout];
    employeecout++;
    cout << "Employee added successfully!" << endl;
    
   
}
 void allDisplay(){
    system("cls");
    cout<<"=========| all employee |==========="<<endl;
    cout<<setw(5)<<"ID"<<setw(20)<<"Name"<<setw(10)<<"Salary"<<endl;
    for(int i= 0 ; i<employeecout; i++){
        cout<<setw(5)<<employeeId[i]<<setw(20)<<employeeName[i]<<setw(10)<<employeeSalary[i]<<endl;
        
    }
    cout<<"Total is :"<<employeecout<<endl;
 }
 void updateEmployer(){
    system("cls");
    int id;
    cout << "==========| Update Employee |=============" << endl;
    cout << "Enter employee ID to update: ";
    cin >> id;
    if (id < 1 || id > employeecout)
    {
        cout << "Invalid employee ID. Employee not found." << endl;
        return;
    }
    cout << "Enter new employee name :";
    cin.ignore();
    getline(cin, employeeName[id - 1]);
    cout << "Enter new employee salary :";
    cin >> employeeSalary[id - 1];
    cout << "Employee updated successfully!" << endl;
 }
 void deleteEmployer(){
    system("cls");
    int id;
    cout << "==========| Delete Employee |=============" << endl;
    cout << "Enter employee ID to delete: ";
    cin >> id;
    if (id < 1 || id > employeecout)
    {
        cout << "Invalid employee ID. Employee not found." << endl;
        return;
    }
    for (int i = id - 1; i < employeecout - 1; i++)
    {
        employeeId[i] = employeeId[i + 1];
        employeeName[i] = employeeName[i + 1];
        employeeSalary[i] = employeeSalary[i + 1];
    }
    employeecout--;
    cout << "Employee deleted successfully!" << endl;
 }  
    void sortEmployer(){
        system("cls");
        cout << "==========| Sort Employees |=============" << endl;
        for (int i = 0; i < employeecout - 1; i++)
        {
            for (int j = 0; j < employeecout - i - 1; j++)
            {
                if (employeeSalary[j] < employeeSalary[j + 1])
                {
                    swap(employeeId[j], employeeId[j + 1]);
                    swap(employeeName[j], employeeName[j + 1]);
                    swap(employeeSalary[j], employeeSalary[j + 1]);
                }
            }
        }
        cout << "Employees sorted successfully!" << endl;
    }
    void seachEmployee(){
        system("cls");
        int id;
        cout << "==========| Search Employee |=============" << endl;
        cout << "Enter employee ID to search: ";
        cin >> id;
        bool found = false;
        for (int i = 0; i < employeecout; i++)
        {
            if (employeeId[i] == id)
            {
                found = true;
                cout << "Employee found:" << endl;
                cout << "ID: " << employeeId[i] << endl;
                cout << "Name: " << employeeName[i] << endl;
                cout << "Salary: " << employeeSalary[i] << endl;
                break;
            }
        }
        if (!found)
        {
            cout << "Employee not found." << endl;
        }
    }
 
int main()
{
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
            case 2:
                updateEmployer();
                break;
            case 3:
                deleteEmployer();
                break;
            case 4:
                sortEmployer();
                break;
            case 5:
                allDisplay();
                break;
                
            case 6:
             seachEmployee();
            
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }

    } while (option != 0);

    return 0;
}
// C++ program to demonstrate the use of getters and setters
