#include <iostream>
#include<string>
   
   using namespace std;
   
   class Teacher{
    private:
    int id;
    string name, email;
    public : 
    Teacher(int id, string name, string email): id(id), name(name), email(email) {
        
    }
    void displayDetails() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
    }
   };
   int main() {
    Teacher ti(1,"koko","koko@gmali.com");
    ti.displayDetails();
    return 0;
   }