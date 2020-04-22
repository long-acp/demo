#include<bits/stdc++.h>

using namespace std;

string binx(string s)
{
	string a;
	a.push_back(s[0]);
	int x;
	for(int i=1;i<s.size();i++)
	{
		if(a[i-1]=='0'&&s[i]=='0') x=0;
		if((a[i-1]=='1'&&s[i]=='0')||(a[i-1]=='0'&&s[i]=='1')) x=1;
		if(a[i-1]=='1'&&s[i]=='1') x=0;
		a.push_back(x+'0');
	}
	return a;
}

int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		
		cout<<binx(s)<<endl;
	}
	return 0;
}

