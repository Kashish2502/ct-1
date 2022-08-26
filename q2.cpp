/* Name:- Kashish
  RollNO:- 2010990375
  setNo:- 4
  Question:-2----
  */

 
// #include<bits/stdc++.h>
// using namespace std;

// bool checkCons(int arr[],int n){
//   sort(arr,arr+n);
//   for(int i=1;i<n;i++){
//     if(arr[i]!=arr[i-1]+1){
//       return false;
//       }
//   }
//   return arr[i];
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//   if(checkCons(arr,n)==true){
//     cout<<"true";
//   }
//   else
//     cout<<"false";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool Consecutive(int arr[], int n)
{
	
	sort(arr,arr+n);
    
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1]+1)
		{
			return false;
		}
	}
	return true;
}

bool rep(int arr[],int n){
    sort(arr,arr+n);
     for(int i = 0; i < n; i++)
    for(int j = i+1; j < n; j++)
      if(arr[i] == arr[j])
        return arr[i];
}


int main()
{
	// int arr[]= {-1,5,4,2,0,3,1};
    int arr[]={4,2,4,3,1};
	int n = sizeof(arr)/sizeof(arr[0]);
    
    
    
	if(Consecutive(arr, n) == true){
		cout<<" The Array contains  consecutive integers from "<<arr[0]<<" to "<<arr[n-1];}
	else if(rep(arr,n)== true){
        int repeated = rep(arr,n);
		cout<<" Array array does  not contain  consecutive integer as element " <<arr[n-1]<<"  is repeated ";}
	return 0;
}

