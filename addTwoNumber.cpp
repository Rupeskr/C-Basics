//Program to accept two integer form user and return sum
#include<iostream>
using namespace std;
int findSum(int num1,int num2){
    return num1+num2;
}
int main(){
    int num1,num2;
    cout<<"Enter any two integer:";
    cin>>num1>>num2;
    cout<<findSum(num1,num2)<<endl;
    return 0;
}