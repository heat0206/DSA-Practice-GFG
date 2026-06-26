/*
 * Problem: 1 to N Without Loops
 * Platform: GeeksForGeeks
 * Difficulty: Basic
 * Link: https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops
 *
 * Approach: Recursion — base case at n=0, recursive call prints
 * n-1 first then prints n, building up from 1 to n naturally.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n) — recursive call stack
 */

class Solution {
  public:
    void printNos(int n) {
        // code here
        if (n == 0)
            return;
        
        cout<<n<<" ";
        printNos(n-1);
    }
};