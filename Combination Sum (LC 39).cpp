/*
*
    void solve(int index,int target,vector<int> &temp,vector<vector<int>> &res,vector<int> candidates)
    {
        if(index==candidates.size())
        {
            if( target==0)
            res.push_back(temp);
            return;
        }
        if(candidates[index]<=target)
        {
            temp.push_back(candidates[index]);
            solve(index,target-candidates[index],temp,res,candidates);
            temp.pop_back();
        }
        solve(index+1,target,temp,res,candidates);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        solve(0,target,temp,res,candidates);
        return res;
    }
