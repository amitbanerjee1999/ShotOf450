#include <bits/stdc++.h>
using namespace std;
 
//It will take the string and prints the longest palindromic substring
//and its length
string longestPalin( string s )
{
    //finding the length of given string
    int n = s.length(); 
 
    //Table table[i][j] is true if the string from  i index to j index is a palindrome
    int dp[n][n];
    //Initializing all contents of the table to 0
    memset(dp, 0, sizeof(dp));
 
    // All substrings of length 1 are palindromes
    int maxLength = 1;
    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;
 
    // check for sub-string of length 2.
    int start = 0;
    for (int i = 0; i < n-1; ++i)
    {
        if (s[i] == s[i+1])
        {
            dp[i][i+1] = 1;
            start = i;
            maxLength = 2;
        }
    }
 
    // Check for lengths greater than 2. k is length
    // of substring
    for (int k = 3; k <= n; ++k)
    {
        // Fix the starting index
        for (int i = 0; i < n-k+1 ; ++i)
        {
            // Get the ending index of substring from
            // starting index i and length k
            int j = i + k - 1;
 
            // checking for sub-string from ith index to
            // jth index iff s[i+1] to s[j-1] is a
            // palindrome
            if (dp[i+1][j-1] && s[i] == s[j])
            {
                dp[i][j] = true;
 
                if (k > maxLength)
                {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
    //Printing the longets palindromic substring
    int end = start + maxLength - 1; 
    string res="";
//    cout<<"Longest palindrome substring is ";
    for( int i = start; i <= end; ++i )
    {
        res=res+s[i];
    }
    return res;
    cout<<endl;
    //Length of the above longest palindromic substring
//    cout<<maxLength<<endl;
}

//string longestPalin (string S) {
//        // code here
//        int n = S.length();
//        int dp[n][n];
//        memset(dp,0,sizeof(dp));
//        int max=1;
//        for(int i=0;i<n;i++){
//            dp[i][i] = 1;
//        }
//        int start=0;
//        for(int i=0;i<n-1;i++){
//            if(S[i]==S[i+1]){
//                dp[i][i+1]=1;
//                start=i;
//                max=2;
//        }
//        }
//        
//        for(int k=3;k<=n;k++){
//            for(int i=0;i<n-k+1;i++){
//                int j=i+k-1;
//                if(dp[i+1][j-1] and S[i]==S[j])
//                    dp[i][j]=1;
//                    if(k>max){
//                        start=i;
//                        max=k;
//                    }
//            }
//        }
//        
//        int end = start+max-1;
//        cout<<start<<" "<<end<<" "<<max;
//        string res="";
//        for(int i=start;i<=end;i++){
//            res=res+S[i];
//        }
//        return res;
//    }
 
int main()
{
    char s[] = "kjqlrzzfmlvyoshiktodnsjjp";
    cout<<longestPalin(s);
    return 0;
}
