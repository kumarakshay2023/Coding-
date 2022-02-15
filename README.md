# Coding-
Q1)     Maximum and Minimum in an Array
Ans)    int maxi=INT_MIN;
        int mini=INT_MAX;
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        for(int i=0;i<N;i++){
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        cout<<maxi<<" "<<mini<<endl;
        
Q2)Max freq  Given an array of N integers, give the number with maximum frequency. If multiple numbers have maximum frequency print the maximum number among them.

Ans)  #include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	map<int,int>mp;
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	for(auto it:arr){
		mp[it]++;
	}
	int prev=1;
	int ans=-1;
	for(auto it:mp){
		if(it.second>=prev){
			ans=it.first;
			prev=it.second;
		}
	}
cout<<ans;
	return 0;
}

Q3)Given an array A of size N, you need to find the maximum sum that can be obtained from the elements of the array (the selected elements need not be contiguous). You may even decide to take no element to get a sum of 0.

Ans)


#include <bits/stdc++.h>
using namespace std;
int main() {

	// Your code here
	int N;
	cin>>N;
    vector<long long>v;
	for(int i=0;i<N;i++)
	{
       long long x;
	   cin>>x;
	   v.push_back(x);
	}

	
	long long sum=0;
	for(int i=0;i<N;i++){
		if(v[i]<0){
			continue;
		}
		sum+=v[i];
	}
	cout<<sum;
	return 0;
}
