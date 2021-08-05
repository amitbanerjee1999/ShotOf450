#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return if the paranthesis are balanced or not
bool ispar(string expr)
{
    // Your code her
    stack < char > s ;

    for(int i=0;i<expr.size();i++){

        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') {
            s.push(expr[i]);
            continue ;
        }
        // stack can not be empty for closing bracket
        int x;
        if (s.empty()) 
            return false;
  
        switch (expr[i]) {
            case ')':  {
                x = s.top();
                s.pop();
                if (x=='{' || x=='[') 
                    return false;
                break ;
            }
            case '}':  {
                x = s.top(); 
                s.pop(); 
                if (x=='(' || x=='[') 
                    return false ;
                break;
            }
            case ']':  {
                x = s.top(); 
                s.pop(); 
                if (x =='(' || x == '{') 
                    return false;
                break;
            }
        }
    }
    // Check Empty Stack 
    return (s.empty());
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
