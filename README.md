# Tic Tac Toe
Design a function to determine if there is a winner in a Tic Tac Toe game played on a 3x3 board. 
The game is won if a player has filled either a row, column, or diagonal with their marker 
(either 'X' or 'O'). Implement a function `bool checkWinner(vector<vector<char>>& board)` that 
returns `true` if there is a winner and `false` otherwise.


### Input:
    board: A 3x3 vector of characters representing the Tic Tac Toe board. 
    Each cell contains either 'X', 'O', or ' ' (empty).

### Output:
    Returns `true` if there is a winner, `false` otherwise.

### Constraints:
    The Tic Tac Toe board will always be a 3x3 grid.
    The characters in the board will be either 'X', 'O', or ' ' (empty).

### Example:
```cpp
vector<vector<char>> board = {
    {'X', 'O', ' '},
    {'X', 'O', ' '},
    {'X', ' ', 'O'}
};
// Expected output: true (X wins)
```

