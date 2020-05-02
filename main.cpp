//
// Created by corey on 4/27/2020.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include <chrono>

#include "TestHelper.h"

using namespace std;


int main() {
    TestHelper t("testinput.txt");
    ofstream output("output.txt");
    t.runTests(output);





    return 0;
}