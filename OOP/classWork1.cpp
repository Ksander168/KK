#include<iostream>
#include<string>
using namespace std;
class Pet{
   private:
    int id;
    string name;
    string color;
    string type;
  public:
    Pet(int id, string name, string color, string type){}

    Pet(){};
    void getPetDetail(){
        cout<<" Id:"<<id<<endl;
        cout<<" Name:"<<name<<endl;
        cout<<"Color:"<<color<<endl;
        cout<<"Type:"<<type<<endl;
    }
    

};

int main(){
    system("cls");
    Pet pet1(1, "Ting Ting", "Pink", "Cat");
    pet1.getPetDetail();


    return 0;
}