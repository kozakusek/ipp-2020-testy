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
uuid: 754773005
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 2, 3, 1)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 1) == 1 


board899804583 = gamma_board(board)
assert board899804583 is not None
assert board899804583 == (".2.\n"
"11.\n")
del board899804583
board899804583 = None
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_free_fields(board, 3) == 0 


board990365068 = gamma_board(board)
assert board990365068 is not None
assert board990365068 == ("32.\n"
"11.\n")
del board990365068
board990365068 = None
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_golden_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 


gamma_delete(board)
