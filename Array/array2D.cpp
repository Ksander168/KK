#include<iostream>

#include<sstream>
using namespace std;

int row, col;
string **ha;
void setUpHall(const int r, const int c){
    
    row = r;
    col = c;
    string ha[r][c];
    char k = 'A';
    for(int i=0; i<r; i++){
        stringstream z;
        z<<(i+1);
        string sub = "-";
        for(int j=0; j<c; j++,k++){
            ha[i][j] = k + sub + z.str() + ": AV";
        }
    }
    // 
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<" | "<<ha[i][j]<<" ";
        }
        cout<<" | \n";
    }
}

// void listHall(){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<" | "<<ha[i][j]<<" ";
//         }
//         cout<<" | \n";
//     }
// }

void startBooking(){
    
}
void choice(){
    cout<<"1/ Set up hall\n";
    cout<<"2/ List all hall\n";
    cout<<"3/ Start Booking\n";
    cout<<"--------------------\n";
}
void ui(){
    cout<<"=================================\n";
    cout<<"           Hall Booking          \n";
    cout<<"=================================\n";
    choice();
    // 
    int ch;
    cout<<"[+] Insert option: ";cin>>ch;
    switch(ch){
        case 1:{
            int r, c;
            cout<<"Insert row: ";cin>>r;
            cout<<"Insert column: ";cin>>c;
            cout<<"Setup Hall"<<endl;
            setUpHall(r,c);
            break;
        }
        case 2:{
            cout<<"List all hall"<<endl;
            setUpHall(row, col);
            break;
        }
        default:{
            cout<<"Invalid option!"<<endl;
            break;
        }
    }
}

int main(){
    while(1){
        ui();
    }
    return 0;
}