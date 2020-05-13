#include <bits/stdc++.h> 
using namespace std; 


void heapPermutation(vector<int> a, int size, int n) 
{ 
	if (size == 1) 
	{ 
		for(int i=0;i<a.size();i++)
			cout<<a[i]<<" ";
		cout<<endl;
		return; 
	} 

	for (int i=0; i<size; i++) 
	{ 
		heapPermutation(a,size-1,n); 
		if (size%2==1)  //if size is odd, swap first and last element
			swap(a[0], a[size-1]); 

		else  //If size is even, swap ith and last element
			swap(a[i], a[size-1]); 
	} 
} 

// Driver code 
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
	heapPermutation(arr, n, n); 
	return 0; 
} 

