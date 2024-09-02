#include <iostream> 
  using namespace  std;
    class Animal{
        private :
        string name;
        int age;
        public :
               Animal(){
            cout << "Animal created : Default" << endl;
            age = 0;
            cout<<age;
        }
         Animal(string n){
            name = n;
            cout << "Animal created : " << name << endl;
        }
          ~ Animal(){
            cout << "good bye see you tomorro" << endl;
        }
    };
   int main(){
    system("cls");
     Animal animal;
     Animal anime("cat"); //demnamic
     Animal fdsd("cat");
     Animal *ptr = new Animal("dog");// delectly
     delete ptr;
     
    return 0;
   }
  