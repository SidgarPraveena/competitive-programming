#include<iostream>
#include<vector>
using namespace std;
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
	int val;
	dp[0]=1;
	for(int i=1;i<=sum;i++)
	{
		dp[i]=0;
		val=INT_MAX;
		for(int j=0;j<n;j++)
		{
			if(i-coins[j] >= 0)
			{
				dp[i]=dp[i]+dp[i-coins[j]];
			}
		}
	}
	for(int i=0;i<=sum;i++)
	{
		cout<<dp[i]<<" ";
	}
	return 0;
}
