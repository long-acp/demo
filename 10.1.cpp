#include<bits/stdc++.h> 
using namespace std; 

struct node 
{ 
	long long val; 
	int level; 
}; 

int minOperations(long long x) 
{ 
	unordered_set<long long> visit; 

	queue<node> q; 
	node n = {x, 0}; 
	q.push(n); 

	while (!q.empty()) 
	{ 
		node t = q.front(); 
		q.pop(); 

		if (t.val == 1) 
			return t.level; 

		visit.insert(t.val); 
		
		for(long long j=sqrt(t.val);j>1;j--)
		{
			if (t.val%j==0) 
			{ 
				if(visit.find(t.val/j) == visit.end())
				{
					n.val = t.val/j; 
					n.level = t.level+1; 
					q.push(n); 
				}
			} 
		}
		
		if (visit.find(t.val-1) == visit.end() ) 
		{ 
			n.val = t.val-1; 
			n.level = t.level+1; 
			q.push(n); 
		} 
	} 
} 

int main() 
{ 
	int t=1;
	cin>>t;
	long long n;
	while (t--) 
	{
		cin >> n; 
		cout<<minOperations(n)<<endl;
		
	} 
	return 0; 
} 

