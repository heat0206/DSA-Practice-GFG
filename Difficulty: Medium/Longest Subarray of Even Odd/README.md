# Given an array `arr[]`, return the **maximum possible length** of a subarray such that its elements are arranged alternately either as even and odd or odd and even.

## Examples:

> **Input:** `arr[] = [10, 12, 14, 7, 8]`\
> **Output:** `3`\
> **Explanation:** The max length of subarray is **3** and the subarray
> is **\[14, 7, 8\]**. Here the array starts as an even element and has
> odd and even elements alternately.

------------------------------------------------------------------------

> **Input:** `arr[] = [4, 6]`\
> **Output:** `1`\
> **Explanation:** The array contains **\[4, 6\]**. So, we can only
> choose **1** element as that will be the max length subarray.

## Constraints:

-   `1 ≤ arr.size() ≤ 10^6`
-   `1 ≤ arr[i] ≤ 10^3`
