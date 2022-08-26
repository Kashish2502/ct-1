/*
Name:- Kashish
RollNo:- 2010990375
SetNo:-3
Question:1-- Minimum index of repeating element
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int min=-1;
    int n;
    // int arr[] = {5,6,3,4,3,6,4};
    // n=sizeof(arr)/sizeof(arr[0]);
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    set<int> s;
    
    for(int i=n-1;i>=0;i--){
        if(s.find(arr[i])!=s.end()){
            min=i;
        }
        else{
            s.insert(arr[i]);
        }
    }
  if(min!=-1)
    cout<<"The minimum index of the repeating element is "<<min;
  else
    cout<<"Invalid Input";
    
    return 0;
}

