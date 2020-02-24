# NumUniquePairs
Determine Number of Distinct, unique pairs in an array summing to a given value.

You will be given an array of integers and a target value (k).
Determine the number of distinct pairs of elements in the array that sum to the target value.
Two pairs(a, b) and (c, d) are considered to be distinct iff the values in sorted order do not match.
i.e. (1, 9) and (9, 1) are indistinct but(1, 9) and (9, 2) are distinct.

For instance, given the array[1, 2, 3, 6, 7, 8, 9, 1], and a target value of 10,
the seven pairs(1, 9), (2, 8), (3, 7), (8, 2), (9, 1), (9, 1), and (1, 9) all sum to 10 and 
constitute only three distinct pairs : (1, 9), (2, 8), and (3, 7).

Function Description
--------------------
Complete the function numberOfPairs. The function must return an integer, the total number of distinct pairs
of elements in the array that sum to the target value.

numberOfPairs has the following parameter(s) :

    a[a[0], ...a[n - 1]] : an array of integers to select pairs from

    k : target integer value to sum to

    Constraints
    -----------

    1 ≤ n ≤ 5 × 105
    0 ≤ a[i] ≤ 109
    0 ≤ k ≤ 5 × 109
    
    Input Format for Custom Testing
    
    Sample Case 0
    Sample Input 0

    6   <- Number of vector items
    1   <- Item 1
    3
    46
    1
    3
    9   <- Item 6
    47  <- k (target integer)

    Sample Output 0
    1
    
    Explanation 0
    a = [1, 3, 46, 1, 3, 9], k = 47

    There are 4 pairs of elements where a[i] + a[j] = k:
(a[0] = 1, a[2] = 46)
(a[2] = 46, a[0] = 1)
(a[2] = 46, a[3] = 1)
(a[3] = 1, a[2] = 46)

In the list above, all four pairs contain the same values.
We only have 1 distinct pair, (1, 46).

You will be prompted for input if not passed in on stdin.

'''bash
echo -e "6\n1\n3\n46\n1\n3\n9\n47\n" | NumUniquePairs.exe
'''


