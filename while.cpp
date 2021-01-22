#include<iostream>
using namespace std;

       int main()

          {
              const string password= "Aman";
              cout<<"Enter your password"<<endl;

              string input;
              cin>>input;

              if(input==password)
              {
                  cout<<"your password correct"<<endl;

              }
              else
              {
                  cout<<"your password is incorrect"<<endl;

              }
              while(password!=input)
              {
                  cout<<"your password is denied"<<endl;
                  cout<<"Re-enter your password"<<endl;
                  cin>>input;
              }
              return 0;
          }
