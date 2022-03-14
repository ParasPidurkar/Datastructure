//Code to check if array is sorted or not
//complexity O(n)
#include <iostream>

bool checkSorted(int arr[],int size)
{
    for(int i=0;i<size;i++)
    if(arr[i]>arr[i+1])
    return false;
return true;
}

using namespace std;

int main()
{
    int arr[]={1,2,4,5,6,3};
    bool check;
    int size=sizeof(arr)/sizeof(arr[0]);
    check = checkSorted(arr,size);
    if(check == 0)
    cout<<"The array is not sorted\n";
    else
    cout<<"Array is sorted\n";
    return 0;
}
