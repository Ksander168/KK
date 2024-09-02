#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<string> names = {"KoKo","Kaka"};
    cout<<"Original vector"<<endl;
    for(int i=0;i<names.size();i++){
        cout<<names[i]<<endl;
    }
    names.push_back("Choi");
    names.insert(names.begin(),"Kang");
    // interating through vector
    cout<<"After adding 'Kang':"<<endl;
    for(auto i = names.begin();i<names.end();i++){
        cout<<*i<<endl;
    }
    return 0;
}
        