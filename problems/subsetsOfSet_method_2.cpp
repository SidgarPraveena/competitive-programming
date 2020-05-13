#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	for (int b = 0; b < (1<<n); b++) 
	{
		vector<int> subset;
		for (int i = 0; i < n; i++) 
		{
			if (b&(1<<i)) 
			{
				subset.push_back(i);
			}
		}
		for(int i=0;i<subset.size();i++)
		{
			cout<<subset[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
