#include <iostream>
#include <vector>
#include <random>
#include<bits/stdc++.h>
using namespace std;

// Function to generate random test cases
void generateTestCases() {
    random_device rd;
    mt19937 gen(rd());

    // Randomly generate the number of spaceships and bases
    int s = uniform_int_distribution<int>(1, 10000)(gen);
    int b = uniform_int_distribution<int>(1, 10000)(gen);

    cout << s << " " << b << endl;
    cout<<"now other thinfs\n";

    // Generate attacking powers for spaceships
    for (int i = 0; i < s; i++) {
        int a = uniform_int_distribution<int>(0, 1000000000)(gen);
        cout << a << " ";
    }
    cout << endl;

    cout<<"now the after this\n";

    // Generate defensive powers and gold for bases
    for (int i = 0; i < b; i++) {
        int d = uniform_int_distribution<int>(0, 1000000000)(gen);
        int g = uniform_int_distribution<int>(0, 10000)(gen);
        cout << d << " " << g << endl;
    }
}

int main() {
    // Set the seed for reproducibility
    srand(time(nullptr));

    // Generate 5 random test cases
    for (int i = 0; i < 20; i++) {
        generateTestCases();
        cout << endl;
    }

    return 0;
}
