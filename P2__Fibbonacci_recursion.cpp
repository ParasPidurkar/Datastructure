#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int Fibbo (int n ){
    
    if(n<=1)
    return n;
return (Fibbo(n-1)+Fibbo(n-2));
}
int main()
{

std::cout<<Fibbo(5);
}