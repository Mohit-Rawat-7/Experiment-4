#include <iostream>
using namespace std;
int main(){
    bool a;
    bool b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Bitwise AND ("<<a<<"&"<<b<<"): "<<(a&b)<<endl;
    cout<<"Bitwise OR ("<<a<<"|"<<b<<"): "<<(a|b)<<endl;
    cout<<"Bitwise XOR ("<<a<<"^"<<b<<"): "<<(a^b)<<endl;
    cout<<"Bitwise NOT (~"<<a<<"): "<<(~a)<<endl;
    cout<<"Left Shift ("<<a<<"<<1): "<<(a<<1)<<endl;
    cout<<"Right Shift ("<<a<<">>1): "<<(a>>1)<<endl;

    return 0;
}