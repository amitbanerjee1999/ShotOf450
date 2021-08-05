//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	    int m = s.size();
	    int len=0;
	    int i=1;
	    int lps_array[m];
	    lps_array[0] = 0;
	    while(i<m){
	        if(s[i]==s[len]){
	            len++;
	            lps_array[i]=len;
	            i++;
	        }else{
	            if(len!=0){
	                len = lps_array[len-1];
	            }
	            else{
	                lps_array[i]=0;
	                i++;
	            }
	        }
	    }
	    return lps_array[m-1];
	}
};

// { Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends
