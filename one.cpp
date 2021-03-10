#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int sum=0;
	for(int i=1;i<n;i++)
	{
		arr[i]=arr[i]+arr[i-1];
	}
	
	int q;
	cin>>q;
	
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		if(x==0)
		cout<<arr[y]<<endl;
		else
		cout<<arr[y]-arr[x-1]<<endl;
	}
	
}