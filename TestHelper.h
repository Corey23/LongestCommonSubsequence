//
// Created by corey on 4/30/2020.
//

#ifndef LONGESTCOMMONSUBSEQUENCE_TESTHELPER_H
#define LONGESTCOMMONSUBSEQUENCE_TESTHELPER_H
#include <chrono>
#include <cstring>
#include "LongestCommonSubsequence.h"
using namespace std::chrono;
using namespace std;


class TestHelper{
private:
    char* one = new char[100];
    char* two = new char[100];
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



            for (int i = 0; i < numtests; i++) { // READS IN NUMBER OF TESTS BASED LISTED ON FILE

                int length1, length2;
                input >> length1; //LENGTH OF CHAR ARRAY GIVEN IN CURRENT LINE
                input.ignore(1);
                input.getline(one, 100); // GETS FIRST LINE OF CURRENT TEST
                if (strcmp(one, "") == 0) { // IF EMPTY LINE THEN BREAKS OUT OF TEST READING
                    break;
                }
                one = strtok(one, " \r\n"); //GETS FIRST CHARACTER ARRAY WITHOUT THE SPACES, CARRAGE RETURN AND NEWLINE CHARACTER


                input >> length2; //LENGTH OF CHAR ARRAY GIVEN IN CURRENT LINE
                input.ignore(1);
                input.getline(two, 100);// GETS SECOND LINE OF CURRENT TEST
                if (strcmp(two, "") == 0) {
                    break;
                }
                two = strtok(two, " \r\n"); //GETS SECOND CHARACTER ARRAY WITHOUT THE SPACES, CARRAGE RETURN AND NEWLINE CHARACTER

                LongestCommonSubsequence lcs(one, two, length1, length2);
                // CONSTRUCTS OBJ USING THE TWO LINES IN THE TEST USING DATA GATHERED ABOVE
                output << "Test " << i + 1 << ": " <<endl;
                output << "Line1 - " << one << endl;
                output << "Line2 - " << two << endl;
                output << endl;

                time_point <system_clock> start, end;// declares variables to store system clock time
                start = system_clock::now(); // stores the current time before Recursive Algorithm

                output << "length: " << lcs.lcs_length(0, 0) << endl;

                end = system_clock::now(); // stores the current time right after the default lcs algorithm ends
                duration<double, milli> elapsed_seconds = end - start; // gets value of seconds between start and end times
                output << "Recursive Time: " << elapsed_seconds.count() << " milliseconds" << endl;
                output << endl;

                start = system_clock::now(); // stores the current time before the iterative algorithm begins
                output << "length: " << lcs.lcs_lengthIter() << endl;

                end = system_clock::now(); // stores the current time right after the iterative algorithm ends
                elapsed_seconds = end - start; // gets value of milliseconds between start and end times
                output << "Iter Time: " << elapsed_seconds.count() << " milliseconds" << endl;
                output << endl;
            }


        }
    }





};
#endif //LONGESTCOMMONSUBSEQUENCE_TESTHELPER_H
