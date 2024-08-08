//Swapping of two number using call by reference
#include<iostream>
using namespace std;
void swap(int *num1,int *num2){
    int *temp=num1;
    num1=num2;
    num2=temp;
}
int main(){
    int num1,num2;
    cout<<"Enter any two integer:";
    cin>>num1>>num2;
    swap(num1,num2);
    cout<<"Elements after swapping."<<endl;
    cout<<"Num1="<<num1<<endl;
    cout<<"Num2="<<num2<<endl;
    return 0;
}