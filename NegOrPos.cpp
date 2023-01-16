//check wheater the given number is negative or positive
 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int n;
     cout<<"Enter the number to check wheater it is negative or positive : ";
     cin>>n;
     if(n<0)
     {
         cout<<"The given number is negative";
     }
     else if(n=0){
            cout<<"The given number is zero, Which is Neither positive nor negative";
     }
     else
     {
         cout<<"The given number is positive";
     }
     return 0;
 }
