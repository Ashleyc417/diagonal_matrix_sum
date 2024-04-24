#include <iostream>
#include <vector>

bool checkWinner(std::vector<std::vector<char>> &board) {
  // TODO: Implement the function checkWinner to check for if someone
  // has won the game vertically or horizontally. 
  // If someone has won, return `true`, otherwise return false;

  return true;
}

int main() {
  // Test Cases
  std::vector<std::vector<char>> board1 = {
    {'X', 'O', ' '}, 
    {'X', 'O', ' '}, 
    {'X', ' ', 'O'}};
  
  std::cout << "Test Case 1: " << (checkWinner(board1) ? "true" : "false")
            << std::endl;

  std::vector<std::vector<char>> board2 = {
    {'X', 'O', 'X'}, 
    {'X', 'X', 'O'}, 
    {'O', 'X', 'O'}};
  
  std::cout << "Test Case 2: " << (checkWinner(board2) ? "true" : "false")
            << std::endl;

  return 0;
}
