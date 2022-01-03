#include<iostream>
using namespace std;
void Subset(string str,int index=0, string curr ="")
{
int n =str.length();
if (index==str.length()){
cout<<curr<<" ";
return;
}

Subset(str,index+1,curr);
Subset(str,index+1,curr+str[index]);

    
}
int main(){
    
    Subset("ABC",0,"");
