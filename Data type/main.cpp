#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    system("cls");
    unsigned int x = 2147483647; // for positive number only
    cout << "x :" << x << endl;
    cout << "Data type of y Is :" << typeid(x).name() << endl;
    cout << "Size of y Is :" << sizeof(x) << "bytes " << endl;
    // charater data type
    char y = 'A';
    cout << "y :" << y << endl;
    cout << "Data type of y Is :" << typeid(y).name() << endl;
    cout << "Size of y Is :" << sizeof(y) << "bytes " << endl;
    // floating pointing data type
    float z = 3.141592653589793238462643383279502884197;
    cout << "z :" << setprecision(10) << z << endl;
    cout << "Data type of y Is :" << typeid(z).name() << endl;
    cout << "Size of y Is :" << sizeof(z) << "bytes " << endl;
    // duoble pointing data type
    double w = 3.141592653589793238462643383279502884197;
    cout << "w :" << setprecision(15) << w << endl;
    cout << "Data type of y Is :" << typeid(w).name() << endl;
    cout << "Size of y Is :" << sizeof(w) << "bytes " << endl;
    // boolean data type
    bool isHasMoney = true;
    cout << "isHasMoney :" << isHasMoney << endl;
    cout << "Data type of isHasMoney Is :" << typeid(isHasMoney).name() << endl;
    cout << "Size of isHasMoney Is :" << sizeof(isHasMoney) << "bytes " << endl;
    // short for data type
    short a = 2334;
    cout << "a =" << a << endl;
    cout << "a :" << a << endl;
    cout << "Data type of a Is :" << typeid(a).name() << endl;
    cout << "Size of a Is :" << sizeof(a) << "bytes " << endl;
    //long for data type 
    size_t b = 12345678;
    cout << "b =" << b << endl;
    cout << "b :" << b << endl;
    cout << "Data type of b Is :" << typeid(b).name() << endl;
    cout << "Size of b Is :" << sizeof(b) << "bytes " << endl;
    return 0;
}