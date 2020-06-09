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
uuid: 968916480
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 4, 3)
assert board is not None


assert gamma_move(board, 1, 2, 0) == 1 
assert gamma_move(board, 2, 2, 2) == 1 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 1, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 1 
assert gamma_golden_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_golden_move(board, 3, 1, 1) == 1 
assert gamma_move(board, 4, 2, 0) == 0 
assert gamma_move(board, 4, 1, 4) == 1 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_move(board, 4, 0, 0) == 0 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 1 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 2, 4) == 1 
assert gamma_move(board, 3, 2, 3) == 1 


board483769945 = gamma_board(board)
assert board483769945 is not None
assert board483769945 == (".43\n"
".13\n"
"..2\n"
"131\n"
"221\n")
del board483769945
board483769945 = None
assert gamma_move(board, 4, 4, 0) == 0 
assert gamma_free_fields(board, 4) == 4 
assert gamma_golden_possible(board, 4) == 1 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 1 
assert gamma_move(board, 3, 4, 0) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 4, 3, 0) == 0 
assert gamma_move(board, 1, 2, 4) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 3, 2, 2) == 0 
assert gamma_move(board, 4, 2, 4) == 0 
assert gamma_move(board, 1, 0, 3) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_golden_possible(board, 2) == 1 


board437397748 = gamma_board(board)
assert board437397748 is not None
assert board437397748 == (".43\n"
"113\n"
".22\n"
"131\n"
"221\n")
del board437397748
board437397748 = None
assert gamma_move(board, 3, 2, 0) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_free_fields(board, 2) == 2 


board381280589 = gamma_board(board)
assert board381280589 is not None
assert board381280589 == (".43\n"
"113\n"
".22\n"
"131\n"
"221\n")
del board381280589
board381280589 = None


gamma_delete(board)
