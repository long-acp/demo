#include<bits/stdc++.h> 
#include<string>
using namespace std; 

#define MAX_COUNT 10000
 
vector<string> vec; 

long long stoix(string s)
{
	long long val=s[0]-'0';
	for(int i=1;i<s.size();i++)
	{
		val=val*10+(s[i]-'0');
	}
	return val;
}

void generateNumbersUtil() 
{ 

	queue<string> q; 
		
	
	q.push("9"); 

	for (int count = MAX_COUNT; count > 0; count--) 
	{ 
		string s1 = q.front(); 
		q.pop(); 

		vec.push_back(s1); 
		
		string s2 = s1; 

		q.push(s1.append("0")); 

		q.push(s2.append("9")); 
	} 
} 

string findSmallestMultiple(int n) 
{ 

	for (int i = 0; i < vec.size(); i++) 

		if (stoix(vec[i])%n == 0) 
			return vec[i];		 
} 

 
int main() 
{ 
	generateNumbersUtil();
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout << findSmallestMultiple(n)<<endl;
	}	 	 
		 
	return 0; 
} 

