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
uuid: 628606601
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 5, 3, 1)
assert board is not None


assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_busy_fields(board, 1) == 0 
assert gamma_move(board, 2, 4, 1) == 0 
assert gamma_move(board, 2, 0, 3) == 1 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 4, 2) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 0, 3) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 0, 0) == 0 
assert gamma_golden_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 0, 3) == 0 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 2, 2) == 1 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 4, 2) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_move(board, 3, 4, 2) == 0 
assert gamma_move(board, 3, 2, 4) == 0 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_golden_move(board, 1, 3, 0) == 0 
assert gamma_move(board, 2, 0, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 1, 4, 0) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_free_fields(board, 1) == 3 
assert gamma_golden_move(board, 1, 2, 2) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 2, 3, 2) == 0 
assert gamma_move(board, 2, 2, 3) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 0, 2) == 1 
assert gamma_busy_fields(board, 3) == 3 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 4, 0) == 0 
assert gamma_move(board, 3, 3, 2) == 0 
assert gamma_move(board, 3, 2, 3) == 1 
assert gamma_golden_possible(board, 3) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 1, 0, 2) == 0 
assert gamma_move(board, 2, 1, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 


board361635359 = gamma_board(board)
assert board361635359 is not None
assert board361635359 == ("...\n"
"2.3\n"
"333\n"
"1..\n"
"...\n")
del board361635359
board361635359 = None


gamma_delete(board)
