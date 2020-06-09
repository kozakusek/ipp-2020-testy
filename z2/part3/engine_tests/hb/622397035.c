#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 622397035

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 55, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 0, 0) == 1 );

assert( gamma_move(board, 2, 1, 21) == 0 );

assert( gamma_move(board, 3, 1, 53) == 0 );

assert( gamma_move(board, 4, 0, 52) == 1 );

assert( gamma_move(board, 5, 1, 17) == 0 );

assert( gamma_move(board, 6, 0, 20) == 1 );

assert( gamma_move(board, 7, 1, 14) == 0 );

assert( gamma_move(board, 8, 1, 45) == 0 );

assert( gamma_move(board, 1, 0, 41) == 1 );

assert( gamma_move(board, 2, 0, 30) == 1 );

assert( gamma_move(board, 3, 0, 46) == 1 );

assert( gamma_move(board, 4, 0, 35) == 1 );

assert( gamma_move(board, 5, 1, 26) == 0 );

assert( gamma_move(board, 6, 1, 33) == 0 );

assert( gamma_move(board, 7, 1, 23) == 0 );

assert( gamma_move(board, 8, 1, 34) == 0 );

assert( gamma_move(board, 1, 0, 9) == 1 );

assert( gamma_move(board, 2, 1, 20) == 0 );

assert( gamma_move(board, 3, 1, 18) == 0 );

assert( gamma_move(board, 4, 1, 32) == 0 );

assert( gamma_move(board, 5, 0, 7) == 1 );

assert( gamma_move(board, 6, 0, 47) == 1 );

assert( gamma_move(board, 7, 0, 34) == 1 );

assert( gamma_move(board, 8, 0, 35) == 0 );

assert( gamma_move(board, 1, 1, 47) == 0 );

assert( gamma_move(board, 2, 0, 16) == 1 );

assert( gamma_move(board, 3, 0, 54) == 1 );

assert( gamma_move(board, 4, 1, 16) == 0 );

assert( gamma_move(board, 5, 0, 18) == 1 );

assert( gamma_move(board, 6, 1, 10) == 0 );

assert( gamma_move(board, 7, 0, 18) == 0 );

assert( gamma_move(board, 8, 1, 27) == 0 );

assert( gamma_move(board, 1, 0, 26) == 1 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 7 );

assert( gamma_golden_move(board, 1, 0, 19) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 40 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 40 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 2 );

assert( gamma_free_fields(board, 4) == 40 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 40 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 2 );

assert( gamma_free_fields(board, 6) == 40 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 1 );

assert( gamma_free_fields(board, 7) == 40 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 0 );

assert( gamma_free_fields(board, 8) == 40 );

assert( gamma_move(board, 2, 0, 45) == 1 );

assert( gamma_move(board, 3, 1, 12) == 0 );

assert( gamma_move(board, 4, 0, 30) == 0 );

assert( gamma_move(board, 5, 0, 23) == 1 );

assert( gamma_move(board, 6, 0, 32) == 1 );

assert( gamma_move(board, 7, 0, 26) == 0 );

assert( gamma_move(board, 8, 0, 14) == 1 );

assert( gamma_move(board, 1, 0, 12) == 0 );

assert( gamma_move(board, 2, 1, 36) == 0 );

assert( gamma_move(board, 3, 0, 13) == 1 );

assert( gamma_move(board, 4, 0, 48) == 1 );

assert( gamma_move(board, 5, 1, 27) == 0 );

assert( gamma_move(board, 6, 1, 51) == 0 );

assert( gamma_move(board, 7, 0, 52) == 0 );

assert( gamma_move(board, 8, 1, 30) == 0 );

assert( gamma_move(board, 1, 0, 44) == 0 );

assert( gamma_move(board, 2, 0, 18) == 0 );

assert( gamma_move(board, 3, 0, 1) == 1 );

assert( gamma_move(board, 4, 1, 8) == 0 );

assert( gamma_move(board, 5, 0, 1) == 0 );

assert( gamma_move(board, 6, 0, 11) == 1 );

assert( gamma_move(board, 7, 0, 51) == 1 );

assert( gamma_move(board, 8, 1, 16) == 0 );

assert( gamma_move(board, 1, 1, 55) == 0 );

assert( gamma_move(board, 2, 0, 41) == 0 );

assert( gamma_move(board, 3, 1, 54) == 0 );

assert( gamma_move(board, 4, 0, 37) == 1 );

assert( gamma_move(board, 5, 0, 21) == 1 );

assert( gamma_move(board, 6, 0, 18) == 0 );

assert( gamma_move(board, 7, 0, 21) == 0 );

assert( gamma_move(board, 8, 1, 4) == 0 );

assert( gamma_move(board, 1, 0, 36) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 29 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 4 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 6 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 5 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 2 );

assert( gamma_free_fields(board, 7) == 29 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 29 );

assert( gamma_move(board, 2, 1, 20) == 0 );

assert( gamma_move(board, 3, 1, 9) == 0 );

assert( gamma_move(board, 4, 0, 38) == 1 );

assert( gamma_move(board, 5, 0, 24) == 1 );

assert( gamma_move(board, 6, 1, 9) == 0 );

assert( gamma_move(board, 7, 1, 6) == 0 );

assert( gamma_move(board, 8, 1, 37) == 0 );

assert( gamma_move(board, 1, 0, 26) == 0 );

assert( gamma_move(board, 2, 0, 7) == 0 );

assert( gamma_move(board, 3, 0, 39) == 0 );

assert( gamma_move(board, 4, 0, 4) == 0 );

assert( gamma_move(board, 5, 1, 22) == 0 );

assert( gamma_move(board, 6, 1, 43) == 0 );

assert( gamma_move(board, 7, 1, 34) == 0 );

assert( gamma_move(board, 8, 0, 24) == 0 );

assert( gamma_move(board, 1, 0, 13) == 0 );

assert( gamma_move(board, 2, 0, 36) == 1 );

assert( gamma_move(board, 3, 1, 15) == 0 );

assert( gamma_move(board, 4, 0, 55) == 0 );

assert( gamma_move(board, 5, 1, 41) == 0 );

assert( gamma_move(board, 6, 0, 7) == 0 );

assert( gamma_move(board, 7, 0, 39) == 1 );

assert( gamma_move(board, 8, 1, 54) == 0 );

assert( gamma_move(board, 1, 0, 37) == 0 );

assert( gamma_move(board, 2, 0, 24) == 0 );

assert( gamma_move(board, 3, 1, 39) == 0 );

assert( gamma_move(board, 4, 1, 47) == 0 );

assert( gamma_move(board, 5, 1, 12) == 0 );

assert( gamma_move(board, 6, 1, 12) == 0 );

assert( gamma_move(board, 7, 0, 3) == 1 );

assert( gamma_move(board, 8, 1, 41) == 0 );

assert( gamma_move(board, 1, 0, 18) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert( gamma_golden_move(board, 1, 1, 30) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 5 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert( gamma_golden_move(board, 1, 1, 25) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 6 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 5 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 24 );

assert( gamma_golden_move(board, 1, 1, 42) == 0 );

assert( gamma_move(board, 2, 1, 49) == 0 );

assert( gamma_move(board, 3, 0, 5) == 0 );

assert( gamma_move(board, 4, 0, 43) == 0 );

assert( gamma_move(board, 5, 1, 52) == 0 );

assert( gamma_move(board, 6, 1, 10) == 0 );

assert( gamma_move(board, 7, 0, 20) == 0 );

assert( gamma_move(board, 8, 0, 17) == 1 );

assert( gamma_move(board, 1, 1, 42) == 0 );

assert( gamma_move(board, 2, 0, 31) == 1 );

assert( gamma_move(board, 3, 1, 6) == 0 );

assert( gamma_move(board, 4, 1, 41) == 0 );

assert( gamma_move(board, 5, 1, 12) == 0 );

assert( gamma_move(board, 6, 0, 53) == 0 );

assert( gamma_move(board, 7, 1, 5) == 0 );

assert( gamma_move(board, 8, 0, 9) == 0 );

assert( gamma_move(board, 1, 1, 17) == 0 );

assert( gamma_move(board, 2, 0, 23) == 0 );

assert( gamma_move(board, 3, 1, 21) == 0 );

assert( gamma_move(board, 4, 1, 3) == 0 );

assert( gamma_move(board, 5, 1, 25) == 0 );

assert( gamma_move(board, 6, 0, 20) == 0 );

assert( gamma_move(board, 7, 1, 50) == 0 );

assert( gamma_move(board, 8, 0, 1) == 0 );

assert( gamma_move(board, 1, 1, 29) == 0 );

assert( gamma_move(board, 2, 1, 35) == 0 );

assert( gamma_move(board, 3, 0, 25) == 0 );

assert( gamma_move(board, 4, 0, 47) == 0 );

assert( gamma_move(board, 5, 0, 40) == 0 );

assert( gamma_move(board, 6, 0, 53) == 0 );

assert( gamma_move(board, 7, 1, 3) == 0 );

assert( gamma_move(board, 8, 0, 11) == 0 );

assert( gamma_move(board, 1, 1, 11) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 5 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 5 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 22 );

assert( gamma_move(board, 2, 1, 4) == 0 );

assert( gamma_move(board, 3, 0, 8) == 0 );

assert( gamma_move(board, 4, 1, 20) == 0 );

assert( gamma_move(board, 5, 1, 44) == 0 );

assert( gamma_move(board, 6, 0, 16) == 0 );

assert( gamma_move(board, 7, 0, 0) == 0 );

assert( gamma_move(board, 8, 0, 9) == 0 );

assert( gamma_move(board, 1, 1, 11) == 0 );

assert( gamma_move(board, 2, 0, 7) == 0 );

assert( gamma_move(board, 3, 1, 22) == 0 );

assert( gamma_move(board, 4, 1, 11) == 0 );

assert( gamma_move(board, 5, 1, 0) == 0 );

assert( gamma_move(board, 6, 0, 24) == 0 );

assert( gamma_move(board, 7, 0, 19) == 0 );

assert( gamma_move(board, 8, 0, 52) == 0 );

assert( gamma_move(board, 1, 0, 7) == 0 );

assert( gamma_move(board, 2, 1, 3) == 0 );

assert( gamma_move(board, 3, 0, 55) == 0 );

assert( gamma_move(board, 4, 0, 2) == 0 );

assert( gamma_move(board, 5, 1, 18) == 0 );

assert( gamma_move(board, 6, 1, 49) == 0 );

assert( gamma_move(board, 7, 0, 11) == 0 );

assert( gamma_move(board, 8, 1, 17) == 0 );

assert( gamma_move(board, 1, 0, 14) == 0 );

assert( gamma_move(board, 2, 1, 5) == 0 );

assert( gamma_move(board, 3, 0, 25) == 0 );

assert( gamma_move(board, 4, 0, 3) == 0 );

assert( gamma_move(board, 5, 1, 41) == 0 );

assert( gamma_move(board, 6, 0, 31) == 0 );

assert( gamma_move(board, 7, 1, 22) == 0 );

assert( gamma_move(board, 8, 1, 5) == 0 );

assert( gamma_move(board, 1, 1, 43) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert( gamma_golden_move(board, 1, 1, 16) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 5 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 5 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 22 );

assert( gamma_move(board, 2, 0, 55) == 0 );

assert( gamma_move(board, 3, 0, 48) == 0 );

assert( gamma_move(board, 4, 1, 53) == 0 );

assert( gamma_move(board, 5, 0, 54) == 0 );

assert( gamma_move(board, 6, 0, 36) == 0 );

assert( gamma_move(board, 7, 1, 41) == 0 );

assert( gamma_move(board, 8, 1, 27) == 0 );

assert( gamma_move(board, 1, 1, 6) == 0 );

assert( gamma_move(board, 2, 1, 36) == 0 );

assert( gamma_move(board, 3, 1, 40) == 0 );

assert( gamma_move(board, 4, 0, 12) == 0 );

assert( gamma_move(board, 5, 1, 40) == 0 );

assert( gamma_move(board, 6, 1, 34) == 0 );

assert( gamma_move(board, 7, 1, 37) == 0 );

assert( gamma_move(board, 8, 1, 4) == 0 );

assert( gamma_move(board, 1, 1, 35) == 0 );

assert( gamma_move(board, 2, 1, 23) == 0 );

assert( gamma_move(board, 3, 0, 4) == 0 );

assert( gamma_move(board, 4, 0, 23) == 0 );

assert( gamma_move(board, 5, 1, 33) == 0 );

assert( gamma_move(board, 6, 0, 11) == 0 );

assert( gamma_move(board, 7, 0, 52) == 0 );

assert( gamma_move(board, 8, 1, 4) == 0 );

assert( gamma_move(board, 1, 1, 44) == 0 );

assert( gamma_move(board, 2, 1, 41) == 0 );

assert( gamma_move(board, 3, 0, 10) == 0 );

assert( gamma_move(board, 4, 0, 47) == 0 );

assert( gamma_move(board, 5, 0, 50) == 0 );

assert( gamma_move(board, 6, 0, 14) == 0 );

assert( gamma_move(board, 7, 0, 0) == 0 );

assert( gamma_move(board, 8, 1, 42) == 0 );

assert( gamma_move(board, 1, 0, 7) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 5 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 2 );

assert( gamma_golden_move(board, 1, 1, 43) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 5 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 22 );

assert( gamma_move(board, 2, 1, 7) == 0 );

assert( gamma_move(board, 3, 1, 25) == 0 );

assert( gamma_move(board, 4, 1, 11) == 0 );

assert( gamma_move(board, 5, 0, 45) == 0 );

assert( gamma_move(board, 6, 1, 39) == 0 );

assert( gamma_move(board, 7, 1, 27) == 0 );

assert( gamma_move(board, 8, 0, 26) == 0 );

assert( gamma_move(board, 1, 1, 5) == 0 );

assert( gamma_move(board, 2, 0, 15) == 1 );

assert( gamma_move(board, 3, 0, 9) == 0 );

assert( gamma_move(board, 4, 1, 51) == 0 );

assert( gamma_move(board, 5, 0, 15) == 0 );

assert( gamma_move(board, 6, 1, 17) == 0 );

assert( gamma_move(board, 7, 1, 31) == 0 );

assert( gamma_move(board, 8, 1, 12) == 0 );

assert( gamma_move(board, 1, 0, 45) == 0 );

assert( gamma_move(board, 2, 0, 35) == 0 );

assert( gamma_move(board, 3, 0, 52) == 0 );

assert( gamma_move(board, 4, 1, 55) == 0 );

assert( gamma_move(board, 5, 1, 19) == 0 );

assert( gamma_move(board, 6, 0, 39) == 0 );

assert( gamma_move(board, 7, 1, 52) == 0 );

assert( gamma_move(board, 8, 0, 38) == 0 );

assert( gamma_move(board, 1, 0, 55) == 0 );

assert( gamma_move(board, 2, 0, 35) == 0 );

assert( gamma_move(board, 3, 1, 39) == 0 );

assert( gamma_move(board, 4, 0, 1) == 0 );

assert( gamma_move(board, 5, 0, 51) == 0 );

assert( gamma_move(board, 6, 0, 35) == 0 );

assert( gamma_move(board, 7, 1, 35) == 0 );

assert( gamma_move(board, 8, 0, 44) == 1 );

assert( gamma_move(board, 1, 1, 32) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 6 );

assert( gamma_free_fields(board, 2) == 1 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 2 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 5 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 3 );

assert( gamma_free_fields(board, 8) == 20 );

assert( gamma_move(board, 2, 0, 44) == 0 );

assert( gamma_move(board, 3, 1, 5) == 0 );

assert( gamma_move(board, 4, 0, 53) == 1 );

assert( gamma_move(board, 5, 0, 43) == 0 );

assert( gamma_move(board, 6, 0, 12) == 1 );

assert( gamma_move(board, 7, 0, 42) == 0 );

assert( gamma_move(board, 8, 1, 37) == 0 );

assert( gamma_move(board, 1, 0, 51) == 0 );

assert( gamma_move(board, 2, 0, 44) == 0 );

assert( gamma_move(board, 3, 0, 52) == 0 );

assert( gamma_move(board, 4, 1, 41) == 0 );

assert( gamma_move(board, 5, 0, 52) == 0 );

assert( gamma_move(board, 6, 0, 5) == 0 );

assert( gamma_move(board, 7, 1, 23) == 0 );

assert( gamma_move(board, 8, 1, 53) == 0 );

assert( gamma_move(board, 1, 1, 38) == 0 );

assert( gamma_move(board, 2, 1, 10) == 0 );

assert( gamma_move(board, 3, 0, 54) == 0 );

assert( gamma_move(board, 4, 1, 39) == 0 );

assert( gamma_move(board, 5, 1, 15) == 0 );

assert( gamma_move(board, 6, 0, 48) == 0 );

assert( gamma_move(board, 7, 0, 35) == 0 );

assert( gamma_move(board, 8, 0, 41) == 0 );

assert( gamma_move(board, 1, 0, 17) == 0 );

assert( gamma_move(board, 2, 1, 14) == 0 );

assert( gamma_move(board, 3, 1, 9) == 0 );

assert( gamma_move(board, 4, 1, 0) == 0 );

assert( gamma_move(board, 5, 0, 5) == 0 );

assert( gamma_move(board, 6, 1, 29) == 0 );

assert( gamma_move(board, 7, 0, 22) == 0 );

assert( gamma_move(board, 8, 0, 23) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 6 );

assert( gamma_free_fields(board, 2) == 1 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 1 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 6 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 5 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 5 );

assert( gamma_free_fields(board, 6) == 3 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 3 );

assert( gamma_free_fields(board, 8) == 18 );





gamma_delete(board);



    return 0;

}

