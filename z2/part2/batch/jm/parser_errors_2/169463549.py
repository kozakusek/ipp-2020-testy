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
uuid: 169463549
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 3, 2, 1)
assert board is not None


assert gamma_move(board, 1, 0, 1) == 1 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_golden_possible(board, 1) == 0 
assert gamma_move(board, 2, 2, 0) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_free_fields(board, 1) == 3 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_free_fields(board, 2) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_busy_fields(board, 2) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 1, 2, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 


gamma_delete(board)
