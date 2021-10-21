//find position of element in infinite sorted array
#include<iostream>
using namespace std;
int binarySearch(int arr[], int target ,int start, int e)
{

    while(start<=e)
    {
        int m=start+(e-start)/2;

        if(target==arr[m])
            return m;
        else if(target>arr[m])
            start=m+1;
            else
            e=m-1;
    }
    return -1;
}

int position(int arr[],int target)
{
    int start=0;
    int e=3;
    int newStart;
    int newEnd;
    while(target>arr[e])
    {
         newStart=e+1;
        newEnd=(e-start+1)*2;
    }
    int ans= binarySearch(arr,target,newStart,newEnd);
    return ans;
}


int main()
{
    int arr[]={3,5,6,7,12,14,16,34,45,66,77,88,99,112,222};
    int target=45;
    int ans=position(arr,target);
    cout<<"Position is = "<<ans;
    return 0;
}
