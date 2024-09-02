#include <iostream> 
  using namespace std;
  class Utils{
    int x;
    int  y; 
    public:
    setSum(int x, int y){
        this->x = x;
        this->y = y;
    }
    int getSum(){
        return x + y;
    }
    setSqare(int x){
        this->x = x;
    }
    double getSqare(){
        return x*x;
    }
    setKhtoDollar(double x){
        this->x = x;
    }
    double getKhtoDollar(){
        return x/4000;
    }
  };
  int main() {
    system("cls");
    Utils sum;
    sum.setSum(5, 10);
    cout<<"sum :"<<sum.getSum()<<endl;
    Utils Square;
    Square.setSqare((-4)*(-4)*-2);
    cout<<"Square :"<<Square.getSqare()<<endl;
    Utils KhtoDollar;
    KhtoDollar.setKhtoDollar(40000);
    cout<<"Khto dollar :"<<KhtoDollar.getKhtoDollar()<<"$"<<endl;

    return 0;
  }