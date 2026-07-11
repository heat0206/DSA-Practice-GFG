/*
 * Problem: Count Digits in a Number
 * Platform: GeeksForGeeks
 * Difficulty: Easy
 * Link: https://www.geeksforgeeks.org/problems/count-digits5716/1
 *
 * Approach: Recursively divide the number by 10 until it becomes 0,
 * incrementing a counter for each digit removed.
 *
 * Time Complexity: O(log10 n)
 * Space Complexity: O(log10 n) — recursive call stack
 */

class Solution {
  public:
    int digits =0 ;
    int countDigits(int n) {
        // Code here
        if(n <= 0)
            return digits;
            
        digits++;
        countDigits(n/10);
    }
};