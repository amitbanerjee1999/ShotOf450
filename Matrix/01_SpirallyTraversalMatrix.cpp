#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;
        if(matrix.size()==0)    return ans;
        bool seen[r][c];
        memset(seen, false, sizeof(seen));
        int dr[] = { 0, 1, 0, -1};
        int dc[] = { 1, 0, -1, 0};
        int r1=0,c1=0,di=0;
        
        for(int i=0; i<r*c; i++){
            ans.push_back(matrix[r1][c1]);
            seen[r1][c1]=true;
            int cr = r1 + dr[di];
            int cc = c1 + dc[di];
            
            if(0 <= cr and cr<r and 0<=cc and cc<c and !seen[cr][cc]){
                r1=cr;
                c1=cc;
            }
            else{
                di = (di + 1) % 4;
                r1 += dr[di];
                c1 += dc[di];                
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
