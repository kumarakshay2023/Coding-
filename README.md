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
Q4)Given a sorted array having N elements, find the indices of the first and last occurrences of an element X in the given array.

Note: If the number X is not found in the array, return '-1' as an array.

Ans)vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int start=0;
        int end=n-1;
        int firstoc=-1;
        int lastoc=-1;
        while(start<=end){
           int mid=start+(end-start)/2;
           if(arr[mid]==x){
               firstoc=mid;
               end=mid-1;
           }
           else if(arr[mid]<x){
               start=mid+1;
           }
            else if(arr[mid]>x){
               end=mid-1;
           }
        }
        start=0;
        end=n-1;
        vector<int>v;
    
         while(start<=end){
           int mid=start+(end-start)/2;
           if(arr[mid]==x){
               lastoc=mid;
              start=mid+1;
           }
              else if(arr[mid]<x){
              start=mid+1;
           }
           else if(arr[mid]>x){
               end=mid-1;
           }
        }
      
        if(firstoc==-1||lastoc==-1){
           v.push_back(-1);
        }
        else{
            v.push_back(firstoc);
            v.push_back(lastoc);
        }
        return v;
        }
	}
	
Q5)Given a sorted array of N integers a[], and Q queries. For each query, you will be given one element K your task is to print the number of elements that are smaller than or equal to K.
Ans)#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	int N;
	cin>>N;
	long long arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int Q;
	cin>>Q;
	while(Q--){
		int x;
		cin>>x;
         int start=0;
		 int end=N-1;
		 int smaller=N;
		 while(start<=end){
			 int mid=start+(end-start)/2;
			 if(arr[mid]>x){
				 smaller=mid;
				 end=mid-1;
				 }
				 else{
					 start=mid+1;
				 }
		 }
		 cout<<smaller<<endl;


		
		
		
	}
	return 0;
}
	
	                                                   Sorting Alogrithms
	
       * Selection Sort TC-:(o(n^2))
int arr[]={64,25,12,22,11};
for(int i=0;i<n-1;i++){// total numbers of round =arraysize-1
  int minIndex=i; // index of current element;
  for(int j=i+1;j<n;j++){
	 if(arr[j]<arr[minIndex]{
	   minIndex=j;
	}
	}
	swap(arr[i],arr[minIndex]);
			
			
}
 
