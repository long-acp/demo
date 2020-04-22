#include<bits/stdc++.h>

using namespace std;

int n,k;
int a[16];
bool check;

void nextbn()
{
	int i=k-1;
	while(i>=0&&a[i]==n+i-k+1) i--;
	
	if(i>=0)
	{
		a[i]++;
		for(int j=i+1;j<n;j++) a[j]=a[j-1]+1;
	}
	else check=false;
}

void InKQ()
{
	for(int i=0;i<k;i++) cout<<a[i];
	cout<<" ";
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<k;i++) a[i]=i+1;
		
		check=true;
			
		while(check)
		{
			InKQ();
			if(n==k) break;
			nextbn();	
		}
		cout<<endl;
	}

}

