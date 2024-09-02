#include <iostream> 
#include <vector>
  using namespace std;
  class user{
    private :
    int n;
    public :
    setN(int n){
        this ->n =n; 
    }
    getN(){
        return this->n ;
    }
   
  };
   class person{
    vector<user> user1;
       private :
    int n;
    public :
    setN(int n){
        this ->n =n; 
    }
    getN(){
        return this->n ;
    }
    void addUser(user users){
      user1.push_back(users);
    }
    vector <user> getUser(){
      return user1;
    }
    };
  int main(){
    user korn;
    korn.setN(22);
    cout << "User's age : " << korn.getN() << endl; // Output : User's age : 22
    person peter;
    peter.getUser(korn);
    vector<user> users = peter.getUser();
    
    
    
    
    
    return 0;
  }