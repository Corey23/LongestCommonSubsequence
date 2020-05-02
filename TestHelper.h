//
// Created by corey on 4/30/2020.
//

#ifndef LONGESTCOMMONSUBSEQUENCE_TESTHELPER_H
#define LONGESTCOMMONSUBSEQUENCE_TESTHELPER_H
#include <chrono>
#include "LongestCommonSubsequence.h"
using namespace std::chrono;
using namespace std;


class TestHelper{
private:
    char* one = new char[50];
    char* two = new char[50];
    ifstream input;


public:
    TestHelper(char* filename){
        input.open(filename);
    }

    void runTests(ofstream& output) {
        if (!input.is_open()) {
            cout << "input file not open" << endl;
        } else {
            int numtests;

            input >> numtests;


            char *tempLine1 = new char[50];
            char *tempLine2 = new char[50];
            for (int i = 0; i < numtests; i++) {

                int length1, length2;
                input >> length1;
                input.ignore(1);
                input.getline(one, 50);
                if (strcmp(one, "") == 0) {
                    break;
                }
                one = strtok(one, " \r\n");
                // one = tempName;

                input >> length2;
                input.ignore(1);
                input.getline(two, 50);
                if (strcmp(two, "") == 0) {
                    break;
                }
                two = strtok(two, " \r\n");
                //two = tempName;
                time_point <system_clock> start, end;// declares variables to store system clock time
                start = system_clock::now(); // stores the current time before the first kruskals begins
                LongestCommonSubsequence<char> lcs(one, two, length1, length2);
                output << "length: " << lcs.lcs_length(0, 0) << endl;

                end = system_clock::now(); // stores the current time right after the first kruskals ends
                duration<double, milli> elapsed_seconds = end - start; // gets value of seconds between start and end times
                output << "Default Time: " << elapsed_seconds.count() << " milliseconds" << endl;
            }


        }
    }





};
#endif //LONGESTCOMMONSUBSEQUENCE_TESTHELPER_H
