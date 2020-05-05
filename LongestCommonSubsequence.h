//
// Created by corey on 4/30/2020.
//

#ifndef LONGESTCOMMONSUBSEQUENCE_LONGESTCOMMONSUBSEQUENCE_H
#define LONGESTCOMMONSUBSEQUENCE_LONGESTCOMMONSUBSEQUENCE_H

#include <algorithm>
using namespace std;

class LongestCommonSubsequence{
private:
    char* first;
    char* second;
    int size1, size2;

public:
    LongestCommonSubsequence(char* one, char* two, int s1, int s2){
        first = one; // sets first char array
        second = two; // sets second char array
        size1 = s1; // sets first array size
        size2 = s2; // sets second array size
    }

    int lcs_length(int iter1, int iter2)
    {
        if (iter1 == size1 || iter2 == size2) // returns 0 when the end of the array is reached
            return 0;
        else if (first[iter1] == second[iter2]) { // matching character in sequence
            return 1 + lcs_length(iter1+1, iter2+1); //adds 1 to total and continues to read the next character in each array
        }
        else { // If current index doesnt have a match
            return max(lcs_length(iter1+1, iter2), lcs_length(iter1, iter2+1));
           // first one calls lcs for checking the next character in the first array with the current character of the second array
           // second one calls lcs for checking the next character in the second array with the current character of the first array
            // returns the larger of the two values
        }
    }

    int lcs_lengthIter()
    {
        int L[size1+1][size2+1]; // declares 2D array of indicated size with one added to each array size
        // start from end of each string
        for (int i = size1; i >= 0; i--)
            for (int j = size2; j >= 0; j--)
            {
                if (i == size1 || j == size2) {
                    L[i][j] = 0; // sets all values on the last column and last row to 0
                }
                else if (first[i] == second[j]) {
                    L[i][j] = 1 + L[i + 1][j + 1]; // if a match is found in sequence, set current index equal to 1v+ the immediate southeast index
                }
                else {
                    L[i][j] = max(L[i + 1][j], L[i][j + 1]); // gets greater value of the two already initialized indexes adjacent to the current index
                }
            }
        return L[0][0]; // returns the head of array which holds the lcs length
    }
};

#endif //LONGESTCOMMONSUBSEQUENCE_LONGESTCOMMONSUBSEQUENCE_H
