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
uuid: 855817617
"""
"""
random actions, total chaos
"""
board = gamma_new(4, 4, 2, 15)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 1 


board753424335 = gamma_board(board)
assert board753424335 is not None
assert board753424335 == ("1...\n"
".11.\n"
"..2.\n"
".2..\n")
del board753424335
board753424335 = None
assert gamma_move(board, 2, 3, 0) == 1 
assert gamma_move(board, 1, 3, 3) == 1 
assert gamma_golden_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 2, 3, 1) == 1 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 2, 3) == 1 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 


board216599367 = gamma_board(board)
assert board216599367 is not None
assert board216599367 == ("1121\n"
"111.\n"
".122\n"
"2222\n")
del board216599367
board216599367 = None
assert gamma_move(board, 2, 3, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_free_fields(board, 1) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 2, 2, 2) == 0 
assert gamma_busy_fields(board, 2) == 8 
assert gamma_move(board, 1, 3, 2) == 0 
assert gamma_golden_move(board, 1, 0, 3) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 1, 1, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_move(board, 2, 3, 1) == 0 


gamma_delete(board)
