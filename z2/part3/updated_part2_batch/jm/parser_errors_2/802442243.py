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
uuid: 802442243
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 3, 6)
assert board is not None


assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 1 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_free_fields(board, 2) == 11 
assert gamma_move(board, 1, 1, 1) == 1 


board228506498 = gamma_board(board)
assert board228506498 is not None
assert board228506498 == (".22.\n"
"....\n"
"31..\n"
".1.1\n")
del board228506498
board228506498 = None
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 0, 3) == 1 
assert gamma_move(board, 1, 3, 2) == 1 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 0) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 3) == 1 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 3, 3) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_busy_fields(board, 2) == 6 
assert gamma_free_fields(board, 2) == 2 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 2) == 1 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 2, 3) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 1, 3) == 0 
assert gamma_golden_possible(board, 2) == 1 


gamma_delete(board)
