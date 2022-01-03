#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int Fact (int num ){
    if(num==0)
    return 1;
return (num*Fact(num-1));
}
int main()
{

std::cout<<Fact(3);
}