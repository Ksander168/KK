#include <iostream>

 using namespace std;
 
   int main(){
    system("cls");
    for(int i =0; i<10 ; i++){
        if(i%2  == 0){
            continue;
        }
        cout<<i<<" ";
    }
    
    
    return 0;
   }