#include<iostream>
using namespace std;

int SumofDigits(int num)
{
    if(num<=10)
    return num;
    return(SumofDigits(num/10)+num%10);
}
int main(){
    cout<<SumofDigits(1234);
    
}