#include<iostream>
using namespace std;

void BinarySearch(int arr[],int key,int s,int e){

  int mid = (s+e)/2;

  if(arr[mid] == key){
    cout<<"Found: "<<key<<" is present at "<<i<<" index"<<endl;
  }
  elseif(arr[mid] < key){
    s = 0;
    e = mid-1;
    BinarySearch(arr,key);
  }
  elseif(arr[mid] > key){
    s = mid+1;
    e = n-1;
    BinarySearch(arr,key);
  }
  else{
    cout<<"Not found"<<endl;
  }
}

int main(){
  int n;
  cout<<"\nEnter the no. of elements = ";
  cin>>n;

  int arr[n];
  cout<<"\nEnter the array of elements = ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int key;
  cout<<"\nEnter the key = ";
  cin>>key;

  int s=0;
  int e=n-1;

  BinarySearch(arr,key,s,e);
}
