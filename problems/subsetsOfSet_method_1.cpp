#include<iostream>
#include<vector>
using namespace std;
int count;
void subset_search(int k,int n,vector<int>subset)
{
	if(k==n)
	{
		count++;
		cout<<count<<" : ";
		for(int i=0;i<subset.size();i++)
		{
			cout<<subset[i]<<" ";
		}
		cout<<endl;
		return;
	}
	subset_search(k+1,n,subset);
	subset.push_back(k);
	subset_search(k+1,n,subset);
	//subset.pop_back();
}
int main()
{
	int n;
	vector<int> subset;
	cout<<"Enter n ";
	cin>>n;
	subset_search(0,n,subset);
	cout<<"Total number of subsers : "<<count;
	return 0;
}
