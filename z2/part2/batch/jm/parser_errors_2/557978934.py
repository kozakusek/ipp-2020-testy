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
uuid: 557978934
"""
"""
random actions, total chaos
"""
board = gamma_new(5, 2, 3, 1)
assert board is not None


assert gamma_move(board, 1, 1, 2) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 0, 1) == 1 
assert gamma_move(board, 3, 0, 1) == 0 
assert gamma_move(board, 1, 1, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 1 
assert gamma_move(board, 2, 1, 1) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 1, 0, 0) == 0 
assert gamma_move(board, 1, 3, 0) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 0 


board662926877 = gamma_board(board)
assert board662926877 is not None
assert board662926877 == ("22...\n"
"1....\n")
del board662926877
board662926877 = None
assert gamma_move(board, 3, 3, 1) == 1 
assert gamma_free_fields(board, 3) == 3 
assert gamma_move(board, 1, 3, 1) == 0 
assert gamma_move(board, 2, 1, 0) == 1 
assert gamma_move(board, 3, 0, 3) == 0 
assert gamma_move(board, 3, 3, 0) == 1 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_free_fields(board, 1) == 0 
assert gamma_golden_possible(board, 1) == 1 
assert gamma_move(board, 2, 1, 2) == 0 
assert gamma_move(board, 2, 2, 0) == 1 
assert gamma_move(board, 3, 1, 0) == 0 
assert gamma_move(board, 3, 3, 0) == 0 
assert gamma_move(board, 1, 1, 4) == 0 
assert gamma_move(board, 2, 3, 1) == 0 
assert gamma_move(board, 3, 1, 1) == 0 
assert gamma_move(board, 1, 0, 4) == 0 
assert gamma_move(board, 2, 0, 4) == 0 
assert gamma_move(board, 2, 3, 0) == 0 
assert gamma_golden_move(board, 2, 0, 3) == 0 


gamma_delete(board)
