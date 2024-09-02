#include <iostream>
using namespace std;
class Person
{
private:
  int n;
  int age;
  string name;
  string email;

public:
  void setData(int age, string name, string email)
  {
    this->age = age;
    this->name = name;
    this->email = email;
  }
  void displayData()
  {

    cout << "Name : ";
    cin >> name;
    cout << "Age : ";
    cin >> age;
    cout << "Email : ";
    cin >> email;
  }
  void showAllDisplay()
  {
    cout<<" \n";
    cout << "=======|All Display |===========" << endl;
    cout << "Name : ";
    cout << name << endl;
    cout << "Age : ";
    cout << age << endl;
    cout << "Email : ";
    cout << email << "@gmail.com" << endl;
    cout << "==================================" << endl;
  }
  void loop(int n)
  {
    for (int i; i < n; i++)
    {
      displayData();
    }
  }
};

int main()
{
  system("cls");
  Person person;
  int n;
  cout << "Enter your number of Preson :";
  cin >> n;
  person.loop(n);
  for (int i; i < n; i++)
  {
    person.showAllDisplay();
  }
  return 0;
}