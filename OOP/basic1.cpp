#include <iostream>
#include <vector>

 using namespace std;
    
    class Product {
      private :
      int id;
      string name;
      double price;
      int quantity;
      
      public:
       void setData(int id , string name , double price , int quantity){
         this->id = id;
         this->name = name;
         this->price = price;
         this->quantity = quantity;
       }
       void displayData(){
         cout << "ID: " << id << endl;
         cout << "Name: " << name << endl;
         cout << "Price: $" << price << endl;
         cout << "Quantity: " << quantity << endl;
       }
    };
 
  int main(){
    vector <Product> Products;
    int n;
    cout<<"Enter the number of product : ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        int id;
        string name;
        double price;
        int quantity;
        cout<<"[+] Insert ID ";cin>>id;
        cout<<"[+] Insert Name ";cin>>name;
        cout<<"[+] Insert Price ";cin>>price;
        cout<<"[+] Insert Quantity ";cin>>quantity;
        Product Product;
        Product.setData(id,name,price,quantity);
        Products.insert(Products.begin(),Product);  
    }
    for(Product p : Products){ //use for each
        p.displayData();
        cout<<endl;
        
    }
    
    
    return 0;
  }