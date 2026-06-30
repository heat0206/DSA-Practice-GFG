/*
 * Problem: Palindrome String
 * Platform: GeeksForGeeks
 * Difficulty: Easy
 * Link: https://www.geeksforgeeks.org/problems/palindrome-string0817/1
 *
 * Approach: Recursion — base case at start >= end, recursive call does
 * checks for first element and last element and then second and second last element.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

 class Solution {
  public:
    bool isPalindromeRec( string &s, int start, int end)
    {
        if(start >= end)
            return true;
            
        if(s[start] != s[end])
        {
            return false;
        }
            
        isPalindromeRec(s,start+1,end-1);   
    }
    bool isPalindrome(string& s) {
        // code here
        int n = s.size();
        isPalindromeRec(s,0,s.size()-1);
    }
};