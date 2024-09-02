#include <iostream>

 using namespace std;
 void test(int *ptr){
    *ptr++;
    
 }
 void test(int &p){
    
    ++p;
 }
 void sum(int a , int b){
    a , b;
    int sum = a+b;
    cout<<"sum is :"<<sum<<endl;
    
 }
 void sum(double a , double b){

    double sum = a+b;
    cout<<"sum is :"<<sum<<endl;
    
 }
  void of(int a , int b){
    int of = a*b;
    cout<<"of is :"<<of<<endl;
  }
  void of(double a, double b){
    double of = a*b;
    cout<<"of is :"<<of<<endl;
  }
  void dividend(int a , int b){
    double dividend = a/b;
    
    cout<<"dividend is :"<<dividend<<endl;
  }
  void dividend(double a , double b){
   double dividend = a/b;
    cout<<"dividend is :"<<dividend<<endl;
  }
  void sub(int a , int b){
   double sub = a-b;
    cout<<"sub is :"<<sub<<endl;
  }
    void sub(double a , double b){
        double sub = a-b;
        cout<<"sub is :"<<sub<<endl;
    }
 int main (){
    // int a = 5;
    // int *p = &a;
    // int **q = &p;
    // cout<<"a :"<<p<<endl;
    // cout<<"p :"<<&p<<endl;
    // cout<<"q :"<<&q<<endl;
    sum(10,1);
    sum(3.1,1.5);
    sub(10,1);
    sub(3.1,1.5);
    of(10,1);
    of(3.1,1.5);
    dividend(10,3);
    dividend(3.1,1.5);
    
    
    return 0;
 }