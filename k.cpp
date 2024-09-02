#include <iostream>
 
using namespace std;
 float sumPrint(int math , int khmer , int thai){
    return math + khmer + thai ;
 }
 float avg( float Average){
    return Average / 3 ;
 }
 void  grade(float grade){
    if(grade >= 90 &&  grade <= 100){
        cout<<"Your grade is A"<<endl;
    }else if(grade >= 80 && grade >=89){
        cout<<"Your grade is B"<<endl;
    } else if(grade >= 60  && grade >=79){
        cout<<"Your grade is C"<<endl;
    } else{
        cout<<"Your grade is F"<<endl;
    }
 }
 void total(int math , int khmer , int thai){
    int total = sumPrint(math , khmer , thai);
    cout<<"your total is :"<<total<<endl;
    float average = avg(total);
    cout<<"your average is :"<<average<<endl;
     grade(average);
 }


    int main(){
        system("cls");
    float mathScore ;
    float englishScore ;
    float khmerScore ;
    
    cout<<"Enter math score :";
    cin>> mathScore;
    cout<<"Enter english score :";
    cin>>englishScore;
    cout<<"Enter khmer score :";
    cin>>khmerScore;
    total(mathScore, englishScore, khmerScore);
    
        return 0;
    }
    
    
    