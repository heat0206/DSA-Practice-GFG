/*
 * Problem: Distinct Permutations of a String
 * Platform: GeeksForGeeks
 * Difficulty: Medium
 * Link: https://www.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
 *
 * Approach: Backtracking with recursion.
 * Sort the string first, then fix one character at a time and swap it
 * into the current index while skipping duplicate characters at the same level.
 *
 * Time Complexity: O(n * n!) in the worst case
 * Space Complexity: O(n) for the recursion stack, excluding output storage
 */


class Solution {
  public:
    void solve(string &s, int idx, vector<string> &ans)
    {
        //base case
        if(idx == s.size() - 1)
        {
            ans.push_back(s);
            return;
        }
        
        //to keep a track of used char.[Get unique permutations]
        unordered_set<char> used;
        
        for(int j=idx; j<s.size(); j++)
        {   
            if(used.count(s[j]))
            {
                continue; //avoid repetations.
            }
            
            used.insert(s[j]);
            
            //swap(s[idx], s[j])
            char temp = s[idx];
            s[idx] = s[j];
            s[j] = temp;
            
            solve(s, idx + 1, ans);
            
            //swap(s[idx], s[j])
            temp = s[idx];
            s[idx] = s[j];
            s[j] = temp;
        }
        
    }
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string> ans;
        sort(s.begin(),s.end());
        solve(s,0,ans);
        return ans;
    }
};
