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
uuid: 293011105
"""
"""
random actions, total chaos
"""
board = gamma_new(3, 3, 3, 4)
assert board is not None


assert gamma_move(board, 1, 0, 2) == 1 
assert gamma_move(board, 1, 1, 0) == 1 
assert gamma_move(board, 2, 2, 1) == 1 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 0, 1) == 1 
assert gamma_move(board, 3, 0, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 1 
assert gamma_busy_fields(board, 1) == 3 
assert gamma_move(board, 2, 1, 0) == 0 
assert gamma_golden_possible(board, 2) == 1 
assert gamma_move(board, 3, 2, 0) == 1 
assert gamma_busy_fields(board, 3) == 2 
assert gamma_move(board, 1, 2, 2) == 1 
assert gamma_move(board, 2, 0, 0) == 1 
assert gamma_move(board, 2, 2, 0) == 0 


board146499522 = gamma_board(board)
assert board146499522 is not None
assert board146499522 == ("1.1\n"
"312\n"
"213\n")
del board146499522
board146499522 = None
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 2, 1) == 0 
assert gamma_move(board, 2, 2, 1) == 0 
assert gamma_move(board, 3, 2, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 1 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_golden_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 0, 1) == 0 
assert gamma_move(board, 3, 1, 2) == 0 
assert gamma_move(board, 1, 1, 1) == 0 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 3, 1, 2) == 0 


gamma_delete(board)
