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
uuid: 423508570
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 5, 4, 3)
assert board is not None


assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 1, 3, 0) == 1 
assert gamma_busy_fields(board, 1) == 2 
assert gamma_free_fields(board, 1) == 23 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 4, 4, 1) == 1 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_golden_move(board, 4, 2, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 1 
assert gamma_free_fields(board, 2) == 18 
assert gamma_move(board, 3, 4, 4) == 1 
assert gamma_golden_move(board, 3, 1, 4) == 0 
assert gamma_move(board, 4, 3, 3) == 1 
assert gamma_move(board, 4, 2, 0) == 1 
assert gamma_golden_move(board, 4, 3, 1) == 0 
assert gamma_move(board, 1, 0, 1) == 0 
assert gamma_move(board, 1, 4, 4) == 0 
assert gamma_free_fields(board, 1) == 15 
assert gamma_move(board, 2, 4, 0) == 1 
assert gamma_busy_fields(board, 2) == 4 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_busy_fields(board, 3) == 2 


board454451274 = gamma_board(board)
assert board454451274 is not None
assert board454451274 == ("...23\n"
".1.4.\n"
".2...\n"
"32..4\n"
"..412\n")
del board454451274
board454451274 = None
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 2, 3) == 1 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 2, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 0, 2) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 4, 2) == 1 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_busy_fields(board, 2) == 5 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_busy_fields(board, 4) == 3 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 4, 0) == 0 


board873326911 = gamma_board(board)
assert board873326911 is not None
assert board873326911 == ("...23\n"
"2114.\n"
"221.1\n"
"32..4\n"
".3412\n")
del board873326911
board873326911 = None
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 3, 2) == 1 
assert gamma_move(board, 2, 3, 4) == 0 
assert gamma_move(board, 3, 0, 4) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_move(board, 4, 4, 4) == 0 
assert gamma_move(board, 1, 4, 1) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 2, 0, 4) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 1, 3) == 0 
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 4, 3) == 1 
assert gamma_golden_move(board, 1, 4, 4) == 1 
assert gamma_move(board, 3, 4, 1) == 0 
assert gamma_move(board, 4, 1, 3) == 0 
assert gamma_move(board, 4, 1, 2) == 0 
assert gamma_busy_fields(board, 4) == 4 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_busy_fields(board, 1) == 7 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 7 


gamma_delete(board)
