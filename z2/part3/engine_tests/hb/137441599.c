#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 137441599

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 40, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 1, 31) == 0 );

assert( gamma_move(board, 2, 1, 3) == 0 );

assert( gamma_move(board, 3, 0, 24) == 1 );

assert( gamma_move(board, 4, 0, 24) == 0 );

assert( gamma_move(board, 5, 0, 6) == 1 );

assert( gamma_move(board, 6, 0, 30) == 1 );

assert( gamma_move(board, 7, 0, 30) == 0 );

assert( gamma_move(board, 8, 0, 13) == 1 );

assert( gamma_move(board, 1, 1, 32) == 0 );

assert( gamma_move(board, 2, 1, 33) == 0 );

assert( gamma_move(board, 3, 1, 31) == 0 );

assert( gamma_move(board, 4, 0, 9) == 1 );

assert( gamma_move(board, 5, 0, 17) == 1 );

assert( gamma_move(board, 6, 0, 7) == 1 );

assert( gamma_move(board, 7, 0, 31) == 1 );

assert( gamma_move(board, 8, 0, 39) == 1 );

assert( gamma_move(board, 1, 0, 12) == 1 );

assert( gamma_move(board, 2, 1, 25) == 0 );

assert( gamma_move(board, 3, 0, 12) == 0 );

assert( gamma_move(board, 4, 1, 12) == 0 );

assert( gamma_move(board, 5, 0, 28) == 1 );

assert( gamma_move(board, 6, 1, 5) == 0 );

assert( gamma_move(board, 7, 0, 3) == 1 );

assert( gamma_move(board, 8, 1, 6) == 0 );

assert( gamma_move(board, 1, 0, 8) == 1 );

assert( gamma_move(board, 2, 1, 8) == 0 );

assert( gamma_move(board, 3, 1, 11) == 0 );

assert( gamma_move(board, 4, 0, 23) == 1 );

assert( gamma_move(board, 5, 0, 1) == 1 );

assert( gamma_move(board, 6, 1, 29) == 0 );

assert( gamma_move(board, 7, 1, 12) == 0 );

assert( gamma_move(board, 8, 0, 21) == 1 );

assert( gamma_move(board, 1, 0, 8) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 2 );

assert( gamma_free_fields(board, 1) == 24 );

assert( gamma_golden_move(board, 1, 1, 20) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 0 );

assert( gamma_free_fields(board, 2) == 24 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 24 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 2 );

assert( gamma_free_fields(board, 4) == 24 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 7 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 2 );

assert( gamma_free_fields(board, 6) == 24 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 2 );

assert( gamma_free_fields(board, 7) == 24 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 3 );

assert( gamma_free_fields(board, 8) == 24 );

assert( gamma_move(board, 2, 1, 12) == 0 );

assert( gamma_move(board, 3, 0, 39) == 0 );

assert( gamma_move(board, 4, 0, 12) == 0 );

assert( gamma_move(board, 5, 0, 39) == 0 );

assert( gamma_move(board, 6, 1, 21) == 0 );

assert( gamma_move(board, 7, 0, 5) == 1 );

assert( gamma_move(board, 8, 1, 0) == 0 );

assert( gamma_move(board, 1, 1, 35) == 0 );

assert( gamma_move(board, 2, 0, 11) == 1 );

assert( gamma_move(board, 3, 1, 25) == 0 );

assert( gamma_move(board, 4, 0, 34) == 1 );

assert( gamma_move(board, 5, 0, 12) == 0 );

assert( gamma_move(board, 6, 1, 30) == 0 );

assert( gamma_move(board, 7, 1, 40) == 0 );

assert( gamma_move(board, 8, 0, 34) == 0 );

assert( gamma_move(board, 1, 1, 31) == 0 );

assert( gamma_move(board, 2, 0, 23) == 0 );

assert( gamma_move(board, 3, 0, 40) == 0 );

assert( gamma_move(board, 4, 1, 0) == 0 );

assert( gamma_move(board, 5, 1, 19) == 0 );

assert( gamma_move(board, 6, 0, 27) == 1 );

assert( gamma_move(board, 7, 0, 37) == 1 );

assert( gamma_move(board, 8, 0, 29) == 1 );

assert( gamma_move(board, 1, 1, 16) == 0 );

assert( gamma_move(board, 2, 0, 35) == 1 );

assert( gamma_move(board, 3, 1, 21) == 0 );

assert( gamma_move(board, 4, 0, 38) == 1 );

assert( gamma_move(board, 5, 1, 17) == 0 );

assert( gamma_move(board, 6, 0, 14) == 1 );

assert( gamma_move(board, 7, 0, 24) == 0 );

assert( gamma_move(board, 8, 0, 13) == 0 );

assert( gamma_move(board, 1, 1, 15) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 2 );

assert( gamma_free_fields(board, 1) == 15 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 15 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 15 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 4 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 4 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 0, 6) == 0 );

assert( gamma_move(board, 3, 0, 10) == 1 );

assert( gamma_move(board, 4, 1, 26) == 0 );

assert( gamma_move(board, 5, 1, 36) == 0 );

assert( gamma_move(board, 6, 1, 40) == 0 );

assert( gamma_move(board, 7, 0, 11) == 0 );

assert( gamma_move(board, 8, 0, 23) == 0 );

assert( gamma_move(board, 1, 1, 15) == 0 );

assert( gamma_move(board, 2, 1, 14) == 0 );

assert( gamma_move(board, 3, 1, 0) == 0 );

assert( gamma_move(board, 4, 1, 30) == 0 );

assert( gamma_move(board, 5, 1, 13) == 0 );

assert( gamma_move(board, 6, 1, 36) == 0 );

assert( gamma_move(board, 7, 1, 9) == 0 );

assert( gamma_move(board, 8, 1, 28) == 0 );

assert( gamma_move(board, 1, 0, 30) == 0 );

assert( gamma_move(board, 2, 1, 22) == 0 );

assert( gamma_move(board, 3, 1, 25) == 0 );

assert( gamma_move(board, 4, 0, 35) == 0 );

assert( gamma_move(board, 5, 0, 9) == 0 );

assert( gamma_move(board, 6, 1, 28) == 0 );

assert( gamma_move(board, 7, 1, 25) == 0 );

assert( gamma_move(board, 8, 0, 17) == 0 );

assert( gamma_move(board, 1, 1, 11) == 0 );

assert( gamma_move(board, 2, 1, 26) == 0 );

assert( gamma_move(board, 3, 1, 33) == 0 );

assert( gamma_move(board, 4, 0, 10) == 0 );

assert( gamma_move(board, 5, 0, 1) == 0 );

assert( gamma_move(board, 6, 1, 28) == 0 );

assert( gamma_move(board, 7, 0, 35) == 0 );

assert( gamma_move(board, 8, 1, 11) == 0 );

assert( gamma_move(board, 1, 1, 13) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 2 );

assert( gamma_free_fields(board, 1) == 14 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 14 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 14 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 4 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 4 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_golden_move(board, 1, 0, 7) == 1 );

assert( gamma_move(board, 2, 1, 20) == 0 );

assert( gamma_move(board, 3, 0, 12) == 0 );

assert( gamma_move(board, 4, 0, 16) == 0 );

assert( gamma_move(board, 5, 1, 38) == 0 );

assert( gamma_move(board, 6, 1, 17) == 0 );

assert( gamma_move(board, 7, 0, 21) == 0 );

assert( gamma_move(board, 8, 0, 36) == 0 );

assert( gamma_move(board, 1, 0, 39) == 0 );

assert( gamma_move(board, 2, 0, 31) == 0 );

assert( gamma_move(board, 3, 1, 0) == 0 );

assert( gamma_move(board, 4, 1, 38) == 0 );

assert( gamma_move(board, 5, 0, 6) == 0 );

assert( gamma_move(board, 6, 1, 2) == 0 );

assert( gamma_move(board, 7, 0, 28) == 0 );

assert( gamma_move(board, 8, 1, 1) == 0 );

assert( gamma_move(board, 1, 1, 24) == 0 );

assert( gamma_move(board, 2, 0, 8) == 0 );

assert( gamma_move(board, 3, 0, 30) == 0 );

assert( gamma_move(board, 4, 1, 16) == 0 );

assert( gamma_move(board, 5, 1, 13) == 0 );

assert( gamma_move(board, 6, 0, 19) == 1 );

assert( gamma_move(board, 7, 0, 24) == 0 );

assert( gamma_move(board, 8, 1, 23) == 0 );

assert( gamma_move(board, 1, 0, 16) == 1 );

assert( gamma_move(board, 2, 0, 36) == 1 );

assert( gamma_move(board, 3, 0, 34) == 0 );

assert( gamma_move(board, 4, 1, 40) == 0 );

assert( gamma_move(board, 5, 0, 22) == 0 );

assert( gamma_move(board, 6, 0, 4) == 0 );

assert( gamma_move(board, 7, 0, 24) == 0 );

assert( gamma_move(board, 8, 1, 12) == 0 );

assert( gamma_move(board, 1, 0, 10) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 11 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 11 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 11 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert( gamma_golden_move(board, 1, 0, 5) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 40) == 0 );

assert( gamma_move(board, 3, 1, 20) == 0 );

assert( gamma_move(board, 4, 0, 10) == 0 );

assert( gamma_move(board, 5, 0, 29) == 0 );

assert( gamma_move(board, 6, 0, 28) == 0 );

assert( gamma_move(board, 7, 0, 23) == 0 );

assert( gamma_move(board, 8, 0, 25) == 0 );

assert( gamma_move(board, 1, 0, 10) == 0 );

assert( gamma_move(board, 2, 0, 32) == 1 );

assert( gamma_move(board, 3, 0, 31) == 0 );

assert( gamma_move(board, 4, 0, 29) == 0 );

assert( gamma_move(board, 5, 1, 4) == 0 );

assert( gamma_move(board, 6, 1, 19) == 0 );

assert( gamma_move(board, 7, 1, 4) == 0 );

assert( gamma_move(board, 8, 1, 39) == 0 );

assert( gamma_move(board, 1, 1, 31) == 0 );

assert( gamma_move(board, 2, 1, 26) == 0 );

assert( gamma_move(board, 3, 1, 21) == 0 );

assert( gamma_move(board, 4, 1, 12) == 0 );

assert( gamma_move(board, 5, 0, 7) == 0 );

assert( gamma_move(board, 6, 1, 16) == 0 );

assert( gamma_move(board, 7, 1, 12) == 0 );

assert( gamma_move(board, 8, 1, 26) == 0 );

assert( gamma_move(board, 1, 1, 24) == 0 );

assert( gamma_move(board, 2, 1, 39) == 0 );

assert( gamma_move(board, 3, 1, 8) == 0 );

assert( gamma_move(board, 4, 1, 28) == 0 );

assert( gamma_move(board, 5, 0, 40) == 0 );

assert( gamma_move(board, 6, 0, 23) == 0 );

assert( gamma_move(board, 7, 0, 4) == 1 );

assert( gamma_move(board, 8, 1, 21) == 0 );

assert( gamma_move(board, 1, 0, 32) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 9 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 9 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 9 );

assert( gamma_golden_move(board, 1, 1, 23) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert( gamma_golden_move(board, 1, 0, 35) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 9 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 18) == 0 );

assert( gamma_move(board, 3, 0, 4) == 0 );

assert( gamma_move(board, 4, 0, 39) == 0 );

assert( gamma_move(board, 5, 0, 4) == 0 );

assert( gamma_move(board, 6, 0, 34) == 0 );

assert( gamma_move(board, 7, 0, 0) == 1 );

assert( gamma_move(board, 8, 0, 2) == 0 );

assert( gamma_move(board, 1, 1, 36) == 0 );

assert( gamma_move(board, 2, 0, 40) == 0 );

assert( gamma_move(board, 3, 1, 31) == 0 );

assert( gamma_move(board, 4, 1, 9) == 0 );

assert( gamma_move(board, 5, 0, 29) == 0 );

assert( gamma_move(board, 6, 0, 0) == 0 );

assert( gamma_move(board, 7, 1, 14) == 0 );

assert( gamma_move(board, 8, 0, 19) == 0 );

assert( gamma_move(board, 1, 0, 24) == 0 );

assert( gamma_move(board, 2, 1, 11) == 0 );

assert( gamma_move(board, 3, 0, 32) == 0 );

assert( gamma_move(board, 4, 1, 27) == 0 );

assert( gamma_move(board, 5, 1, 23) == 0 );

assert( gamma_move(board, 6, 0, 18) == 1 );

assert( gamma_move(board, 7, 1, 34) == 0 );

assert( gamma_move(board, 8, 1, 10) == 0 );

assert( gamma_move(board, 1, 0, 19) == 0 );

assert( gamma_move(board, 2, 1, 14) == 0 );

assert( gamma_move(board, 3, 1, 10) == 0 );

assert( gamma_move(board, 4, 0, 29) == 0 );

assert( gamma_move(board, 5, 1, 28) == 0 );

assert( gamma_move(board, 6, 0, 4) == 0 );

assert( gamma_move(board, 7, 0, 10) == 0 );

assert( gamma_move(board, 8, 0, 23) == 0 );

assert( gamma_move(board, 1, 1, 23) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 7 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 7 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 7 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 1 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 5 );

assert( gamma_free_fields(board, 6) == 3 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 6 );

assert( gamma_free_fields(board, 7) == 1 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 11) == 0 );

assert( gamma_move(board, 3, 0, 8) == 0 );

assert( gamma_move(board, 4, 0, 37) == 0 );

assert( gamma_move(board, 5, 0, 34) == 0 );

assert( gamma_move(board, 6, 0, 31) == 0 );

assert( gamma_move(board, 7, 1, 16) == 0 );

assert( gamma_move(board, 8, 1, 39) == 0 );

assert( gamma_move(board, 1, 1, 20) == 0 );

assert( gamma_move(board, 2, 0, 4) == 0 );

assert( gamma_move(board, 3, 1, 25) == 0 );

assert( gamma_move(board, 4, 1, 23) == 0 );

assert( gamma_move(board, 5, 0, 35) == 0 );

assert( gamma_move(board, 6, 0, 5) == 0 );

assert( gamma_move(board, 7, 0, 16) == 0 );

assert( gamma_move(board, 8, 1, 25) == 0 );

assert( gamma_move(board, 1, 1, 0) == 0 );

assert( gamma_move(board, 2, 1, 1) == 0 );

assert( gamma_move(board, 3, 0, 11) == 0 );

assert( gamma_move(board, 4, 1, 0) == 0 );

assert( gamma_move(board, 5, 1, 13) == 0 );

assert( gamma_move(board, 6, 0, 8) == 0 );

assert( gamma_move(board, 7, 0, 35) == 0 );

assert( gamma_move(board, 8, 0, 33) == 0 );

assert( gamma_move(board, 1, 0, 39) == 0 );

assert( gamma_move(board, 2, 1, 35) == 0 );

assert( gamma_move(board, 3, 1, 24) == 0 );

assert( gamma_move(board, 4, 0, 4) == 0 );

assert( gamma_move(board, 5, 1, 23) == 0 );

assert( gamma_move(board, 6, 1, 17) == 0 );

assert( gamma_move(board, 7, 0, 15) == 0 );

assert( gamma_move(board, 8, 1, 15) == 0 );

assert( gamma_move(board, 1, 0, 27) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 7 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 7 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 7 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 1 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 5 );

assert( gamma_free_fields(board, 6) == 3 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 6 );

assert( gamma_free_fields(board, 7) == 1 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 0, 19) == 0 );

assert( gamma_move(board, 3, 0, 6) == 0 );

assert( gamma_move(board, 4, 1, 16) == 0 );

assert( gamma_move(board, 5, 1, 25) == 0 );

assert( gamma_move(board, 6, 0, 1) == 0 );

assert( gamma_move(board, 7, 1, 24) == 0 );

assert( gamma_move(board, 8, 1, 29) == 0 );

assert( gamma_move(board, 1, 1, 32) == 0 );

assert( gamma_move(board, 2, 0, 3) == 0 );

assert( gamma_move(board, 3, 1, 27) == 0 );

assert( gamma_move(board, 4, 1, 22) == 0 );

assert( gamma_move(board, 5, 1, 25) == 0 );

assert( gamma_move(board, 6, 1, 6) == 0 );

assert( gamma_move(board, 7, 1, 0) == 0 );

assert( gamma_move(board, 8, 1, 30) == 0 );

assert( gamma_move(board, 1, 0, 22) == 1 );

assert( gamma_move(board, 2, 1, 31) == 0 );

assert( gamma_move(board, 3, 1, 21) == 0 );

assert( gamma_move(board, 4, 1, 2) == 0 );

assert( gamma_move(board, 5, 1, 37) == 0 );

assert( gamma_move(board, 6, 1, 17) == 0 );

assert( gamma_move(board, 7, 1, 13) == 0 );

assert( gamma_move(board, 8, 1, 37) == 0 );

assert( gamma_move(board, 1, 1, 28) == 0 );

assert( gamma_move(board, 2, 0, 11) == 0 );

assert( gamma_move(board, 3, 0, 7) == 0 );

assert( gamma_move(board, 4, 0, 20) == 0 );

assert( gamma_move(board, 5, 0, 39) == 0 );

assert( gamma_move(board, 6, 1, 23) == 0 );

assert( gamma_move(board, 7, 0, 20) == 0 );

assert( gamma_move(board, 8, 1, 38) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 1 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 6 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 6 );

assert( gamma_golden_move(board, 8, 0, 39) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 1 );

assert( gamma_golden_move(board, 8, 1, 9) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 1 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 5 );

assert( gamma_free_fields(board, 6) == 3 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 6 );

assert( gamma_free_fields(board, 7) == 1 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 1 );





gamma_delete(board);



    return 0;

}

