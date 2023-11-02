 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 string subsiquence(string &sl,string &sr){
        int len = min(sl.length(),sr.length());
        for (int i = 0; i < len; i++)
        {
          if(sl[i] != sr[i]) {
             return sl.substr(0,i);
          }
        }
        return sl.substr(0,len);   
 }
 string commonSubstring(string s[] ,int left ,int right){
 if(left  == right ) return s[left];
   if(left<=right){
      int mid  = (left +right)/2;
      string strleft = commonSubstring(s,left ,mid);
      string strright =commonSubstring(s,mid+1 ,right);
      return subsiquence(strleft,strright);
   }
 }
int main()
{
 int t;cin>>t;
  string s[t];
   for(int i = 0;i<t;i++){
      cin>>s[i];
   }
   // for(int i = 0;i<t;i++){
   //    cout<< s[i] <<endl;
   // }
   string m = commonSubstring(s,0,t-1);
   if(!(m.empty())) cout<< m <<endl;
   else cout << "No common prefix"<<endl;
    
    return 0;
}
