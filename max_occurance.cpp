//to find the maximum occurane of a particular character like a=3
#include<iostream>
using namespace std;
void max_occur(char arr[],int n)
{
  char maxele;
  int maxi=0;

  for(int i=0;i<n;i++)
  {
      int coun=0;
      for(int j=0;j<n;j++)
      {
        if(arr[i]==arr[j])
        {
            coun++;
        }
      }
      if(maxi<coun)
      {
        maxi=coun;
        maxele=arr[i];
      }
  }
  cout<<maxele<<"="<<maxi;

}
int main()
{
    int n;
    cin>>n;
    char arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    max_occur(arr,n);
}
