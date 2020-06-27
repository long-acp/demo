#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node 
{ 
    int data; 
    node *left, *right; 
    node(int x)
    {
    	data = x;
    	left = NULL;
    	right = NULL;
	}
};
ll path(node *root,ll &ref){
    if(!root) return 0;
	ll l = path(root->left,ref);
	ll r = path(root->right,ref);
	ll loc = max(max(l,r)+(ll)root->data,(ll)root->data);
	ll glob = max(loc,l+r+(ll)root->data);
	ref = max(glob,ref);
	return loc;
}
ll maxPathSum(node *root)
{
    ll ref = -10000000000000;
    ll x = path(root,ref);
    return ref;
} 
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		map<int,node *> m;
		node *root = NULL;
		while(n--)
		{
			int a,b;
			char c;
			cin>>a>>b>>c;
			node *father;
			if(m.find(a) == m.end())
			{
				father = new node(a);
				m[a] = father;
				if(root == NULL)
				root = father;
			}
			else father = m[a];
			node *son = new node(b);
			if(c=='L')
				father->left = son;
			else if(c=='R')
				father->right = son;
			m[b] = son;
		}
		cout<<maxPathSum(root)<<endl;
	}
}
