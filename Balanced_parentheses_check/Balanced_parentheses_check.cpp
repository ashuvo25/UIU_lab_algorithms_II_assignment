 /*বিসমিল্লাহির রাহমানির রাহিম */
 /* MD ASADUZZAMAN SHUVO  */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
 int x = 0;
 int y = 0;
bool validCheck(string &s,int a){
      if(a>=s.length()) return y;
      if(s[a] == '(') y++;
      else if(s[a] == ')')
        {
          y--;
          if(y<0) return false;
          else if(y == 0) return true;
        }   
    return validCheck(s,a+1);
  }
int main()
{
 
    string s;
    cin>>s;
    bool b = validCheck(s,x);
    if(b) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}