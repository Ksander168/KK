#include <iostream>

using namespace std;
int main(){
    system("cls");
    bool isSecurithyallow= true;
    bool isGetTicket = false;
    bool isGetTurn = false;
   if(isSecurithyallow){
        cout<<"Your can enter your bank !" <<endl;
        if(isGetTicket){
            cout<<"Your can wait your bank !" <<endl;
            if(isGetTurn){
                cout<<"Your can get your turn !" <<endl;
            }else{
                cout<<"Your can wait your turn  !" <<endl;
            }
        }else{
            cout<<"Your can't get your ticket  !" <<endl;
        }
   }else{
     cout<<"Your can not enter your bank !" <<endl;
   }
   
    return 0;
}