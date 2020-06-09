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
uuid: 569752007
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 2, 4, 1)
assert board is not None


assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_busy_fields(board, 1) == 1 
assert gamma_free_fields(board, 1) == 2 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 3, 1, 0) == 1 


board913422438 = gamma_board(board)
assert board913422438 is not None
assert board913422438 == (".2\n"
"13\n")
del board913422438
board913422438 = None
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 4, 1, 0) == 0 


gamma_delete(board)