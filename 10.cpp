#include<bits/stdc++.h>

using namespace std;

string grayx(string s)
{
	string a;
	a.push_back(s[0]);
	int x;
	for(int i=1;i<s.size();i++)
	{
		if(s[i-1]=='0'&&s[i]=='0') x=0;
		if((s[i-1]=='1'&&s[i]=='0')||(s[i-1]=='0'&&s[i]=='1')) x=1;
		if(s[i-1]=='1'&&s[i]=='1') x=0;
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
		
		cout<<grayx(s)<<endl;
	}
	return 0;
}

