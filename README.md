# Tic Tac Toe

Design a function to determine if there is a winner in a Tic Tac Toe game played on a 3x3 board.
The game is won if a player has filled either a row, column, or diagonal with their marker
(either 'X' or 'O').

Your job is to implement 2 functions:

1. A function `bool checkWinner(vector<vector<char>>& board)` that
   returns `true` if there is a winner and `false` otherwise.

2. A function `void printBoard(vector<vector<char>>& board)` that
   prints the game board that is passed into the function.

### Input:

    board: A 3x3 vector of characters representing the Tic Tac Toe board.
    Each cell contains either 'X', 'O', or ' ' (empty).

### Constraints:

    The Tic Tac Toe board will always be a 3x3 grid.
    The characters in the board will be either 'X', 'O', or ' ' (empty).

### Run Your Code

Compile using `clang++ main.cpp` or `g++ main.cpp`

Execute/Run your code using `./a.out`

### Expected Output:

```
Is there a winnner on the board?

Test Case 1: true
[X, O,  , ]
[X, O,  , ]
[X,  , O, ]

Test Case 2: false
[X, O, X, ]
[X, X, O, ]
[O, X, O, ]

Test Case 3: true
[O, X, X, ]
[X, O,  , ]
[O, X, O, ]
```
