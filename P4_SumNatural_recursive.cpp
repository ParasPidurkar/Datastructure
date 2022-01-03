#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int SumNatural (int n ){
    if(n==0)
    return 0;
  return (n+SumNatural(n-1));
}
int main()
{

std::cout<<SumNatural(4);
}