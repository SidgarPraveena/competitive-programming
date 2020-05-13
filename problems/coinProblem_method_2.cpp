#include<iostream>
#include<vector>
using namespace std;
int coinProblem(int x,vector<int> coins) 
{
	if (x < 0) 
		return INT_MAX-5;
	if (x == 0) 
		return 0;
	int best = INT_MAX-5;
	for (int i=0;i<coins.size();i++) 
	{
		best = min(best, coinProblem(x-coins[i],coins)+1);
	}
	//cout<<best<<" ";
	return best;
}
int main()
{
	int n,ele,sum;
	vector<int> coins;
	cout<<"How many diff coins: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		coins.push_back(ele);
	}
	cout<<"Sum to be find: ";
	cin>>sum;
	vector<int> dp(sum,0);	
	cout<<coinProblem(sum,coins);
	
	
	return 0;
}

