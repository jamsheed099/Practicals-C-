Practical: 12.1.2
Code:
#include<iostream>
using namespace std;

int main(){
    char oper;
    float num1, num2;
    
    cout<<"***Calculator using sWitch statement***"<<endl;
    cout<<"Enter an Operator(+, -, *, /)"<<endl;
    cin >> oper;
    
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    
    switch(oper){ 
        
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
        
        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
        
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
        
        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;
        default:
        cout<<" Error! The operator is not correct";
        }
        return 0;
}

 

