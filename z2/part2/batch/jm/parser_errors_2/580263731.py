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
uuid: 580263731
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 2, 4, 1)
assert board is not None


assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_free_fields(board, 3) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_busy_fields(board, 4) == 0 
assert gamma_golden_move(board, 4, 1, 1) == 1 


board707798851 = gamma_board(board)
assert board707798851 is not None
assert board707798851 == (".4\n"
"23\n")
del board707798851
board707798851 = None
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_busy_fields(board, 4) == 1 


gamma_delete(board)