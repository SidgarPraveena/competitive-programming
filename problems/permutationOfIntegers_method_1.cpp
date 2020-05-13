#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n,ele;
	vector<int> arr;
	cout<<"Enter size of array: ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		arr.push_back(ele);
	}
	do
	{
		for(int i=0;i<arr.size();i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}while(next_permutation(arr.begin(),arr.end()));
	return 0;
}


