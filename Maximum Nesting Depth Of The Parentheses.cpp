#include<bits/stdc++.h>

 

int maxDepth(string s) {

    // Write your code here.

    int count=0;

    int maxi=0;

    

    for(int i=0;i<s.length();i++){

         

          if(s.at(i)=='(')

            count++;

          else if(s.at(i)==')')

          count--; 

          maxi=max(maxi,count);   

          

    }

    return maxi;

    

}
