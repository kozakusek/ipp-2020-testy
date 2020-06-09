#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 385290814

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 64, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 1, 52) == 0 );

assert( gamma_move(board, 2, 1, 48) == 0 );

assert( gamma_move(board, 3, 0, 59) == 1 );

assert( gamma_move(board, 4, 1, 27) == 0 );

assert( gamma_move(board, 5, 0, 58) == 1 );

assert( gamma_move(board, 6, 1, 46) == 0 );

assert( gamma_move(board, 7, 0, 52) == 1 );

assert( gamma_move(board, 8, 0, 13) == 1 );

assert( gamma_move(board, 1, 1, 61) == 0 );

assert( gamma_move(board, 2, 0, 35) == 1 );

assert( gamma_move(board, 3, 0, 15) == 1 );

assert( gamma_move(board, 4, 1, 17) == 0 );

assert( gamma_move(board, 5, 1, 48) == 0 );

assert( gamma_move(board, 6, 1, 8) == 0 );

assert( gamma_move(board, 7, 0, 16) == 1 );

assert( gamma_move(board, 8, 1, 64) == 0 );

assert( gamma_move(board, 1, 1, 40) == 0 );

assert( gamma_move(board, 2, 0, 13) == 0 );

assert( gamma_move(board, 3, 1, 17) == 0 );

assert( gamma_move(board, 4, 0, 39) == 1 );

assert( gamma_move(board, 5, 0, 52) == 0 );

assert( gamma_move(board, 6, 1, 25) == 0 );

assert( gamma_move(board, 7, 0, 59) == 0 );

assert( gamma_move(board, 8, 1, 53) == 0 );

assert( gamma_move(board, 1, 0, 27) == 1 );

assert( gamma_move(board, 2, 0, 59) == 0 );

assert( gamma_move(board, 3, 0, 62) == 1 );

assert( gamma_move(board, 4, 1, 16) == 0 );

assert( gamma_move(board, 5, 0, 9) == 1 );

assert( gamma_move(board, 6, 0, 47) == 1 );

assert( gamma_move(board, 7, 1, 49) == 0 );

assert( gamma_move(board, 8, 0, 8) == 1 );

assert( gamma_move(board, 1, 0, 47) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 1 );

assert( gamma_free_fields(board, 1) == 51 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 1 );

assert( gamma_free_fields(board, 2) == 51 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 51 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 1 );

assert( gamma_free_fields(board, 4) == 51 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 51 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 1 );

assert( gamma_free_fields(board, 6) == 51 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 2 );

assert( gamma_free_fields(board, 7) == 51 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 51 );

assert( gamma_move(board, 2, 0, 52) == 0 );

assert( gamma_move(board, 3, 1, 41) == 0 );

assert( gamma_move(board, 4, 0, 21) == 1 );

assert( gamma_move(board, 5, 1, 27) == 0 );

assert( gamma_move(board, 6, 0, 50) == 1 );

assert( gamma_move(board, 7, 0, 51) == 1 );

assert( gamma_move(board, 8, 1, 55) == 0 );

assert( gamma_move(board, 1, 0, 60) == 1 );

assert( gamma_move(board, 2, 1, 6) == 0 );

assert( gamma_move(board, 3, 1, 19) == 0 );

assert( gamma_move(board, 4, 1, 32) == 0 );

assert( gamma_move(board, 5, 0, 52) == 0 );

assert( gamma_move(board, 6, 1, 45) == 0 );

assert( gamma_move(board, 7, 0, 37) == 1 );

assert( gamma_move(board, 8, 0, 57) == 1 );

assert( gamma_move(board, 1, 0, 14) == 1 );

assert( gamma_move(board, 2, 0, 43) == 1 );

assert( gamma_move(board, 3, 0, 18) == 1 );

assert( gamma_move(board, 4, 0, 19) == 1 );

assert( gamma_move(board, 5, 0, 54) == 1 );

assert( gamma_move(board, 6, 0, 24) == 1 );

assert( gamma_move(board, 7, 1, 61) == 0 );

assert( gamma_move(board, 8, 0, 36) == 1 );

assert( gamma_move(board, 1, 0, 18) == 0 );

assert( gamma_move(board, 2, 0, 25) == 1 );

assert( gamma_move(board, 3, 0, 58) == 0 );

assert( gamma_move(board, 4, 0, 11) == 1 );

assert( gamma_move(board, 5, 0, 39) == 0 );

assert( gamma_move(board, 6, 1, 54) == 0 );

assert( gamma_move(board, 7, 1, 4) == 0 );

assert( gamma_move(board, 8, 0, 63) == 0 );

assert( gamma_move(board, 1, 0, 28) == 1 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 35 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 35 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 6 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 3 );

assert( gamma_free_fields(board, 5) == 35 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 35 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 35 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 3 );

assert( gamma_move(board, 2, 1, 36) == 0 );

assert( gamma_move(board, 3, 0, 13) == 0 );

assert( gamma_move(board, 4, 0, 50) == 0 );

assert( gamma_move(board, 5, 0, 7) == 1 );

assert( gamma_move(board, 6, 0, 34) == 1 );

assert( gamma_move(board, 7, 0, 30) == 1 );

assert( gamma_move(board, 8, 0, 1) == 0 );

assert( gamma_move(board, 1, 1, 25) == 0 );

assert( gamma_move(board, 2, 0, 41) == 1 );

assert( gamma_move(board, 3, 0, 10) == 0 );

assert( gamma_move(board, 4, 1, 32) == 0 );

assert( gamma_move(board, 5, 0, 18) == 0 );

assert( gamma_move(board, 6, 0, 1) == 0 );

assert( gamma_move(board, 7, 1, 30) == 0 );

assert( gamma_move(board, 8, 0, 32) == 0 );

assert( gamma_move(board, 1, 0, 27) == 0 );

assert( gamma_move(board, 2, 1, 38) == 0 );

assert( gamma_move(board, 3, 0, 9) == 0 );

assert( gamma_move(board, 4, 1, 1) == 0 );

assert( gamma_move(board, 5, 0, 32) == 0 );

assert( gamma_move(board, 6, 0, 56) == 0 );

assert( gamma_move(board, 7, 0, 41) == 0 );

assert( gamma_move(board, 8, 1, 35) == 0 );

assert( gamma_move(board, 1, 1, 17) == 0 );

assert( gamma_move(board, 2, 1, 64) == 0 );

assert( gamma_move(board, 3, 1, 50) == 0 );

assert( gamma_move(board, 4, 1, 50) == 0 );

assert( gamma_move(board, 5, 0, 20) == 0 );

assert( gamma_move(board, 6, 0, 28) == 0 );

assert( gamma_move(board, 7, 1, 49) == 0 );

assert( gamma_move(board, 8, 0, 18) == 0 );

assert( gamma_move(board, 1, 0, 46) == 1 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 4 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 4 );

assert( gamma_golden_move(board, 1, 0, 14) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 6 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 4 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 42) == 0 );

assert( gamma_move(board, 3, 1, 7) == 0 );

assert( gamma_move(board, 4, 0, 3) == 0 );

assert( gamma_move(board, 5, 1, 18) == 0 );

assert( gamma_move(board, 6, 0, 47) == 0 );

assert( gamma_move(board, 7, 1, 43) == 0 );

assert( gamma_move(board, 8, 0, 26) == 0 );

assert( gamma_move(board, 1, 0, 10) == 0 );

assert( gamma_move(board, 2, 1, 57) == 0 );

assert( gamma_move(board, 3, 1, 44) == 0 );

assert( gamma_move(board, 4, 0, 0) == 0 );

assert( gamma_move(board, 5, 1, 42) == 0 );

assert( gamma_move(board, 6, 0, 35) == 0 );

assert( gamma_move(board, 7, 0, 20) == 0 );

assert( gamma_move(board, 8, 0, 25) == 0 );

assert( gamma_move(board, 1, 1, 61) == 0 );

assert( gamma_move(board, 2, 1, 31) == 0 );

assert( gamma_move(board, 3, 1, 29) == 0 );

assert( gamma_move(board, 4, 0, 43) == 0 );

assert( gamma_move(board, 5, 1, 5) == 0 );

assert( gamma_move(board, 6, 0, 45) == 0 );

assert( gamma_move(board, 7, 0, 58) == 0 );

assert( gamma_move(board, 8, 1, 13) == 0 );

assert( gamma_move(board, 1, 0, 37) == 0 );

assert( gamma_move(board, 2, 1, 19) == 0 );

assert( gamma_move(board, 3, 0, 54) == 0 );

assert( gamma_move(board, 4, 0, 10) == 1 );

assert( gamma_move(board, 5, 1, 53) == 0 );

assert( gamma_move(board, 6, 0, 57) == 0 );

assert( gamma_move(board, 7, 0, 38) == 1 );

assert( gamma_move(board, 8, 0, 52) == 0 );

assert( gamma_move(board, 1, 0, 64) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 4 );

assert( gamma_golden_move(board, 1, 0, 46) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 4 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 4 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert( gamma_golden_move(board, 1, 1, 10) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 6 );

assert( gamma_free_fields(board, 7) == 4 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 24) == 0 );

assert( gamma_move(board, 3, 1, 61) == 0 );

assert( gamma_move(board, 4, 0, 53) == 0 );

assert( gamma_move(board, 5, 1, 38) == 0 );

assert( gamma_move(board, 6, 1, 32) == 0 );

assert( gamma_move(board, 7, 0, 44) == 0 );

assert( gamma_move(board, 8, 0, 60) == 0 );

assert( gamma_move(board, 1, 1, 19) == 0 );

assert( gamma_move(board, 2, 0, 63) == 0 );

assert( gamma_move(board, 3, 1, 46) == 0 );

assert( gamma_move(board, 4, 1, 27) == 0 );

assert( gamma_move(board, 5, 0, 49) == 0 );

assert( gamma_move(board, 6, 1, 28) == 0 );

assert( gamma_move(board, 7, 1, 55) == 0 );

assert( gamma_move(board, 8, 1, 4) == 0 );

assert( gamma_move(board, 1, 0, 39) == 0 );

assert( gamma_move(board, 2, 1, 9) == 0 );

assert( gamma_move(board, 3, 0, 53) == 0 );

assert( gamma_move(board, 4, 0, 19) == 0 );

assert( gamma_move(board, 5, 1, 63) == 0 );

assert( gamma_move(board, 6, 0, 24) == 0 );

assert( gamma_move(board, 7, 1, 9) == 0 );

assert( gamma_move(board, 8, 0, 37) == 0 );

assert( gamma_move(board, 1, 0, 29) == 1 );

assert( gamma_move(board, 2, 0, 47) == 0 );

assert( gamma_move(board, 3, 0, 9) == 0 );

assert( gamma_move(board, 4, 0, 2) == 0 );

assert( gamma_move(board, 5, 0, 10) == 0 );

assert( gamma_move(board, 6, 0, 18) == 0 );

assert( gamma_move(board, 7, 0, 34) == 0 );

assert( gamma_move(board, 8, 1, 36) == 0 );

assert( gamma_move(board, 1, 0, 63) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 6 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 4 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 4 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 6 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 49) == 0 );

assert( gamma_move(board, 3, 1, 6) == 0 );

assert( gamma_move(board, 4, 0, 14) == 0 );

assert( gamma_move(board, 5, 0, 49) == 0 );

assert( gamma_move(board, 6, 1, 32) == 0 );

assert( gamma_move(board, 7, 1, 20) == 0 );

assert( gamma_move(board, 8, 0, 57) == 0 );

assert( gamma_move(board, 1, 0, 56) == 0 );

assert( gamma_move(board, 2, 0, 40) == 1 );

assert( gamma_move(board, 3, 1, 34) == 0 );

assert( gamma_move(board, 4, 1, 8) == 0 );

assert( gamma_move(board, 5, 1, 51) == 0 );

assert( gamma_move(board, 6, 1, 58) == 0 );

assert( gamma_move(board, 7, 0, 39) == 0 );

assert( gamma_move(board, 8, 1, 9) == 0 );

assert( gamma_move(board, 1, 1, 0) == 0 );

assert( gamma_move(board, 2, 0, 10) == 0 );

assert( gamma_move(board, 3, 1, 38) == 0 );

assert( gamma_move(board, 4, 0, 57) == 0 );

assert( gamma_move(board, 5, 1, 27) == 0 );

assert( gamma_move(board, 6, 0, 10) == 0 );

assert( gamma_move(board, 7, 0, 6) == 0 );

assert( gamma_move(board, 8, 1, 15) == 0 );

assert( gamma_move(board, 1, 1, 13) == 0 );

assert( gamma_move(board, 2, 1, 54) == 0 );

assert( gamma_move(board, 3, 1, 20) == 0 );

assert( gamma_move(board, 4, 0, 34) == 0 );

assert( gamma_move(board, 5, 1, 17) == 0 );

assert( gamma_move(board, 6, 1, 48) == 0 );

assert( gamma_move(board, 7, 0, 15) == 0 );

assert( gamma_move(board, 8, 1, 8) == 0 );

assert( gamma_move(board, 1, 0, 24) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 6 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 5 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert( gamma_golden_move(board, 1, 1, 29) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 6 );

assert( gamma_free_fields(board, 7) == 3 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 0, 7) == 0 );

assert( gamma_move(board, 3, 0, 25) == 0 );

assert( gamma_move(board, 4, 0, 51) == 0 );

assert( gamma_move(board, 5, 1, 62) == 0 );

assert( gamma_move(board, 6, 0, 9) == 0 );

assert( gamma_move(board, 7, 0, 17) == 1 );

assert( gamma_move(board, 8, 0, 63) == 0 );

assert( gamma_move(board, 1, 1, 59) == 0 );

assert( gamma_move(board, 2, 1, 45) == 0 );

assert( gamma_move(board, 3, 1, 0) == 0 );

assert( gamma_move(board, 4, 0, 51) == 0 );

assert( gamma_move(board, 5, 1, 14) == 0 );

assert( gamma_move(board, 6, 1, 8) == 0 );

assert( gamma_move(board, 7, 1, 51) == 0 );

assert( gamma_move(board, 8, 0, 43) == 0 );

assert( gamma_move(board, 1, 0, 43) == 0 );

assert( gamma_move(board, 2, 1, 17) == 0 );

assert( gamma_move(board, 3, 1, 10) == 0 );

assert( gamma_move(board, 4, 1, 21) == 0 );

assert( gamma_move(board, 5, 0, 62) == 0 );

assert( gamma_move(board, 6, 1, 30) == 0 );

assert( gamma_move(board, 7, 0, 52) == 0 );

assert( gamma_move(board, 8, 1, 49) == 0 );

assert( gamma_move(board, 1, 0, 10) == 0 );

assert( gamma_move(board, 2, 1, 48) == 0 );

assert( gamma_move(board, 3, 0, 56) == 0 );

assert( gamma_move(board, 4, 0, 9) == 0 );

assert( gamma_move(board, 5, 1, 64) == 0 );

assert( gamma_move(board, 6, 0, 34) == 0 );

assert( gamma_move(board, 7, 1, 2) == 0 );

assert( gamma_move(board, 8, 1, 61) == 0 );

assert( gamma_move(board, 1, 1, 59) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 6 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 5 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert( gamma_golden_move(board, 1, 0, 32) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 7 );

assert( gamma_free_fields(board, 7) == 2 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 2 );

assert( gamma_move(board, 2, 1, 30) == 0 );

assert( gamma_move(board, 3, 1, 51) == 0 );

assert( gamma_move(board, 4, 0, 15) == 0 );

assert( gamma_move(board, 5, 0, 62) == 0 );

assert( gamma_move(board, 6, 1, 17) == 0 );

assert( gamma_move(board, 7, 1, 24) == 0 );

assert( gamma_move(board, 8, 0, 39) == 0 );

assert( gamma_move(board, 1, 0, 64) == 0 );

assert( gamma_move(board, 2, 1, 48) == 0 );

assert( gamma_move(board, 3, 1, 4) == 0 );

assert( gamma_move(board, 4, 0, 32) == 0 );

assert( gamma_move(board, 5, 1, 10) == 0 );

assert( gamma_move(board, 6, 0, 18) == 0 );

assert( gamma_move(board, 7, 0, 30) == 0 );

assert( gamma_move(board, 8, 0, 42) == 0 );

assert( gamma_move(board, 1, 1, 57) == 0 );

assert( gamma_move(board, 2, 0, 59) == 0 );

assert( gamma_move(board, 3, 0, 64) == 0 );

assert( gamma_move(board, 4, 0, 1) == 0 );

assert( gamma_move(board, 5, 0, 0) == 0 );

assert( gamma_move(board, 6, 1, 6) == 0 );

assert( gamma_move(board, 7, 0, 31) == 1 );

assert( gamma_move(board, 8, 1, 24) == 0 );

assert( gamma_move(board, 1, 1, 25) == 0 );

assert( gamma_move(board, 2, 1, 29) == 0 );

assert( gamma_move(board, 3, 0, 21) == 0 );

assert( gamma_move(board, 4, 1, 32) == 0 );

assert( gamma_move(board, 5, 1, 32) == 0 );

assert( gamma_move(board, 6, 0, 15) == 0 );

assert( gamma_move(board, 7, 0, 45) == 0 );

assert( gamma_move(board, 8, 0, 20) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 6 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 5 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert( gamma_golden_move(board, 8, 0, 35) == 1 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 8 );

assert( gamma_free_fields(board, 7) == 2 );

assert( gamma_golden_move(board, 8, 1, 46) == 0 );

assert(gamma_golden_possible(board, 8) == 0);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 2 );





gamma_delete(board);



    return 0;

}

