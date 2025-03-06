class Solution {
public:
 int vec[2502];
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n=grid.size();
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                vec[grid[i][j]]++;
            }
        }

        int a,b;
        for(int i=1;i<=n*n;i++){
            if(vec[i]==2)a=i;
            if(vec[i]==0)b=i;
        }

        return {a,b};

    }
};