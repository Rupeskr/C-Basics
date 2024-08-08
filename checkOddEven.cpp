//Check whether the enterd number is odd or even
#include<iostream>
using namespace std;
bool checkEvenOdd(int num){
    if(num%2==0){
        return true;
    }
    return false;
}
int main(){
    int num;
    cout<<"Enter any number:";
    cin>>num;
    if(checkEvenOdd(num)){
        cout<<num<<" is even."<<endl;
    }
    else{
        cout<<num<<" is odd."<<endl;
    }
    return 0;
}