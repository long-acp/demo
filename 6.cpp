#include<bits/stdc++.h>

using namespace std;

int n;
int a[10];
bool check;

void nextbn()
{
	int i=n-2;
    while(i>=0&&a[i]>a[i+1]) i--;
    if (i==-1) check=false;
	else
	{
		int j=n-1;
		while(a[i]>a[j])  j--;
	    swap(a[i],a[j]);
	    int x=i+1,y=n-1;
	    while(x<y)
		{
	    	swap(a[x],a[y]);
	    	x++;
	    	y--;
		}
	}
}

void InKQ()
{
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<" ";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++) a[i]=i+1;
		check=true;
		while(check)
		{
			InKQ();
			nextbn();
		}
		cout<<endl;
	}

}

