#include<iostream>
using namespace std;
void insertionShort(int arr[],int n){
   int i,j,key;
   for(int i=1;i<n;i++){
       j=i-1;
       key=arr[i];
       while(j>=0&&arr[j]>key){
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=key;
   }
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  insertionShort(arr,n);
} 