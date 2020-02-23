#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,3,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int value=1;
	for(int i=0;i<n;i++)
	{
		value=value*arr[i];
	}
    cout<<value;
	return 0;
}
