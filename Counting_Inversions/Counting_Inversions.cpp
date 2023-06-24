 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

int marge(int arr[],int l,int mid,int r){
     
    int count = 0;
    int s1 = mid-l +1;
    int s2 = r-mid;
    int arr1[s1];
    int arr2[s2];

    for(int i = 0 ;i<s1;i++){
        arr1[i] = arr[l+i];
    }
    for(int i = 0 ;i<s2;i++){
        arr2[i] = arr[mid+1+i];
    }
   int i = 0;
   int j = 0;
   int k = l;
   while(i<s1&&j<s2){
    if(arr1[i]<=arr2[j]){
        arr[k] = arr1[i];
        k++;i++;
    }
     else{
        arr[k] = arr2[j];
        count += s1- i;
        k++;j++;
    }
   }
   while(i<s1){
     arr[k] = arr1[i];
       k++;i++;
   }
   while(j<s2){
     arr[k] = arr2[j];
       k++; j++;
   }

   return count;
}
// MERGE SORT
int margeSort(int arr[],int l,int r){
   int count  = 0;
   if(l<r){
       int mid = (l+r)/2;
      count+= margeSort(arr,l,mid);
      count+= margeSort(arr,mid+1,r);
      count+= marge(arr,l,mid,r);
   }

   return count ;
}
//MAIN FUNCTION
int main(){
    int sizee;
   // cout<<"Enter your Array Size :" ;
    cin>>sizee;
    int arr[sizee];
    for(int i = 0;i<sizee;i ++){
        cin>>arr[i];
    }
   int count =  margeSort(arr,0,sizee-1);
//  for(int i = 0;i<sizee;i ++){
//         cout<<arr[i] << "  ";
//     }
   cout<<"#inversions: "<<count << endl;
       return 0;
}
