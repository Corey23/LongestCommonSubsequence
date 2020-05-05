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
        first = one;
        second = two;
        size1 = s1;
        size2 = s2;
    }

    int lcs_length(int iter1, int iter2)
    {
        if (iter1 == size1 || iter2 == size2)
            return 0;
        else if (first[iter1] == second[iter2]) {
            return 1 + lcs_length(iter1+1, iter2+1);
        }
        else {
            return max(lcs_length(iter1+1, iter2), lcs_length(iter1, iter2+1));
        }
    }

    int lcs_lengthIter()
    {
        int L[size1+1][size2+1];
        for (int i = size1; i >= 0; i--)
            for (int j = size2; j >= 0; j--)
            {
                if (i == size1 || j == size2) L[i][j] = 0;
                else if (first[i] == second[j]) L[i][j] = 1 + L[i+1][j+1];
                else L[i][j] = max(L[i+1][j], L[i][j+1]);
            }
        return L[0][0];
    }
};

#endif //LONGESTCOMMONSUBSEQUENCE_LONGESTCOMMONSUBSEQUENCE_H
