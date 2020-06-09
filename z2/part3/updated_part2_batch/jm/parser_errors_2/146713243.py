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
uuid: 146713243
"""
"""
random actions, total chaos
"""
board = gamma_new(2, 5, 4, 1)
assert board is not None


assert gamma_move(board, 1, 2, 1) == 0
assert gamma_move(board, 1, 1, 4) == 1
assert gamma_move(board, 2, 1, 1) == 1
assert gamma_move(board, 2, 1, 4) == 0
assert gamma_golden_possible(board, 2) == 1
assert gamma_move(board, 3, 1, 4) == 0
assert gamma_move(board, 3, 0, 3) == 1
assert gamma_move(board, 4, 3, 1) == 0
assert gamma_free_fields(board, 4) == 7
assert gamma_move(board, 1, 1, 0) == 0
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_move(board, 2, 0, 0) == 0
assert gamma_move(board, 3, 0, 3) == 0
assert gamma_move(board, 3, 1, 1) == 0
assert gamma_move(board, 4, 0, 0) == 1
assert gamma_move(board, 1, 2, 0) == 0
assert gamma_move(board, 1, 0, 3) == 0


board704610980 = gamma_board(board)
assert board704610980 is not None
assert board704610980 == (".1\n" "3.\n" "..\n" ".2\n" "4.\n")
del board704610980
board704610980 = None
assert gamma_move(board, 2, 4, 0) == 0
assert gamma_move(board, 3, 0, 1) == 0
assert gamma_move(board, 3, 1, 4) == 0
assert gamma_move(board, 4, 3, 1) == 0
assert gamma_move(board, 4, 1, 4) == 0
assert gamma_move(board, 1, 0, 3) == 0
assert gamma_move(board, 1, 1, 1) == 0
assert gamma_busy_fields(board, 1) == 1
assert gamma_move(board, 2, 0, 1) == 1
assert gamma_move(board, 2, 0, 1) == 0
assert gamma_move(board, 3, 3, 1) == 0
assert gamma_move(board, 3, 1, 0) == 0
assert gamma_golden_move(board, 3, 0, 0) == 0
assert gamma_move(board, 4, 0, 1) == 0
assert gamma_golden_move(board, 4, 3, 0) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_move(board, 1, 0, 2) == 0
assert gamma_free_fields(board, 1) == 2
assert gamma_move(board, 2, 0, 3) == 0
assert gamma_move(board, 3, 4, 0) == 0
assert gamma_move(board, 3, 1, 4) == 0
assert gamma_busy_fields(board, 3) == 1
assert gamma_move(board, 4, 3, 1) == 0


gamma_delete(board)