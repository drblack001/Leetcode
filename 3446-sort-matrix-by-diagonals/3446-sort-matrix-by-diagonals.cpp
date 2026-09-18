class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        // vector<vector<int>> ans;
        // vector<int> key;
        // for(int i=0;i<grid.size()-1;i++){
        //     for(int j=0;j<grid[i].size()-1;j++){
        //         if(i%2==0){
        //             if(grid[i][j]  > grid[i+1][j+1]){
        //             swap(grid[i][j] , grid[i+1][j+1]);
        //             break;
        //             }
        //         }
        //         if(grid[i][j]  < grid[i+1][j+1]){
        //             swap(grid[i][j] , grid[i+1][j+1]);
        //         }
        //     }
        // }
        // return grid;
        unordered_map<int,vector<int>> mp;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                mp[i-j].push_back(grid[i][j]);
            }
        }

        for(auto& it :mp){
            if(it.first>=0){
                sort(it.second.begin(), it.second.end());
            }
            else{
                sort(it.second.rbegin(), it.second.rend());
            }
        }

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                grid[i][j]=mp[i-j].back();
                mp[i-j].pop_back();
            }
        }

        // for(auto it :mp){
        //     for(auto x : it.second){
        //         cout<<x<<" ";
        //     }
        //     cout<<endl;
        // }
        return grid;
    }
};