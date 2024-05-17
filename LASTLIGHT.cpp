#include "pch.h"
#include <vector>
#include <stdio.h>
#include <iostream>
#include <gtest/gtest.h>
using namespace std;

vector<int> increaseVector(const vector<int>& inputVector, int n) {
    vector<int> outputVector;

    for (int value : inputVector) {

        cout << value + n << " ";
        outputVector.push_back(value + n);
    }
    return outputVector;
}

TEST(IncreaseVectorTest, IncreaseVectorTest) {
    vector<int> input = { 1, 2, 3, 4, 5 };
    int n = 100;

    vector<int> result = increaseVector(input, n);

    // Assert
    ASSERT_EQ(result.size(), input.size());
    for (int i = 0; i < input.size(); i++) {
        ASSERT_EQ(result[i], input[i] + n);
    }
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


