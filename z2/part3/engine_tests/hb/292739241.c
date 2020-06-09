#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 292739241

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 64, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 0, 31) == 1 );

assert( gamma_move(board, 2, 1, 39) == 0 );

assert( gamma_move(board, 3, 0, 1) == 1 );

assert( gamma_move(board, 4, 1, 60) == 0 );

assert( gamma_move(board, 5, 0, 23) == 1 );

assert( gamma_move(board, 6, 1, 51) == 0 );

assert( gamma_move(board, 7, 0, 12) == 1 );

assert( gamma_move(board, 8, 0, 33) == 1 );

assert( gamma_move(board, 1, 1, 46) == 0 );

assert( gamma_move(board, 2, 1, 52) == 0 );

assert( gamma_move(board, 3, 0, 17) == 1 );

assert( gamma_move(board, 4, 1, 22) == 0 );

assert( gamma_move(board, 5, 1, 32) == 0 );

assert( gamma_move(board, 6, 0, 57) == 1 );

assert( gamma_move(board, 7, 0, 11) == 1 );

assert( gamma_move(board, 8, 0, 7) == 1 );

assert( gamma_move(board, 1, 0, 55) == 1 );

assert( gamma_move(board, 2, 0, 47) == 1 );

assert( gamma_move(board, 3, 0, 0) == 1 );

assert( gamma_move(board, 4, 0, 5) == 1 );

assert( gamma_move(board, 5, 0, 56) == 1 );

assert( gamma_move(board, 6, 0, 54) == 1 );

assert( gamma_move(board, 7, 1, 43) == 0 );

assert( gamma_move(board, 8, 1, 21) == 0 );

assert( gamma_move(board, 1, 0, 43) == 1 );

assert( gamma_move(board, 2, 1, 13) == 0 );

assert( gamma_move(board, 3, 0, 17) == 0 );

assert( gamma_move(board, 4, 0, 58) == 1 );

assert( gamma_move(board, 5, 0, 36) == 1 );

assert( gamma_move(board, 6, 0, 10) == 1 );

assert( gamma_move(board, 7, 1, 32) == 0 );

assert( gamma_move(board, 8, 0, 24) == 1 );

assert( gamma_move(board, 1, 1, 47) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 44 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 1 );

assert( gamma_free_fields(board, 2) == 44 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 44 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 2 );

assert( gamma_free_fields(board, 4) == 44 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 3 );

assert( gamma_free_fields(board, 5) == 44 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 44 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 2 );

assert( gamma_free_fields(board, 7) == 44 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 3 );

assert( gamma_free_fields(board, 8) == 44 );

assert( gamma_move(board, 2, 0, 6) == 1 );

assert( gamma_move(board, 3, 1, 26) == 0 );

assert( gamma_move(board, 4, 0, 24) == 0 );

assert( gamma_move(board, 5, 1, 64) == 0 );

assert( gamma_move(board, 6, 1, 28) == 0 );

assert( gamma_move(board, 7, 0, 45) == 1 );

assert( gamma_move(board, 8, 1, 39) == 0 );

assert( gamma_move(board, 1, 1, 23) == 0 );

assert( gamma_move(board, 2, 1, 1) == 0 );

assert( gamma_move(board, 3, 1, 29) == 0 );

assert( gamma_move(board, 4, 0, 48) == 1 );

assert( gamma_move(board, 5, 0, 3) == 1 );

assert( gamma_move(board, 6, 0, 58) == 0 );

assert( gamma_move(board, 7, 1, 43) == 0 );

assert( gamma_move(board, 8, 1, 13) == 0 );

assert( gamma_move(board, 1, 0, 14) == 1 );

assert( gamma_move(board, 2, 0, 26) == 1 );

assert( gamma_move(board, 3, 1, 44) == 0 );

assert( gamma_move(board, 4, 0, 64) == 0 );

assert( gamma_move(board, 5, 0, 11) == 0 );

assert( gamma_move(board, 6, 0, 28) == 1 );

assert( gamma_move(board, 7, 0, 11) == 0 );

assert( gamma_move(board, 8, 0, 49) == 1 );

assert( gamma_move(board, 1, 1, 26) == 0 );

assert( gamma_move(board, 2, 0, 34) == 1 );

assert( gamma_move(board, 3, 0, 35) == 1 );

assert( gamma_move(board, 4, 0, 14) == 0 );

assert( gamma_move(board, 5, 0, 20) == 0 );

assert( gamma_move(board, 6, 0, 43) == 0 );

assert( gamma_move(board, 7, 1, 27) == 0 );

assert( gamma_move(board, 8, 0, 9) == 0 );

assert( gamma_move(board, 1, 0, 6) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 34 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 34 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 4 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 34 );

assert( gamma_golden_move(board, 1, 1, 43) == 0 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 0, 1) == 0 );

assert( gamma_move(board, 3, 1, 56) == 0 );

assert( gamma_move(board, 4, 1, 8) == 0 );

assert( gamma_move(board, 5, 1, 51) == 0 );

assert( gamma_move(board, 6, 1, 25) == 0 );

assert( gamma_move(board, 7, 0, 4) == 1 );

assert( gamma_move(board, 8, 0, 33) == 0 );

assert( gamma_move(board, 1, 0, 6) == 0 );

assert( gamma_move(board, 2, 1, 58) == 0 );

assert( gamma_move(board, 3, 1, 13) == 0 );

assert( gamma_move(board, 4, 0, 28) == 0 );

assert( gamma_move(board, 5, 1, 22) == 0 );

assert( gamma_move(board, 6, 0, 48) == 0 );

assert( gamma_move(board, 7, 0, 40) == 1 );

assert( gamma_move(board, 8, 0, 45) == 0 );

assert( gamma_move(board, 1, 0, 31) == 0 );

assert( gamma_move(board, 2, 0, 26) == 0 );

assert( gamma_move(board, 3, 1, 15) == 0 );

assert( gamma_move(board, 4, 1, 12) == 0 );

assert( gamma_move(board, 5, 1, 60) == 0 );

assert( gamma_move(board, 6, 1, 45) == 0 );

assert( gamma_move(board, 7, 1, 21) == 0 );

assert( gamma_move(board, 8, 1, 50) == 0 );

assert( gamma_move(board, 1, 0, 4) == 0 );

assert( gamma_move(board, 2, 1, 16) == 0 );

assert( gamma_move(board, 3, 1, 10) == 0 );

assert( gamma_move(board, 4, 1, 19) == 0 );

assert( gamma_move(board, 5, 1, 63) == 0 );

assert( gamma_move(board, 6, 1, 52) == 0 );

assert( gamma_move(board, 7, 1, 34) == 0 );

assert( gamma_move(board, 8, 0, 59) == 0 );

assert( gamma_move(board, 1, 1, 6) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 32 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 32 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 1, 55) == 0 );

assert( gamma_move(board, 3, 1, 40) == 0 );

assert( gamma_move(board, 4, 0, 64) == 0 );

assert( gamma_move(board, 5, 1, 27) == 0 );

assert( gamma_move(board, 6, 1, 7) == 0 );

assert( gamma_move(board, 7, 0, 5) == 0 );

assert( gamma_move(board, 8, 0, 35) == 0 );

assert( gamma_move(board, 1, 0, 57) == 0 );

assert( gamma_move(board, 2, 1, 33) == 0 );

assert( gamma_move(board, 3, 1, 40) == 0 );

assert( gamma_move(board, 4, 0, 52) == 1 );

assert( gamma_move(board, 5, 1, 41) == 0 );

assert( gamma_move(board, 6, 1, 63) == 0 );

assert( gamma_move(board, 7, 1, 7) == 0 );

assert( gamma_move(board, 8, 1, 7) == 0 );

assert( gamma_move(board, 1, 1, 40) == 0 );

assert( gamma_move(board, 2, 1, 43) == 0 );

assert( gamma_move(board, 3, 0, 45) == 0 );

assert( gamma_move(board, 4, 0, 44) == 0 );

assert( gamma_move(board, 5, 0, 49) == 0 );

assert( gamma_move(board, 6, 0, 33) == 0 );

assert( gamma_move(board, 7, 0, 52) == 0 );

assert( gamma_move(board, 8, 0, 49) == 0 );

assert( gamma_move(board, 1, 0, 58) == 0 );

assert( gamma_move(board, 2, 0, 12) == 0 );

assert( gamma_move(board, 3, 0, 14) == 0 );

assert( gamma_move(board, 4, 1, 62) == 0 );

assert( gamma_move(board, 5, 0, 38) == 0 );

assert( gamma_move(board, 6, 1, 7) == 0 );

assert( gamma_move(board, 7, 1, 43) == 0 );

assert( gamma_move(board, 8, 1, 44) == 0 );

assert( gamma_move(board, 1, 1, 54) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 31 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 0, 55) == 0 );

assert( gamma_move(board, 3, 1, 6) == 0 );

assert( gamma_move(board, 4, 0, 46) == 0 );

assert( gamma_move(board, 5, 1, 57) == 0 );

assert( gamma_move(board, 6, 0, 25) == 0 );

assert( gamma_move(board, 7, 0, 48) == 0 );

assert( gamma_move(board, 8, 0, 61) == 0 );

assert( gamma_move(board, 1, 0, 52) == 0 );

assert( gamma_move(board, 2, 1, 62) == 0 );

assert( gamma_move(board, 3, 0, 34) == 0 );

assert( gamma_move(board, 4, 1, 28) == 0 );

assert( gamma_move(board, 5, 1, 43) == 0 );

assert( gamma_move(board, 6, 0, 8) == 0 );

assert( gamma_move(board, 7, 1, 28) == 0 );

assert( gamma_move(board, 8, 0, 34) == 0 );

assert( gamma_move(board, 1, 1, 26) == 0 );

assert( gamma_move(board, 2, 0, 30) == 0 );

assert( gamma_move(board, 3, 0, 45) == 0 );

assert( gamma_move(board, 4, 0, 8) == 0 );

assert( gamma_move(board, 5, 0, 60) == 0 );

assert( gamma_move(board, 6, 0, 36) == 0 );

assert( gamma_move(board, 7, 0, 50) == 0 );

assert( gamma_move(board, 8, 1, 39) == 0 );

assert( gamma_move(board, 1, 0, 9) == 0 );

assert( gamma_move(board, 2, 0, 4) == 0 );

assert( gamma_move(board, 3, 0, 4) == 0 );

assert( gamma_move(board, 4, 0, 47) == 0 );

assert( gamma_move(board, 5, 0, 63) == 0 );

assert( gamma_move(board, 6, 1, 30) == 0 );

assert( gamma_move(board, 7, 1, 19) == 0 );

assert( gamma_move(board, 8, 0, 14) == 0 );

assert( gamma_move(board, 1, 1, 3) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 31 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 1, 55) == 0 );

assert( gamma_move(board, 3, 1, 64) == 0 );

assert( gamma_move(board, 4, 0, 40) == 0 );

assert( gamma_move(board, 5, 1, 59) == 0 );

assert( gamma_move(board, 6, 1, 19) == 0 );

assert( gamma_move(board, 7, 1, 5) == 0 );

assert( gamma_move(board, 8, 0, 43) == 0 );

assert( gamma_move(board, 1, 1, 23) == 0 );

assert( gamma_move(board, 2, 1, 26) == 0 );

assert( gamma_move(board, 3, 1, 36) == 0 );

assert( gamma_move(board, 4, 1, 32) == 0 );

assert( gamma_move(board, 5, 0, 40) == 0 );

assert( gamma_move(board, 6, 1, 23) == 0 );

assert( gamma_move(board, 7, 0, 50) == 0 );

assert( gamma_move(board, 8, 1, 0) == 0 );

assert( gamma_move(board, 1, 0, 10) == 0 );

assert( gamma_move(board, 2, 1, 2) == 0 );

assert( gamma_move(board, 3, 0, 20) == 1 );

assert( gamma_move(board, 4, 1, 63) == 0 );

assert( gamma_move(board, 5, 0, 53) == 0 );

assert( gamma_move(board, 6, 1, 35) == 0 );

assert( gamma_move(board, 7, 0, 17) == 0 );

assert( gamma_move(board, 8, 1, 33) == 0 );

assert( gamma_move(board, 1, 0, 61) == 0 );

assert( gamma_move(board, 2, 1, 11) == 0 );

assert( gamma_move(board, 3, 0, 46) == 0 );

assert( gamma_move(board, 4, 0, 20) == 0 );

assert( gamma_move(board, 5, 0, 45) == 0 );

assert( gamma_move(board, 6, 0, 47) == 0 );

assert( gamma_move(board, 7, 1, 26) == 0 );

assert( gamma_move(board, 8, 1, 6) == 0 );

assert( gamma_move(board, 1, 0, 0) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 5 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 4 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 1, 21) == 0 );

assert( gamma_move(board, 3, 1, 48) == 0 );

assert( gamma_move(board, 4, 0, 31) == 0 );

assert( gamma_move(board, 5, 0, 34) == 0 );

assert( gamma_move(board, 6, 0, 33) == 0 );

assert( gamma_move(board, 7, 0, 43) == 0 );

assert( gamma_move(board, 8, 1, 55) == 0 );

assert( gamma_move(board, 1, 0, 21) == 0 );

assert( gamma_move(board, 2, 1, 30) == 0 );

assert( gamma_move(board, 3, 0, 61) == 0 );

assert( gamma_move(board, 4, 0, 40) == 0 );

assert( gamma_move(board, 5, 0, 16) == 0 );

assert( gamma_move(board, 6, 1, 57) == 0 );

assert( gamma_move(board, 7, 1, 25) == 0 );

assert( gamma_move(board, 8, 1, 46) == 0 );

assert( gamma_move(board, 1, 0, 0) == 0 );

assert( gamma_move(board, 2, 0, 10) == 0 );

assert( gamma_move(board, 3, 1, 2) == 0 );

assert( gamma_move(board, 4, 0, 63) == 0 );

assert( gamma_move(board, 5, 0, 43) == 0 );

assert( gamma_move(board, 6, 1, 0) == 0 );

assert( gamma_move(board, 7, 0, 25) == 0 );

assert( gamma_move(board, 8, 1, 52) == 0 );

assert( gamma_move(board, 1, 1, 56) == 0 );

assert( gamma_move(board, 2, 1, 5) == 0 );

assert( gamma_move(board, 3, 1, 20) == 0 );

assert( gamma_move(board, 4, 0, 39) == 0 );

assert( gamma_move(board, 5, 0, 53) == 0 );

assert( gamma_move(board, 6, 0, 26) == 0 );

assert( gamma_move(board, 7, 1, 53) == 0 );

assert( gamma_move(board, 8, 0, 8) == 1 );

assert( gamma_move(board, 1, 1, 13) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert( gamma_golden_move(board, 1, 0, 36) == 0 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 5 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert( gamma_golden_move(board, 1, 0, 54) == 1 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 29 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_golden_move(board, 1, 1, 6) == 0 );

assert( gamma_move(board, 2, 0, 6) == 0 );

assert( gamma_move(board, 3, 1, 45) == 0 );

assert( gamma_move(board, 4, 1, 16) == 0 );

assert( gamma_move(board, 5, 1, 25) == 0 );

assert( gamma_move(board, 6, 0, 34) == 0 );

assert( gamma_move(board, 7, 1, 52) == 0 );

assert( gamma_move(board, 8, 1, 25) == 0 );

assert( gamma_move(board, 1, 0, 58) == 0 );

assert( gamma_move(board, 2, 1, 35) == 0 );

assert( gamma_move(board, 3, 0, 39) == 0 );

assert( gamma_move(board, 4, 0, 14) == 0 );

assert( gamma_move(board, 5, 1, 25) == 0 );

assert( gamma_move(board, 6, 0, 52) == 0 );

assert( gamma_move(board, 7, 1, 50) == 0 );

assert( gamma_move(board, 8, 1, 18) == 0 );

assert( gamma_move(board, 1, 1, 9) == 0 );

assert( gamma_move(board, 2, 0, 16) == 0 );

assert( gamma_move(board, 3, 1, 38) == 0 );

assert( gamma_move(board, 4, 1, 47) == 0 );

assert( gamma_move(board, 5, 1, 25) == 0 );

assert( gamma_move(board, 6, 0, 3) == 0 );

assert( gamma_move(board, 7, 0, 2) == 0 );

assert( gamma_move(board, 8, 1, 62) == 0 );

assert( gamma_move(board, 1, 0, 27) == 0 );

assert( gamma_move(board, 2, 0, 34) == 0 );

assert( gamma_move(board, 3, 0, 29) == 0 );

assert( gamma_move(board, 4, 1, 14) == 0 );

assert( gamma_move(board, 5, 1, 40) == 0 );

assert( gamma_move(board, 6, 1, 28) == 0 );

assert( gamma_move(board, 7, 0, 23) == 0 );

assert( gamma_move(board, 8, 1, 63) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 7 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 3 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 5 );

assert( gamma_free_fields(board, 3) == 5 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 3 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 3 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 29 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 5 );

assert( gamma_free_fields(board, 7) == 5 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 4 );





gamma_delete(board);



    return 0;

}

