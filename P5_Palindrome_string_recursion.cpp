#include<iostream>
#include<string>
using namespace std;

bool StrPalindrome(string str,int start,int end){
    if(start>=end)
    return true;
    return(str[start]==str[end]&&StrPalindrome(str,start+1,end-1));
}

int main(){
    string str ="abc";
    bool status;
    int str_len = str.length()-1;
    status = StrPalindrome(str,0,str_len);
    if (status == 1 )
    cout<<"The string is palindrrome"<<endl;
    else 
    cout<<"The string is not palindrome"<<endl;
    
    
}