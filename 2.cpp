#include<bits/stdc++.h>

using namespace std;

void inKQ(int a[],int n)
{
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

int main()
{
	int t;
	cin>>t;
	int n,k;
	
	while(t--)
	{
		cin>>n>>k;
		int a[k];
		for(int i=0;i<k;i++) cin>>a[i];
		int j=k-1;
		while(j>0&&a[j]==n+j-k+1) j--;
		if(j==0&&a[j]==n-k+1)
		{
			for(int i=0;i<k;i++) a[i]=i+1;
		}
		else
		{
			a[j]++;
			for(int i=j+1;i<k;i++) a[i]=a[i-1]+1;
		}
		inKQ(a,k);
	}

}

