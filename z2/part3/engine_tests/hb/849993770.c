#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 849993770

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 49, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 1, 32) == 0 );

assert( gamma_move(board, 2, 0, 43) == 1 );

assert( gamma_move(board, 3, 0, 2) == 1 );

assert( gamma_move(board, 4, 1, 4) == 0 );

assert( gamma_move(board, 5, 0, 3) == 1 );

assert( gamma_move(board, 6, 0, 39) == 1 );

assert( gamma_move(board, 7, 1, 20) == 0 );

assert( gamma_move(board, 8, 1, 9) == 0 );

assert( gamma_move(board, 1, 0, 24) == 1 );

assert( gamma_move(board, 2, 0, 3) == 0 );

assert( gamma_move(board, 3, 1, 32) == 0 );

assert( gamma_move(board, 4, 1, 49) == 0 );

assert( gamma_move(board, 5, 0, 43) == 0 );

assert( gamma_move(board, 6, 1, 8) == 0 );

assert( gamma_move(board, 7, 0, 27) == 1 );

assert( gamma_move(board, 8, 0, 9) == 1 );

assert( gamma_move(board, 1, 1, 23) == 0 );

assert( gamma_move(board, 2, 0, 17) == 1 );

assert( gamma_move(board, 3, 1, 20) == 0 );

assert( gamma_move(board, 4, 1, 28) == 0 );

assert( gamma_move(board, 5, 0, 31) == 1 );

assert( gamma_move(board, 6, 0, 21) == 1 );

assert( gamma_move(board, 7, 0, 20) == 1 );

assert( gamma_move(board, 8, 0, 17) == 0 );

assert( gamma_move(board, 1, 0, 3) == 0 );

assert( gamma_move(board, 2, 1, 3) == 0 );

assert( gamma_move(board, 3, 0, 25) == 1 );

assert( gamma_move(board, 4, 0, 41) == 1 );

assert( gamma_move(board, 5, 1, 27) == 0 );

assert( gamma_move(board, 6, 0, 5) == 1 );

assert( gamma_move(board, 7, 0, 41) == 0 );

assert( gamma_move(board, 8, 0, 3) == 0 );

assert( gamma_move(board, 1, 0, 38) == 1 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 2 );

assert( gamma_free_fields(board, 1) == 34 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 34 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 34 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 34 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 34 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 34 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 2 );

assert( gamma_free_fields(board, 7) == 34 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 34 );

assert( gamma_move(board, 2, 1, 14) == 0 );

assert( gamma_move(board, 3, 1, 22) == 0 );

assert( gamma_move(board, 4, 0, 48) == 1 );

assert( gamma_move(board, 5, 0, 25) == 0 );

assert( gamma_move(board, 6, 0, 2) == 0 );

assert( gamma_move(board, 7, 1, 26) == 0 );

assert( gamma_move(board, 8, 0, 10) == 1 );

assert( gamma_move(board, 1, 0, 21) == 0 );

assert( gamma_move(board, 2, 1, 20) == 0 );

assert( gamma_move(board, 3, 1, 5) == 0 );

assert( gamma_move(board, 4, 0, 32) == 1 );

assert( gamma_move(board, 5, 0, 33) == 1 );

assert( gamma_move(board, 6, 1, 40) == 0 );

assert( gamma_move(board, 7, 0, 11) == 1 );

assert( gamma_move(board, 8, 0, 10) == 0 );

assert( gamma_move(board, 1, 1, 18) == 0 );

assert( gamma_move(board, 2, 1, 39) == 0 );

assert( gamma_move(board, 3, 0, 48) == 0 );

assert( gamma_move(board, 4, 1, 1) == 0 );

assert( gamma_move(board, 5, 0, 42) == 1 );

assert( gamma_move(board, 6, 1, 2) == 0 );

assert( gamma_move(board, 7, 0, 20) == 0 );

assert( gamma_move(board, 8, 0, 22) == 1 );

assert( gamma_move(board, 1, 0, 24) == 0 );

assert( gamma_move(board, 2, 0, 30) == 1 );

assert( gamma_move(board, 3, 0, 4) == 1 );

assert( gamma_move(board, 4, 0, 26) == 1 );

assert( gamma_move(board, 5, 1, 48) == 0 );

assert( gamma_move(board, 6, 0, 19) == 1 );

assert( gamma_move(board, 7, 1, 9) == 0 );

assert( gamma_move(board, 8, 1, 2) == 0 );

assert( gamma_move(board, 1, 1, 23) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 2 );

assert( gamma_free_fields(board, 1) == 23 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 23 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 23 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert( gamma_golden_move(board, 1, 1, 19) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 1 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 3 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 23 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 3 );

assert( gamma_free_fields(board, 8) == 23 );

assert( gamma_move(board, 2, 0, 39) == 0 );

assert( gamma_move(board, 3, 1, 18) == 0 );

assert( gamma_move(board, 4, 1, 10) == 0 );

assert( gamma_move(board, 5, 1, 46) == 0 );

assert( gamma_move(board, 6, 0, 39) == 0 );

assert( gamma_move(board, 7, 1, 42) == 0 );

assert( gamma_move(board, 8, 0, 31) == 0 );

assert( gamma_move(board, 1, 0, 12) == 1 );

assert( gamma_move(board, 2, 1, 3) == 0 );

assert( gamma_move(board, 3, 0, 2) == 0 );

assert( gamma_move(board, 4, 0, 24) == 0 );

assert( gamma_move(board, 5, 1, 39) == 0 );

assert( gamma_move(board, 6, 1, 3) == 0 );

assert( gamma_move(board, 7, 0, 34) == 1 );

assert( gamma_move(board, 8, 1, 2) == 0 );

assert( gamma_move(board, 1, 1, 8) == 0 );

assert( gamma_move(board, 2, 0, 49) == 0 );

assert( gamma_move(board, 3, 1, 3) == 0 );

assert( gamma_move(board, 4, 1, 27) == 0 );

assert( gamma_move(board, 5, 1, 10) == 0 );

assert( gamma_move(board, 6, 0, 15) == 0 );

assert( gamma_move(board, 7, 0, 48) == 0 );

assert( gamma_move(board, 8, 1, 25) == 0 );

assert( gamma_move(board, 1, 0, 34) == 0 );

assert( gamma_move(board, 2, 0, 8) == 1 );

assert( gamma_move(board, 3, 0, 9) == 0 );

assert( gamma_move(board, 4, 1, 49) == 0 );

assert( gamma_move(board, 5, 1, 7) == 0 );

assert( gamma_move(board, 6, 1, 45) == 0 );

assert( gamma_move(board, 7, 0, 45) == 0 );

assert( gamma_move(board, 8, 1, 10) == 0 );

assert( gamma_move(board, 1, 1, 28) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 20 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 5 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 20 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 0 );

assert( gamma_golden_move(board, 1, 0, 34) == 1 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 3 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 20 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 3 );

assert( gamma_free_fields(board, 8) == 20 );

assert( gamma_move(board, 2, 0, 32) == 0 );

assert( gamma_move(board, 3, 1, 23) == 0 );

assert( gamma_move(board, 4, 0, 45) == 0 );

assert( gamma_move(board, 5, 1, 16) == 0 );

assert( gamma_move(board, 6, 1, 6) == 0 );

assert( gamma_move(board, 7, 1, 21) == 0 );

assert( gamma_move(board, 8, 0, 37) == 1 );

assert( gamma_move(board, 1, 0, 1) == 0 );

assert( gamma_move(board, 2, 1, 14) == 0 );

assert( gamma_move(board, 3, 1, 19) == 0 );

assert( gamma_move(board, 4, 0, 40) == 1 );

assert( gamma_move(board, 5, 1, 3) == 0 );

assert( gamma_move(board, 6, 0, 34) == 0 );

assert( gamma_move(board, 7, 1, 14) == 0 );

assert( gamma_move(board, 8, 1, 36) == 0 );

assert( gamma_move(board, 1, 0, 26) == 0 );

assert( gamma_move(board, 2, 1, 47) == 0 );

assert( gamma_move(board, 3, 1, 41) == 0 );

assert( gamma_move(board, 4, 1, 38) == 0 );

assert( gamma_move(board, 5, 1, 27) == 0 );

assert( gamma_move(board, 6, 0, 23) == 0 );

assert( gamma_move(board, 7, 0, 11) == 0 );

assert( gamma_move(board, 8, 1, 14) == 0 );

assert( gamma_move(board, 1, 1, 47) == 0 );

assert( gamma_move(board, 2, 1, 22) == 0 );

assert( gamma_move(board, 3, 1, 44) == 0 );

assert( gamma_move(board, 4, 0, 43) == 0 );

assert( gamma_move(board, 5, 1, 33) == 0 );

assert( gamma_move(board, 6, 0, 49) == 0 );

assert( gamma_move(board, 7, 1, 43) == 0 );

assert( gamma_move(board, 8, 0, 43) == 0 );

assert( gamma_move(board, 1, 0, 28) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 3 );

assert( gamma_golden_move(board, 1, 1, 38) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 5 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 18 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 18 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 18 );

assert( gamma_move(board, 2, 0, 0) == 0 );

assert( gamma_move(board, 3, 1, 26) == 0 );

assert( gamma_move(board, 4, 0, 18) == 0 );

assert( gamma_move(board, 5, 1, 8) == 0 );

assert( gamma_move(board, 6, 1, 15) == 0 );

assert( gamma_move(board, 7, 1, 0) == 0 );

assert( gamma_move(board, 8, 0, 45) == 1 );

assert( gamma_move(board, 1, 0, 33) == 0 );

assert( gamma_move(board, 2, 1, 24) == 0 );

assert( gamma_move(board, 3, 0, 14) == 1 );

assert( gamma_move(board, 4, 1, 48) == 0 );

assert( gamma_move(board, 5, 1, 36) == 0 );

assert( gamma_move(board, 6, 0, 47) == 0 );

assert( gamma_move(board, 7, 0, 6) == 1 );

assert( gamma_move(board, 8, 0, 37) == 0 );

assert( gamma_move(board, 1, 1, 43) == 0 );

assert( gamma_move(board, 2, 0, 6) == 0 );

assert( gamma_move(board, 3, 1, 38) == 0 );

assert( gamma_move(board, 4, 1, 11) == 0 );

assert( gamma_move(board, 5, 1, 26) == 0 );

assert( gamma_move(board, 6, 0, 38) == 0 );

assert( gamma_move(board, 7, 0, 14) == 0 );

assert( gamma_move(board, 8, 1, 27) == 0 );

assert( gamma_move(board, 1, 0, 37) == 0 );

assert( gamma_move(board, 2, 1, 21) == 0 );

assert( gamma_move(board, 3, 0, 13) == 1 );

assert( gamma_move(board, 4, 0, 27) == 0 );

assert( gamma_move(board, 5, 1, 17) == 0 );

assert( gamma_move(board, 6, 1, 49) == 0 );

assert( gamma_move(board, 7, 0, 11) == 0 );

assert( gamma_move(board, 8, 0, 1) == 0 );

assert( gamma_move(board, 1, 1, 38) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 2 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 5 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 1 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 2 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 0, 6) == 0 );

assert( gamma_move(board, 3, 0, 25) == 0 );

assert( gamma_move(board, 4, 0, 11) == 0 );

assert( gamma_move(board, 5, 0, 29) == 0 );

assert( gamma_move(board, 6, 1, 21) == 0 );

assert( gamma_move(board, 7, 0, 32) == 0 );

assert( gamma_move(board, 8, 0, 41) == 0 );

assert( gamma_move(board, 1, 0, 2) == 0 );

assert( gamma_move(board, 2, 1, 45) == 0 );

assert( gamma_move(board, 3, 0, 37) == 0 );

assert( gamma_move(board, 4, 1, 48) == 0 );

assert( gamma_move(board, 5, 1, 10) == 0 );

assert( gamma_move(board, 6, 0, 28) == 0 );

assert( gamma_move(board, 7, 1, 43) == 0 );

assert( gamma_move(board, 8, 1, 6) == 0 );

assert( gamma_move(board, 1, 0, 41) == 0 );

assert( gamma_move(board, 2, 1, 2) == 0 );

assert( gamma_move(board, 3, 0, 30) == 0 );

assert( gamma_move(board, 4, 0, 1) == 0 );

assert( gamma_move(board, 5, 0, 18) == 0 );

assert( gamma_move(board, 6, 1, 31) == 0 );

assert( gamma_move(board, 7, 0, 0) == 0 );

assert( gamma_move(board, 8, 1, 10) == 0 );

assert( gamma_move(board, 1, 1, 15) == 0 );

assert( gamma_move(board, 2, 0, 41) == 0 );

assert( gamma_move(board, 3, 1, 22) == 0 );

assert( gamma_move(board, 4, 0, 9) == 0 );

assert( gamma_move(board, 5, 0, 27) == 0 );

assert( gamma_move(board, 6, 0, 25) == 0 );

assert( gamma_move(board, 7, 1, 33) == 0 );

assert( gamma_move(board, 8, 1, 31) == 0 );

assert( gamma_move(board, 1, 0, 39) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 2 );

assert( gamma_golden_move(board, 1, 1, 40) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 5 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 1 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 2 );

assert( gamma_golden_move(board, 1, 1, 16) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 0, 28) == 0 );

assert( gamma_move(board, 3, 0, 0) == 0 );

assert( gamma_move(board, 4, 1, 43) == 0 );

assert( gamma_move(board, 5, 1, 47) == 0 );

assert( gamma_move(board, 6, 0, 28) == 0 );

assert( gamma_move(board, 7, 0, 24) == 0 );

assert( gamma_move(board, 8, 1, 35) == 0 );

assert( gamma_move(board, 1, 1, 24) == 0 );

assert( gamma_move(board, 2, 1, 39) == 0 );

assert( gamma_move(board, 3, 1, 18) == 0 );

assert( gamma_move(board, 4, 0, 44) == 0 );

assert( gamma_move(board, 5, 1, 15) == 0 );

assert( gamma_move(board, 6, 1, 12) == 0 );

assert( gamma_move(board, 7, 1, 49) == 0 );

assert( gamma_move(board, 8, 0, 28) == 0 );

assert( gamma_move(board, 1, 0, 30) == 0 );

assert( gamma_move(board, 2, 0, 24) == 0 );

assert( gamma_move(board, 3, 0, 1) == 1 );

assert( gamma_move(board, 4, 0, 17) == 0 );

assert( gamma_move(board, 5, 1, 20) == 0 );

assert( gamma_move(board, 6, 1, 22) == 0 );

assert( gamma_move(board, 7, 0, 29) == 0 );

assert( gamma_move(board, 8, 1, 6) == 0 );

assert( gamma_move(board, 1, 0, 49) == 0 );

assert( gamma_move(board, 2, 1, 4) == 0 );

assert( gamma_move(board, 3, 1, 29) == 0 );

assert( gamma_move(board, 4, 1, 7) == 0 );

assert( gamma_move(board, 5, 1, 44) == 0 );

assert( gamma_move(board, 6, 0, 14) == 0 );

assert( gamma_move(board, 7, 1, 46) == 0 );

assert( gamma_move(board, 8, 0, 35) == 0 );

assert( gamma_move(board, 1, 0, 32) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 2 );

assert( gamma_golden_move(board, 1, 0, 8) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 5 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 6 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 1 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 2 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 0, 31) == 0 );

assert( gamma_move(board, 3, 1, 38) == 0 );

assert( gamma_move(board, 4, 1, 24) == 0 );

assert( gamma_move(board, 5, 1, 20) == 0 );

assert( gamma_move(board, 6, 0, 22) == 0 );

assert( gamma_move(board, 7, 0, 20) == 0 );

assert( gamma_move(board, 8, 1, 35) == 0 );

assert( gamma_move(board, 1, 1, 13) == 0 );

assert( gamma_move(board, 2, 0, 28) == 0 );

assert( gamma_move(board, 3, 0, 6) == 0 );

assert( gamma_move(board, 4, 1, 47) == 0 );

assert( gamma_move(board, 5, 0, 29) == 0 );

assert( gamma_move(board, 6, 0, 26) == 0 );

assert( gamma_move(board, 7, 1, 24) == 0 );

assert( gamma_move(board, 8, 1, 23) == 0 );

assert( gamma_move(board, 1, 1, 10) == 0 );

assert( gamma_move(board, 2, 1, 1) == 0 );

assert( gamma_move(board, 3, 0, 32) == 0 );

assert( gamma_move(board, 4, 1, 17) == 0 );

assert( gamma_move(board, 5, 1, 31) == 0 );

assert( gamma_move(board, 6, 0, 15) == 0 );

assert( gamma_move(board, 7, 1, 31) == 0 );

assert( gamma_move(board, 8, 1, 37) == 0 );

assert( gamma_move(board, 1, 1, 38) == 0 );

assert( gamma_move(board, 2, 0, 45) == 0 );

assert( gamma_move(board, 3, 1, 19) == 0 );

assert( gamma_move(board, 4, 0, 49) == 0 );

assert( gamma_move(board, 5, 0, 6) == 0 );

assert( gamma_move(board, 6, 1, 42) == 0 );

assert( gamma_move(board, 7, 0, 27) == 0 );

assert( gamma_move(board, 8, 0, 40) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 2 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 5 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 6 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 1 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 2 );

assert( gamma_golden_move(board, 8, 0, 2) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 4 );





gamma_delete(board);



    return 0;

}

