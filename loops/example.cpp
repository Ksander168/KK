#include <iostream>

using namespace std;
   int factorial(int n){
    int of = 1;
    cout<<n<<"! = ";
    for(int i = n ; i>=1 ; i--){
        of *= i;
        cout<<i<<" ";
        if(i==1){
            cout<<" ";
        }else{
            cout<<"* ";
        }
    }
    cout<<" = "<<of<<endl;
    return of ;
   }
int main()
{
    system("cls");
    int n;
    cin>>n;
 cout<<factorial(n);
     
    return 0;
}