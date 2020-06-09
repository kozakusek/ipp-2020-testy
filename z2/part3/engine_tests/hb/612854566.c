#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 612854566

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 59, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 0, 23) == 1 );

assert( gamma_move(board, 2, 0, 56) == 1 );

assert( gamma_move(board, 3, 1, 23) == 0 );

assert( gamma_move(board, 4, 0, 47) == 1 );

assert( gamma_move(board, 5, 1, 41) == 0 );

assert( gamma_move(board, 6, 1, 52) == 0 );

assert( gamma_move(board, 7, 0, 57) == 1 );

assert( gamma_move(board, 8, 1, 58) == 0 );

assert( gamma_move(board, 1, 0, 8) == 1 );

assert( gamma_move(board, 2, 1, 4) == 0 );

assert( gamma_move(board, 3, 0, 17) == 1 );

assert( gamma_move(board, 4, 0, 48) == 1 );

assert( gamma_move(board, 5, 0, 53) == 1 );

assert( gamma_move(board, 6, 1, 54) == 0 );

assert( gamma_move(board, 7, 1, 50) == 0 );

assert( gamma_move(board, 8, 0, 56) == 0 );

assert( gamma_move(board, 1, 1, 22) == 0 );

assert( gamma_move(board, 2, 0, 18) == 1 );

assert( gamma_move(board, 3, 0, 18) == 0 );

assert( gamma_move(board, 4, 1, 38) == 0 );

assert( gamma_move(board, 5, 0, 40) == 1 );

assert( gamma_move(board, 6, 1, 40) == 0 );

assert( gamma_move(board, 7, 1, 17) == 0 );

assert( gamma_move(board, 8, 0, 38) == 1 );

assert( gamma_move(board, 1, 0, 5) == 1 );

assert( gamma_move(board, 2, 0, 18) == 0 );

assert( gamma_move(board, 3, 0, 44) == 1 );

assert( gamma_move(board, 4, 0, 1) == 1 );

assert( gamma_move(board, 5, 1, 2) == 0 );

assert( gamma_move(board, 6, 0, 43) == 1 );

assert( gamma_move(board, 7, 1, 50) == 0 );

assert( gamma_move(board, 8, 1, 50) == 0 );

assert( gamma_move(board, 1, 0, 42) == 1 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 7 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 43 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 43 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 43 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 2 );

assert( gamma_free_fields(board, 5) == 43 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 1 );

assert( gamma_free_fields(board, 6) == 43 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 1 );

assert( gamma_free_fields(board, 7) == 43 );

assert( gamma_golden_move(board, 1, 0, 57) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 43 );

assert( gamma_move(board, 2, 0, 8) == 0 );

assert( gamma_move(board, 3, 0, 28) == 1 );

assert( gamma_move(board, 4, 1, 59) == 0 );

assert( gamma_move(board, 5, 0, 49) == 1 );

assert( gamma_move(board, 6, 1, 18) == 0 );

assert( gamma_move(board, 7, 1, 34) == 0 );

assert( gamma_move(board, 8, 1, 34) == 0 );

assert( gamma_move(board, 1, 0, 12) == 0 );

assert( gamma_move(board, 2, 1, 11) == 0 );

assert( gamma_move(board, 3, 1, 19) == 0 );

assert( gamma_move(board, 4, 0, 40) == 0 );

assert( gamma_move(board, 5, 0, 1) == 0 );

assert( gamma_move(board, 6, 0, 51) == 1 );

assert( gamma_move(board, 7, 1, 17) == 0 );

assert( gamma_move(board, 8, 1, 6) == 0 );

assert( gamma_move(board, 1, 0, 16) == 0 );

assert( gamma_move(board, 2, 1, 53) == 0 );

assert( gamma_move(board, 3, 0, 44) == 0 );

assert( gamma_move(board, 4, 1, 38) == 0 );

assert( gamma_move(board, 5, 0, 27) == 1 );

assert( gamma_move(board, 6, 0, 59) == 0 );

assert( gamma_move(board, 7, 0, 0) == 1 );

assert( gamma_move(board, 8, 0, 36) == 1 );

assert( gamma_move(board, 1, 0, 18) == 0 );

assert( gamma_move(board, 2, 1, 41) == 0 );

assert( gamma_move(board, 3, 1, 10) == 0 );

assert( gamma_move(board, 4, 1, 12) == 0 );

assert( gamma_move(board, 5, 1, 43) == 0 );

assert( gamma_move(board, 6, 0, 40) == 0 );

assert( gamma_move(board, 7, 0, 59) == 0 );

assert( gamma_move(board, 8, 0, 56) == 0 );

assert( gamma_move(board, 1, 1, 27) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 7 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 37 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 37 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 37 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 6 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 2 );

assert( gamma_free_fields(board, 6) == 37 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 2 );

assert( gamma_free_fields(board, 7) == 37 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 37 );

assert( gamma_move(board, 2, 0, 11) == 1 );

assert( gamma_move(board, 3, 1, 14) == 0 );

assert( gamma_move(board, 4, 0, 4) == 1 );

assert( gamma_move(board, 5, 0, 52) == 1 );

assert( gamma_move(board, 6, 0, 3) == 1 );

assert( gamma_move(board, 7, 1, 51) == 0 );

assert( gamma_move(board, 8, 1, 35) == 0 );

assert( gamma_move(board, 1, 0, 36) == 0 );

assert( gamma_move(board, 2, 0, 2) == 1 );

assert( gamma_move(board, 3, 1, 2) == 0 );

assert( gamma_move(board, 4, 0, 43) == 0 );

assert( gamma_move(board, 5, 0, 37) == 0 );

assert( gamma_move(board, 6, 0, 55) == 1 );

assert( gamma_move(board, 7, 0, 25) == 1 );

assert( gamma_move(board, 8, 1, 55) == 0 );

assert( gamma_move(board, 1, 1, 45) == 0 );

assert( gamma_move(board, 2, 1, 20) == 0 );

assert( gamma_move(board, 3, 1, 27) == 0 );

assert( gamma_move(board, 4, 1, 16) == 0 );

assert( gamma_move(board, 5, 0, 48) == 0 );

assert( gamma_move(board, 6, 0, 13) == 0 );

assert( gamma_move(board, 7, 1, 48) == 0 );

assert( gamma_move(board, 8, 1, 8) == 0 );

assert( gamma_move(board, 1, 1, 18) == 0 );

assert( gamma_move(board, 2, 0, 47) == 0 );

assert( gamma_move(board, 3, 0, 17) == 0 );

assert( gamma_move(board, 4, 1, 47) == 0 );

assert( gamma_move(board, 5, 1, 14) == 0 );

assert( gamma_move(board, 6, 0, 44) == 0 );

assert( gamma_move(board, 7, 1, 13) == 0 );

assert( gamma_move(board, 8, 1, 53) == 0 );

assert( gamma_move(board, 1, 0, 30) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 30 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 30 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 5 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 30 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 30 );

assert( gamma_move(board, 2, 1, 35) == 0 );

assert( gamma_move(board, 3, 1, 13) == 0 );

assert( gamma_move(board, 4, 1, 19) == 0 );

assert( gamma_move(board, 5, 0, 56) == 0 );

assert( gamma_move(board, 6, 0, 6) == 0 );

assert( gamma_move(board, 7, 0, 41) == 1 );

assert( gamma_move(board, 8, 1, 35) == 0 );

assert( gamma_move(board, 1, 1, 2) == 0 );

assert( gamma_move(board, 2, 0, 38) == 0 );

assert( gamma_move(board, 3, 1, 33) == 0 );

assert( gamma_move(board, 4, 1, 17) == 0 );

assert( gamma_move(board, 5, 0, 48) == 0 );

assert( gamma_move(board, 6, 0, 23) == 0 );

assert( gamma_move(board, 7, 1, 27) == 0 );

assert( gamma_move(board, 8, 0, 32) == 1 );

assert( gamma_move(board, 1, 1, 57) == 0 );

assert( gamma_move(board, 2, 1, 40) == 0 );

assert( gamma_move(board, 3, 0, 26) == 1 );

assert( gamma_move(board, 4, 1, 51) == 0 );

assert( gamma_move(board, 5, 1, 45) == 0 );

assert( gamma_move(board, 6, 0, 9) == 0 );

assert( gamma_move(board, 7, 0, 39) == 0 );

assert( gamma_move(board, 8, 1, 1) == 0 );

assert( gamma_move(board, 1, 0, 16) == 0 );

assert( gamma_move(board, 2, 1, 17) == 0 );

assert( gamma_move(board, 3, 0, 10) == 0 );

assert( gamma_move(board, 4, 0, 39) == 1 );

assert( gamma_move(board, 5, 1, 27) == 0 );

assert( gamma_move(board, 6, 1, 34) == 0 );

assert( gamma_move(board, 7, 1, 17) == 0 );

assert( gamma_move(board, 8, 0, 37) == 1 );

assert( gamma_move(board, 1, 0, 24) == 1 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 4 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert( gamma_golden_move(board, 1, 0, 40) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 2 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 1 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 24 );

assert( gamma_move(board, 2, 0, 15) == 0 );

assert( gamma_move(board, 3, 0, 5) == 0 );

assert( gamma_move(board, 4, 0, 40) == 0 );

assert( gamma_move(board, 5, 1, 2) == 0 );

assert( gamma_move(board, 6, 0, 36) == 0 );

assert( gamma_move(board, 7, 1, 50) == 0 );

assert( gamma_move(board, 8, 0, 33) == 1 );

assert( gamma_move(board, 1, 1, 23) == 0 );

assert( gamma_move(board, 2, 0, 53) == 0 );

assert( gamma_move(board, 3, 1, 31) == 0 );

assert( gamma_move(board, 4, 0, 59) == 0 );

assert( gamma_move(board, 5, 0, 2) == 0 );

assert( gamma_move(board, 6, 1, 13) == 0 );

assert( gamma_move(board, 7, 0, 39) == 0 );

assert( gamma_move(board, 8, 1, 23) == 0 );

assert( gamma_move(board, 1, 0, 21) == 0 );

assert( gamma_move(board, 2, 1, 2) == 0 );

assert( gamma_move(board, 3, 0, 1) == 0 );

assert( gamma_move(board, 4, 1, 5) == 0 );

assert( gamma_move(board, 5, 1, 41) == 0 );

assert( gamma_move(board, 6, 0, 45) == 0 );

assert( gamma_move(board, 7, 0, 58) == 1 );

assert( gamma_move(board, 8, 0, 41) == 0 );

assert( gamma_move(board, 1, 0, 7) == 1 );

assert( gamma_move(board, 2, 1, 34) == 0 );

assert( gamma_move(board, 3, 1, 25) == 0 );

assert( gamma_move(board, 4, 0, 32) == 0 );

assert( gamma_move(board, 5, 1, 30) == 0 );

assert( gamma_move(board, 6, 1, 20) == 0 );

assert( gamma_move(board, 7, 0, 1) == 0 );

assert( gamma_move(board, 8, 1, 19) == 0 );

assert( gamma_move(board, 1, 0, 41) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 6 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 2 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 21 );

assert( gamma_move(board, 2, 1, 52) == 0 );

assert( gamma_move(board, 3, 0, 33) == 0 );

assert( gamma_move(board, 4, 1, 1) == 0 );

assert( gamma_move(board, 5, 1, 34) == 0 );

assert( gamma_move(board, 6, 0, 33) == 0 );

assert( gamma_move(board, 7, 0, 43) == 0 );

assert( gamma_move(board, 8, 1, 9) == 0 );

assert( gamma_move(board, 1, 1, 24) == 0 );

assert( gamma_move(board, 2, 0, 21) == 0 );

assert( gamma_move(board, 3, 1, 16) == 0 );

assert( gamma_move(board, 4, 0, 2) == 0 );

assert( gamma_move(board, 5, 0, 49) == 0 );

assert( gamma_move(board, 6, 1, 50) == 0 );

assert( gamma_move(board, 7, 1, 23) == 0 );

assert( gamma_move(board, 8, 1, 26) == 0 );

assert( gamma_move(board, 1, 1, 6) == 0 );

assert( gamma_move(board, 2, 1, 21) == 0 );

assert( gamma_move(board, 3, 0, 49) == 0 );

assert( gamma_move(board, 4, 1, 10) == 0 );

assert( gamma_move(board, 5, 0, 1) == 0 );

assert( gamma_move(board, 6, 1, 5) == 0 );

assert( gamma_move(board, 7, 1, 3) == 0 );

assert( gamma_move(board, 8, 1, 44) == 0 );

assert( gamma_move(board, 1, 1, 25) == 0 );

assert( gamma_move(board, 2, 1, 18) == 0 );

assert( gamma_move(board, 3, 0, 8) == 0 );

assert( gamma_move(board, 4, 1, 25) == 0 );

assert( gamma_move(board, 5, 0, 3) == 0 );

assert( gamma_move(board, 6, 1, 50) == 0 );

assert( gamma_move(board, 7, 0, 28) == 0 );

assert( gamma_move(board, 8, 1, 17) == 0 );

assert( gamma_move(board, 1, 0, 35) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 6 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 2 );

assert( gamma_golden_move(board, 1, 1, 45) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 21 );

assert( gamma_move(board, 2, 0, 32) == 0 );

assert( gamma_move(board, 3, 1, 37) == 0 );

assert( gamma_move(board, 4, 0, 52) == 0 );

assert( gamma_move(board, 5, 1, 37) == 0 );

assert( gamma_move(board, 6, 1, 31) == 0 );

assert( gamma_move(board, 7, 1, 9) == 0 );

assert( gamma_move(board, 8, 1, 12) == 0 );

assert( gamma_move(board, 1, 1, 18) == 0 );

assert( gamma_move(board, 2, 1, 41) == 0 );

assert( gamma_move(board, 3, 0, 27) == 0 );

assert( gamma_move(board, 4, 0, 56) == 0 );

assert( gamma_move(board, 5, 0, 39) == 0 );

assert( gamma_move(board, 6, 1, 32) == 0 );

assert( gamma_move(board, 7, 0, 4) == 0 );

assert( gamma_move(board, 8, 0, 12) == 1 );

assert( gamma_move(board, 1, 1, 3) == 0 );

assert( gamma_move(board, 2, 1, 24) == 0 );

assert( gamma_move(board, 3, 1, 45) == 0 );

assert( gamma_move(board, 4, 0, 41) == 0 );

assert( gamma_move(board, 5, 0, 41) == 0 );

assert( gamma_move(board, 6, 1, 55) == 0 );

assert( gamma_move(board, 7, 1, 47) == 0 );

assert( gamma_move(board, 8, 0, 16) == 1 );

assert( gamma_move(board, 1, 0, 45) == 0 );

assert( gamma_move(board, 2, 0, 39) == 0 );

assert( gamma_move(board, 3, 1, 58) == 0 );

assert( gamma_move(board, 4, 0, 34) == 0 );

assert( gamma_move(board, 5, 0, 19) == 0 );

assert( gamma_move(board, 6, 1, 45) == 0 );

assert( gamma_move(board, 7, 1, 18) == 0 );

assert( gamma_move(board, 8, 1, 40) == 0 );

assert( gamma_move(board, 1, 0, 23) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 6 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 2 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 2 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert( gamma_golden_move(board, 1, 1, 20) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 7 );

assert( gamma_free_fields(board, 8) == 5 );

assert( gamma_move(board, 2, 1, 2) == 0 );

assert( gamma_move(board, 3, 0, 5) == 0 );

assert( gamma_move(board, 4, 1, 29) == 0 );

assert( gamma_move(board, 5, 0, 34) == 0 );

assert( gamma_move(board, 6, 1, 17) == 0 );

assert( gamma_move(board, 7, 1, 25) == 0 );

assert( gamma_move(board, 8, 1, 41) == 0 );

assert( gamma_move(board, 1, 1, 17) == 0 );

assert( gamma_move(board, 2, 1, 46) == 0 );

assert( gamma_move(board, 3, 1, 43) == 0 );

assert( gamma_move(board, 4, 1, 32) == 0 );

assert( gamma_move(board, 5, 0, 23) == 0 );

assert( gamma_move(board, 6, 0, 32) == 0 );

assert( gamma_move(board, 7, 0, 24) == 0 );

assert( gamma_move(board, 8, 0, 59) == 0 );

assert( gamma_move(board, 1, 0, 20) == 0 );

assert( gamma_move(board, 2, 0, 38) == 0 );

assert( gamma_move(board, 3, 0, 4) == 0 );

assert( gamma_move(board, 4, 1, 40) == 0 );

assert( gamma_move(board, 5, 1, 39) == 0 );

assert( gamma_move(board, 6, 0, 29) == 0 );

assert( gamma_move(board, 7, 0, 32) == 0 );

assert( gamma_move(board, 8, 0, 20) == 0 );

assert( gamma_move(board, 1, 1, 6) == 0 );

assert( gamma_move(board, 2, 0, 44) == 0 );

assert( gamma_move(board, 3, 1, 52) == 0 );

assert( gamma_move(board, 4, 0, 2) == 0 );

assert( gamma_move(board, 5, 1, 26) == 0 );

assert( gamma_move(board, 6, 1, 16) == 0 );

assert( gamma_move(board, 7, 1, 50) == 0 );

assert( gamma_move(board, 8, 1, 27) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 6 );

assert( gamma_free_fields(board, 1) == 3 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 2 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 2 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 5 );

assert( gamma_free_fields(board, 4) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 2 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 2 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 7 );

assert( gamma_free_fields(board, 8) == 5 );





gamma_delete(board);



    return 0;

}

