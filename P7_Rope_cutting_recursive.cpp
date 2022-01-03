
#include <iostream>
using namespace std;
int Ropes_cutting(int num,int a,int b,int c){
if (num ==0 )
return 0;
if(num <=-1)
return -1;

int ret = max(Ropes_cutting((num-a),a,b,c),max(Ropes_cutting((num-b),a,b,c),Ropes_cutting((num-c),a,b,c)));
if(ret==-1)
return -1;
ret+=1;
return ret;
}

int main()
{
 cout<< Ropes_cutting(10,5,2,3);
}
