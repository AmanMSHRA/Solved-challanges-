#include<bits/stdc++.h>
#include<string>
using namespace std;

                 void convert(string s, int numRows)
                 {

                  int l = s.length();

                   string res;

                   int I = 2* numRows - 2;

                   for(int i = 0;i < l; i++)
                   {
                      int step = I - 2*i;

                       for(int j = i;j < l; j += I)
                       {
                          res += s[j];

                           if(step > 0 && step < I && j + step < l)
                           {
                              res += s[j+step];

                           }
                       }
                   }
                   for(int i=0;i<l;i++)
                   {
                      cout<<res[i];
                   }

               }

int main()
{

    string s = "PAYPALISHIRING";
    int numRows = 3;

    convert(s,numRows);

    return 0;
}
