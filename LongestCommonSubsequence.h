//
// Created by corey on 4/30/2020.
//

#ifndef LONGESTCOMMONSUBSEQUENCE_LONGESTCOMMONSUBSEQUENCE_H
#define LONGESTCOMMONSUBSEQUENCE_LONGESTCOMMONSUBSEQUENCE_H

#include <algorithm>
using namespace std;
template <class T>
class LongestCommonSubsequence{
private:
    T* first;
    T* second;
    int size1, size2;

public:
    LongestCommonSubsequence(T* one, T* two, int s1, int s2){
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
};

#endif //LONGESTCOMMONSUBSEQUENCE_LONGESTCOMMONSUBSEQUENCE_H
