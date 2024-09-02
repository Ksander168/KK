#include <iostream>
   using namespace std;
   struct student{
     int age;
    string name;
    string gender;
    string email;
    void studentInfo(){
        cout << "\nStudent Information: \n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender  <<endl;
        cout << "Email: " << email << "@gmail.com"<<endl;
 
    }
    
   };
   enum gender{
     Male =0;
     Female=1;
   }
   int main(){
    gender = gender ;
    system("cls");
    student student1;
    cout<<"Name student :";
    cin>>  student1.name;
    cout<<"Age student :";
    cin>>  student1.age;
    cout<<"Gender student :";
    cin>>  student1.gender;
    cout<<"Email student :";
    cin>>  student1.email;
    student1.studentInfo();
    
    return 0;
  
   }