#include <iostream>
using namespace std;
 float sumSocre(float totalScore ){
    return totalScore/3;
 } 
 void printgrade(float avg){
    if(avg>=80){
        cout<<"Grade : A"<<endl;
    }else if(avg>=70){
        cout<<"Grade : B"<<endl;
    } else if(avg>=60){
        cout<<"Grade : C"<<endl;
    } else {
        cout<<"Grade : D"<<endl;
    }
 }
void printTitle();
void printDynamucTile(string title);
 float sumSocre(float math , float khmer , float english);
void studentInfo(float math , float khmer , float english){
    cout<<"=============|Student info |=============="<<endl;
     cout<<"math :"<<math<<endl;
    cout<<"khmer :"<<khmer<<endl;
    cout<<"english :"<<english<<endl;
    float totalScore = sumSocre(math , khmer ,english);
    cout<<"Total score :"<<totalScore <<endl;
    cout<<"Average score :"<<sumSocre(totalScore)<<endl;
    printgrade(sumSocre(totalScore));
}
int main()
{
    system("cls");
    string name;
    float mathScore ;
    float englishScore ;
    float khmerScore ;
    
    printTitle();
    cout<<"Enter student name :";
    getline(cin,name);
    cout<<"Enter math score :";
    cin>> mathScore;
    cout<<"Enter english score :";
    cin>>englishScore;
    cout<<"Enter khmer score :";
    cin>>khmerScore;
    
    studentInfo(mathScore , englishScore , khmerScore);
    return 0;
}

void printTitle()
{
    cout << "=============| Grade student |===============" << endl;
}
// printDynamucTile(string title)
// {
//     cout << "=============| " << title << " |================" << endl;
// }
 float sumSocre(float math , float khmer , float english){
    return math + khmer + english;
 }