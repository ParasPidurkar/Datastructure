#include<iostream>
#include<algorithm>
using namespace std;

int jos(int NoOfPeople,int killNo){
    if(NoOfPeople==1)
    return 0;
    return ((jos(NoOfPeople-1,killNo)+killNo)%NoOfPeople)+1;
    
}
int main()
{
    int n=7,k=3;
    cout<< jos(n,k);  
    
}
