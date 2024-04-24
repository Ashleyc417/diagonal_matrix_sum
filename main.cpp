#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of both diagonals in the matrix
int diagonalSum(vector<vector<int>> &matrix) {
  // TODO: Add the sum of the primary and secondary diagonal,
  // then return the sum.
}

int main() {
  // Example matrix (you can modify this for testing)
  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int result = diagonalSum(matrix);
  cout << "Sum of diagonals = " << result << endl;

  return 0;
}
