 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
void subset(vector<int> vat ,int n,vector<int> set){
      
       if(n >= vat.size()){
         cout<< "{ ";
        for(auto c : set) {
            cout << c << " " ;
        }cout<< "}"<< endl;
        return;
       }
       // i th element not in subset;
       subset(vat,n+1,set);
       // i th element in subset;
       set.push_back(vat[n]);
       subset(vat,n+1,set);
      // set.pop_back();
       
}
int main()
{
   int n;cin>>n;
   vector<int> v(n);
   vector<int> s;
   for(int i = 0;i<n;i++){
    cin>>v[i];
   }
   subset(v,0,s);
    return 0;
}