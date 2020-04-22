#include<bits/stdc++.h>

using namespace std;
int n,k,a[16];
bool check;

void nextbn()
{
	int j=n-1;
	while(j>0&&a[j]==1)
	{
		a[j]=0;
		j--;
	}
	if(j==0&&a[j]==1) check=false;
	else a[j]=1;
}
void InKQ()
{
	int sum=0;
	for(int i=0;i<n;i++) sum+=a[i];
	if(sum==k)
	{
		for(int i=0;i<n;i++)
			cout<<a[i];
		cout<<endl;
	}
		
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		check=true;
		cin>>n>>k;
		for(int i=0;i<n-k;i++) a[i]=0;
		for(int i=n-k;i<n;i++) a[i]=1;
		while(check)
		{
			InKQ();
			nextbn();
			
		}  
	}

	return 0;
}

