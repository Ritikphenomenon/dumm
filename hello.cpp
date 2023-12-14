#include <bits/stdc++.h>
using namespace std;

int main() {

  // Open the input file.
  std::ifstream input_file("input00.txt");

  // Open the output file.
  std::ofstream output_file("output00.txt");

  // Read the number of elements from the input file.
  int n, m;
  input_file >> n >> m;

  // Create arrays to store the input and output data.
  int ara[n];
  pair<int, int> pa[m];

  // Read the input data from the input file.
  for (int i = 0; i < n; i++) {
    input_file >> ara[i];
  }

  for (int i = 0; i < m; i++) {
    input_file >> pa[i].first >> pa[i].second;
  }

  // Sort the data in the pa array.
  sort(pa, pa + m);

  // Add up the values in the pa array.
  for (int i = 1; i < m; i++) {
    pa[i].second += pa[i - 1].second;
  }

  // Find the upper bound of each element in the ara array in the pa array.
  for (int i = 0; i < n; i++) {
    int x = upper_bound(pa, pa + m, make_pair(ara[i], 1000000000)) - pa;
    output_file << pa[--x].second << " ";
  }

  // Close the input and output files.
  input_file.close();
  output_file.close();

  return 0;
}
