#include<bits/stdc++.h>

using namespace std;

int val(vector <int> a)
{
	int x=0;
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();)
	{
		if(a[i]==a[i+1]) i=i+2;
		else
		{
			x++;
			i++;
		}
	}
	return x/2;
}

int main()
{
	int t;
	cin>>t;
	int n,k;
	
	while(t--)
	{
		cin>>n>>k;
		vector <int> a;
		int x;
		for(int i=0;i<k;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		int j=k-1;
		while(j>0&&a[j]==n+j-k+1) j--;
		if(j==0&&a[j]==n-k+1)
		{
			cout<<k<<endl;
		}
		else
		{
			for(int i=0;i<j;i++) a.push_back(a[i]);
			for(int i=j;i<k;i++) a.push_back(a[j]+i+1-j);
			cout<<val(a)<<endl;
		}
		
	}

}

