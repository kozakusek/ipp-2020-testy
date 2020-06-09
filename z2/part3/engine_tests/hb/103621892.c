#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 103621892

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 23, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 1, 11) == 0 );

assert( gamma_move(board, 2, 1, 4) == 0 );

assert( gamma_move(board, 3, 0, 1) == 1 );

assert( gamma_move(board, 4, 1, 16) == 0 );

assert( gamma_move(board, 5, 0, 15) == 1 );

assert( gamma_move(board, 6, 0, 14) == 1 );

assert( gamma_move(board, 7, 1, 7) == 0 );

assert( gamma_move(board, 8, 1, 7) == 0 );

assert( gamma_move(board, 1, 1, 0) == 0 );

assert( gamma_move(board, 2, 1, 16) == 0 );

assert( gamma_move(board, 3, 0, 18) == 1 );

assert( gamma_move(board, 4, 1, 5) == 0 );

assert( gamma_move(board, 5, 0, 7) == 1 );

assert( gamma_move(board, 6, 0, 12) == 1 );

assert( gamma_move(board, 7, 1, 22) == 0 );

assert( gamma_move(board, 8, 0, 18) == 0 );

assert( gamma_move(board, 1, 1, 14) == 0 );

assert( gamma_move(board, 2, 1, 12) == 0 );

assert( gamma_move(board, 3, 1, 11) == 0 );

assert( gamma_move(board, 4, 1, 18) == 0 );

assert( gamma_move(board, 5, 0, 6) == 1 );

assert( gamma_move(board, 6, 1, 23) == 0 );

assert( gamma_move(board, 7, 1, 22) == 0 );

assert( gamma_move(board, 8, 0, 6) == 0 );

assert( gamma_move(board, 1, 1, 20) == 0 );

assert( gamma_move(board, 2, 0, 3) == 1 );

assert( gamma_move(board, 3, 1, 18) == 0 );

assert( gamma_move(board, 4, 0, 13) == 1 );

assert( gamma_move(board, 5, 1, 22) == 0 );

assert( gamma_move(board, 6, 1, 21) == 0 );

assert( gamma_move(board, 7, 0, 3) == 0 );

assert( gamma_move(board, 8, 0, 21) == 1 );

assert( gamma_move(board, 1, 0, 0) == 1 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 12 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 1 );

assert( gamma_free_fields(board, 2) == 12 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 12 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 12 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 3 );

assert( gamma_free_fields(board, 5) == 12 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 2 );

assert( gamma_free_fields(board, 6) == 12 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 0 );

assert( gamma_free_fields(board, 7) == 12 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 12 );

assert( gamma_golden_move(board, 1, 1, 20) == 0 );

assert( gamma_move(board, 2, 0, 7) == 0 );

assert( gamma_move(board, 3, 1, 23) == 0 );

assert( gamma_move(board, 4, 0, 18) == 0 );

assert( gamma_move(board, 5, 0, 2) == 1 );

assert( gamma_move(board, 6, 0, 19) == 1 );

assert( gamma_move(board, 7, 0, 4) == 1 );

assert( gamma_move(board, 8, 0, 7) == 0 );

assert( gamma_move(board, 1, 1, 5) == 0 );

assert( gamma_move(board, 2, 0, 20) == 1 );

assert( gamma_move(board, 3, 1, 8) == 0 );

assert( gamma_move(board, 4, 1, 22) == 0 );

assert( gamma_move(board, 5, 1, 8) == 0 );

assert( gamma_move(board, 6, 1, 5) == 0 );

assert( gamma_move(board, 7, 0, 13) == 0 );

assert( gamma_move(board, 8, 0, 23) == 0 );

assert( gamma_move(board, 1, 0, 16) == 1 );

assert( gamma_move(board, 2, 0, 21) == 0 );

assert( gamma_move(board, 3, 1, 9) == 0 );

assert( gamma_move(board, 4, 0, 18) == 0 );

assert( gamma_move(board, 5, 1, 17) == 0 );

assert( gamma_move(board, 6, 0, 19) == 0 );

assert( gamma_move(board, 7, 0, 1) == 0 );

assert( gamma_move(board, 8, 1, 11) == 0 );

assert( gamma_move(board, 1, 0, 6) == 0 );

assert( gamma_move(board, 2, 1, 17) == 0 );

assert( gamma_move(board, 3, 1, 3) == 0 );

assert( gamma_move(board, 4, 1, 17) == 0 );

assert( gamma_move(board, 5, 1, 23) == 0 );

assert( gamma_move(board, 6, 0, 13) == 0 );

assert( gamma_move(board, 7, 1, 21) == 0 );

assert( gamma_move(board, 8, 1, 13) == 0 );

assert( gamma_move(board, 1, 0, 22) == 1 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 6 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 6 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 6 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 6 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 6 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 1 );

assert( gamma_free_fields(board, 7) == 6 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 6 );

assert( gamma_move(board, 2, 1, 12) == 0 );

assert( gamma_move(board, 3, 1, 17) == 0 );

assert( gamma_move(board, 4, 1, 13) == 0 );

assert( gamma_move(board, 5, 1, 11) == 0 );

assert( gamma_move(board, 6, 0, 4) == 0 );

assert( gamma_move(board, 7, 0, 2) == 0 );

assert( gamma_move(board, 8, 0, 0) == 0 );

assert( gamma_move(board, 1, 1, 17) == 0 );

assert( gamma_move(board, 2, 1, 12) == 0 );

assert( gamma_move(board, 3, 1, 0) == 0 );

assert( gamma_move(board, 4, 1, 0) == 0 );

assert( gamma_move(board, 5, 1, 16) == 0 );

assert( gamma_move(board, 6, 1, 8) == 0 );

assert( gamma_move(board, 7, 0, 12) == 0 );

assert( gamma_move(board, 8, 1, 11) == 0 );

assert( gamma_move(board, 1, 1, 9) == 0 );

assert( gamma_move(board, 2, 0, 22) == 0 );

assert( gamma_move(board, 3, 1, 17) == 0 );

assert( gamma_move(board, 4, 0, 3) == 0 );

assert( gamma_move(board, 5, 0, 8) == 1 );

assert( gamma_move(board, 6, 0, 1) == 0 );

assert( gamma_move(board, 7, 0, 22) == 0 );

assert( gamma_move(board, 8, 0, 14) == 0 );

assert( gamma_move(board, 1, 1, 3) == 0 );

assert( gamma_move(board, 2, 1, 5) == 0 );

assert( gamma_move(board, 3, 1, 4) == 0 );

assert( gamma_move(board, 4, 0, 2) == 0 );

assert( gamma_move(board, 5, 0, 5) == 1 );

assert( gamma_move(board, 6, 1, 2) == 0 );

assert( gamma_move(board, 7, 1, 20) == 0 );

assert( gamma_move(board, 8, 1, 16) == 0 );

assert( gamma_move(board, 1, 0, 6) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 4 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 4 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 4 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 4 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 6 );

assert( gamma_free_fields(board, 5) == 4 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 1 );

assert( gamma_free_fields(board, 7) == 4 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 1, 16) == 0 );

assert( gamma_move(board, 3, 0, 13) == 0 );

assert( gamma_move(board, 4, 1, 0) == 0 );

assert( gamma_move(board, 5, 1, 2) == 0 );

assert( gamma_move(board, 6, 0, 19) == 0 );

assert( gamma_move(board, 7, 1, 9) == 0 );

assert( gamma_move(board, 8, 1, 2) == 0 );

assert( gamma_move(board, 1, 1, 11) == 0 );

assert( gamma_move(board, 2, 1, 13) == 0 );

assert( gamma_move(board, 3, 1, 12) == 0 );

assert( gamma_move(board, 4, 0, 20) == 0 );

assert( gamma_move(board, 5, 0, 12) == 0 );

assert( gamma_move(board, 6, 1, 16) == 0 );

assert( gamma_move(board, 7, 1, 9) == 0 );

assert( gamma_move(board, 8, 1, 1) == 0 );

assert( gamma_move(board, 1, 1, 4) == 0 );

assert( gamma_move(board, 2, 1, 0) == 0 );

assert( gamma_move(board, 3, 1, 17) == 0 );

assert( gamma_move(board, 4, 1, 8) == 0 );

assert( gamma_move(board, 5, 1, 17) == 0 );

assert( gamma_move(board, 6, 1, 18) == 0 );

assert( gamma_move(board, 7, 1, 13) == 0 );

assert( gamma_move(board, 8, 1, 17) == 0 );

assert( gamma_move(board, 1, 0, 6) == 0 );

assert( gamma_move(board, 2, 0, 0) == 0 );

assert( gamma_move(board, 3, 1, 22) == 0 );

assert( gamma_move(board, 4, 1, 20) == 0 );

assert( gamma_move(board, 5, 0, 14) == 0 );

assert( gamma_move(board, 6, 0, 3) == 0 );

assert( gamma_move(board, 7, 1, 9) == 0 );

assert( gamma_move(board, 8, 1, 5) == 0 );

assert( gamma_move(board, 1, 0, 3) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 4 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 4 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 4 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 4 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 6 );

assert( gamma_free_fields(board, 5) == 4 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 1 );

assert( gamma_free_fields(board, 7) == 4 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 0, 4) == 0 );

assert( gamma_move(board, 3, 0, 19) == 0 );

assert( gamma_move(board, 4, 0, 15) == 0 );

assert( gamma_move(board, 5, 0, 2) == 0 );

assert( gamma_move(board, 6, 0, 11) == 1 );

assert( gamma_move(board, 7, 0, 1) == 0 );

assert( gamma_move(board, 8, 0, 22) == 0 );

assert( gamma_move(board, 1, 1, 22) == 0 );

assert( gamma_move(board, 2, 1, 20) == 0 );

assert( gamma_move(board, 3, 0, 5) == 0 );

assert( gamma_move(board, 4, 1, 6) == 0 );

assert( gamma_move(board, 5, 0, 9) == 1 );

assert( gamma_move(board, 6, 0, 1) == 0 );

assert( gamma_move(board, 7, 0, 10) == 1 );

assert( gamma_move(board, 8, 0, 3) == 0 );

assert( gamma_move(board, 1, 1, 7) == 0 );

assert( gamma_move(board, 2, 0, 15) == 0 );

assert( gamma_move(board, 3, 0, 5) == 0 );

assert( gamma_move(board, 4, 0, 21) == 0 );

assert( gamma_move(board, 5, 0, 6) == 0 );

assert( gamma_move(board, 6, 1, 2) == 0 );

assert( gamma_move(board, 7, 1, 11) == 0 );

assert( gamma_move(board, 8, 1, 0) == 0 );

assert( gamma_move(board, 1, 1, 21) == 0 );

assert( gamma_move(board, 2, 0, 11) == 0 );

assert( gamma_move(board, 3, 0, 8) == 0 );

assert( gamma_move(board, 4, 0, 12) == 0 );

assert( gamma_move(board, 5, 0, 2) == 0 );

assert( gamma_move(board, 6, 1, 19) == 0 );

assert( gamma_move(board, 7, 1, 4) == 0 );

assert( gamma_move(board, 8, 1, 7) == 0 );

assert( gamma_move(board, 1, 1, 7) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 1 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 1 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 1 );

assert( gamma_golden_move(board, 1, 1, 3) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 7 );

assert( gamma_free_fields(board, 5) == 1 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 1 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 2 );

assert( gamma_free_fields(board, 7) == 1 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 1 );

assert( gamma_move(board, 2, 0, 3) == 0 );

assert( gamma_move(board, 3, 1, 8) == 0 );

assert( gamma_move(board, 4, 0, 6) == 0 );

assert( gamma_move(board, 5, 1, 22) == 0 );

assert( gamma_move(board, 6, 1, 3) == 0 );

assert( gamma_move(board, 7, 1, 19) == 0 );

assert( gamma_move(board, 8, 1, 23) == 0 );

assert( gamma_move(board, 1, 1, 0) == 0 );

assert( gamma_move(board, 2, 1, 2) == 0 );

assert( gamma_move(board, 3, 1, 2) == 0 );

assert( gamma_move(board, 4, 0, 21) == 0 );

assert( gamma_move(board, 5, 1, 10) == 0 );

assert( gamma_move(board, 6, 0, 13) == 0 );

assert( gamma_move(board, 7, 0, 10) == 0 );

assert( gamma_move(board, 8, 1, 5) == 0 );

assert( gamma_move(board, 1, 0, 22) == 0 );

assert( gamma_move(board, 2, 1, 11) == 0 );

assert( gamma_move(board, 3, 0, 1) == 0 );

assert( gamma_move(board, 4, 1, 10) == 0 );

assert( gamma_move(board, 5, 0, 7) == 0 );

assert( gamma_move(board, 6, 0, 8) == 0 );

assert( gamma_move(board, 7, 0, 17) == 1 );

assert( gamma_move(board, 8, 1, 18) == 0 );

assert( gamma_move(board, 1, 1, 5) == 0 );

assert( gamma_move(board, 2, 0, 15) == 0 );

assert( gamma_move(board, 3, 1, 13) == 0 );

assert( gamma_move(board, 4, 0, 20) == 0 );

assert( gamma_move(board, 5, 0, 10) == 0 );

assert( gamma_move(board, 6, 1, 13) == 0 );

assert( gamma_move(board, 7, 1, 10) == 0 );

assert( gamma_move(board, 8, 1, 19) == 0 );

assert( gamma_move(board, 1, 0, 10) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 7 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 0 );

assert( gamma_move(board, 2, 1, 3) == 0 );

assert( gamma_move(board, 3, 0, 10) == 0 );

assert( gamma_move(board, 4, 1, 21) == 0 );

assert( gamma_move(board, 5, 1, 11) == 0 );

assert( gamma_move(board, 6, 0, 22) == 0 );

assert( gamma_move(board, 7, 0, 16) == 0 );

assert( gamma_move(board, 8, 1, 6) == 0 );

assert( gamma_move(board, 1, 0, 2) == 0 );

assert( gamma_move(board, 2, 1, 1) == 0 );

assert( gamma_move(board, 3, 0, 18) == 0 );

assert( gamma_move(board, 4, 1, 4) == 0 );

assert( gamma_move(board, 5, 0, 9) == 0 );

assert( gamma_move(board, 6, 0, 7) == 0 );

assert( gamma_move(board, 7, 1, 19) == 0 );

assert( gamma_move(board, 8, 0, 13) == 0 );

assert( gamma_move(board, 1, 1, 0) == 0 );

assert( gamma_move(board, 2, 1, 16) == 0 );

assert( gamma_move(board, 3, 0, 1) == 0 );

assert( gamma_move(board, 4, 0, 3) == 0 );

assert( gamma_move(board, 5, 0, 21) == 0 );

assert( gamma_move(board, 6, 0, 10) == 0 );

assert( gamma_move(board, 7, 0, 2) == 0 );

assert( gamma_move(board, 8, 1, 18) == 0 );

assert( gamma_move(board, 1, 1, 20) == 0 );

assert( gamma_move(board, 2, 1, 23) == 0 );

assert( gamma_move(board, 3, 1, 11) == 0 );

assert( gamma_move(board, 4, 1, 3) == 0 );

assert( gamma_move(board, 5, 0, 22) == 0 );

assert( gamma_move(board, 6, 1, 16) == 0 );

assert( gamma_move(board, 7, 0, 18) == 0 );

assert( gamma_move(board, 8, 1, 7) == 0 );

assert( gamma_move(board, 1, 0, 7) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 7 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 0 );

assert( gamma_golden_move(board, 1, 1, 0) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 0 );

assert( gamma_move(board, 2, 0, 21) == 0 );

assert( gamma_move(board, 3, 0, 7) == 0 );

assert( gamma_move(board, 4, 0, 1) == 0 );

assert( gamma_move(board, 5, 0, 15) == 0 );

assert( gamma_move(board, 6, 0, 5) == 0 );

assert( gamma_move(board, 7, 0, 16) == 0 );

assert( gamma_move(board, 8, 1, 13) == 0 );

assert( gamma_move(board, 1, 1, 6) == 0 );

assert( gamma_move(board, 2, 0, 16) == 0 );

assert( gamma_move(board, 3, 1, 10) == 0 );

assert( gamma_move(board, 4, 0, 9) == 0 );

assert( gamma_move(board, 5, 0, 0) == 0 );

assert( gamma_move(board, 6, 1, 13) == 0 );

assert( gamma_move(board, 7, 1, 23) == 0 );

assert( gamma_move(board, 8, 1, 14) == 0 );

assert( gamma_move(board, 1, 0, 2) == 0 );

assert( gamma_move(board, 2, 0, 9) == 0 );

assert( gamma_move(board, 3, 1, 10) == 0 );

assert( gamma_move(board, 4, 1, 9) == 0 );

assert( gamma_move(board, 5, 0, 0) == 0 );

assert( gamma_move(board, 6, 1, 21) == 0 );

assert( gamma_move(board, 7, 0, 1) == 0 );

assert( gamma_move(board, 8, 1, 5) == 0 );

assert( gamma_move(board, 1, 1, 4) == 0 );

assert( gamma_move(board, 2, 0, 5) == 0 );

assert( gamma_move(board, 3, 1, 5) == 0 );

assert( gamma_move(board, 4, 1, 12) == 0 );

assert( gamma_move(board, 5, 1, 7) == 0 );

assert( gamma_move(board, 6, 0, 16) == 0 );

assert( gamma_move(board, 7, 1, 20) == 0 );

assert( gamma_move(board, 8, 1, 4) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 0 );

assert( gamma_golden_move(board, 8, 1, 12) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 7 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 0 );





gamma_delete(board);



    return 0;

}

