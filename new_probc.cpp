#include <iostream>
#include <random>
#include <fstream>

using namespace std;

// Function to generate random test cases
void generateTestCases(FILE* file) {
    random_device rd;
    mt19937 gen(rd());

    // Randomly generate the number of spaceships and bases
    int s = uniform_int_distribution<int>(1, 70)(gen);
    int b = uniform_int_distribution<int>(1, 70)(gen);

    fprintf(file, "%d %d\n", s, b);

    // Generate attacking powers for spaceships
    for (int i = 0; i < s; i++) {
        int a = uniform_int_distribution<int>(0, 1000000000)(gen);
        fprintf(file, "%d ", a);
    }
    fprintf(file, "\n");

    // Generate defensive powers and gold for bases
    for (int i = 0; i < b; i++) {
        int d = uniform_int_distribution<int>(0, 1000000000)(gen);
        int g = uniform_int_distribution<int>(0, 10000)(gen);
        fprintf(file, "%d %d\n", d, g);
    }
}

int main() {
    const int numTestCases = 1;  // Number of test cases to generate

    // Open the input file
    FILE* file = fopen("input31.txt", "w");
    
    if (file == NULL) {
        cerr << "Failed to open input file.\n";
        return 1;
    }

    // Generate test cases
    for (int t = 0; t < numTestCases; t++) {
        generateTestCases(file);
        fprintf(file, "\n");
    }

    // Close the input file
    fclose(file);

    return 0;
}
