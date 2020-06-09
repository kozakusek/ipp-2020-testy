from part1 import (
    gamma_board,
    gamma_busy_fields,
    gamma_delete,
    gamma_free_fields,
    gamma_golden_move,
    gamma_golden_possible,
    gamma_move,
    gamma_new,
)

"""
scenario: test_random_actions
uuid: 923402368
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 3, 2, 4)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 0, 1) == 1 


board356703586 = gamma_board(board)
assert board356703586 is not None
assert board356703586 == ("1....\n"
"112..\n"
"2.2..\n")
del board356703586
board356703586 = None
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 1 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_free_fields(board, 2) == 6 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 3, 2) == 1 


board452290739 = gamma_board(board)
assert board452290739 is not None
assert board452290739 == ("1..1.\n"
"11221\n"
"222..\n")
del board452290739
board452290739 = None
assert gamma_move(board, 2, 0, 1) == 0 


board725532155 = gamma_board(board)
assert board725532155 is not None
assert board725532155 == ("1..1.\n"
"11221\n"
"222..\n")
del board725532155
board725532155 = None
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 0, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 3) == 0 


gamma_delete(board)