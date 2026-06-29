/*
 * Problem: 1 to N Without Loops
 * Platform: GeeksForGeeks
 * Difficulty: Basic
 * Link : https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1
 * 
 * Approach : Recursion - base case at n=0, first recursive call n-1 and
 * then print n
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(n)
*/

class Solution {
  public:
    void printTillN(int n) {
        // code here
        if(n == 0)
            return;
        
        printTillN(n-1);
        cout<<n<<" ";
    }
};