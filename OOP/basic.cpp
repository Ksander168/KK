#include <iostream>
 using namespace std;
  	class Utils{
  		public :
  	   int a;
		 void sum(int x , int y){
		 	a =x +y;
		 	cout<<"sum :"<<a<<endl;
		 }
		  void sub(int x , int y){
		 	 a = x-y;
		 	cout<<"sub :"<<a<<endl;
		 }	
	  };  
  int main(){
  	system("cls");
  	 Utils *obj = new Utils;
	 Utils obj1;
  	 obj1.sum(10,10); //call the function with argument 10 and 10
  	 obj1.sub(100,10);
	obj->sum(10,10);
  	
  	return 0;
  }
