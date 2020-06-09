#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"

#include <stdbool.h>





int main() {



/*

scenario: test_strip

uuid: 583305641

*/

/*

board is either vertical or horizontal strip

*/

gamma_t* board = gamma_new(1, 52, 8, 4);

assert( board != NULL );





assert( gamma_move(board, 1, 0, 22) == 1 );

assert( gamma_move(board, 2, 1, 24) == 0 );

assert( gamma_move(board, 3, 1, 31) == 0 );

assert( gamma_move(board, 4, 0, 45) == 1 );

assert( gamma_move(board, 5, 0, 38) == 1 );

assert( gamma_move(board, 6, 1, 7) == 0 );

assert( gamma_move(board, 7, 1, 40) == 0 );

assert( gamma_move(board, 8, 1, 12) == 0 );

assert( gamma_move(board, 1, 0, 50) == 1 );

assert( gamma_move(board, 2, 1, 20) == 0 );

assert( gamma_move(board, 3, 1, 8) == 0 );

assert( gamma_move(board, 4, 1, 38) == 0 );

assert( gamma_move(board, 5, 1, 25) == 0 );

assert( gamma_move(board, 6, 0, 6) == 1 );

assert( gamma_move(board, 7, 1, 10) == 0 );

assert( gamma_move(board, 8, 0, 47) == 1 );

assert( gamma_move(board, 1, 0, 26) == 1 );

assert( gamma_move(board, 2, 1, 34) == 0 );

assert( gamma_move(board, 3, 1, 37) == 0 );

assert( gamma_move(board, 4, 0, 16) == 1 );

assert( gamma_move(board, 5, 0, 2) == 1 );

assert( gamma_move(board, 6, 1, 20) == 0 );

assert( gamma_move(board, 7, 1, 28) == 0 );

assert( gamma_move(board, 8, 0, 6) == 0 );

assert( gamma_move(board, 1, 1, 26) == 0 );

assert( gamma_move(board, 2, 0, 36) == 1 );

assert( gamma_move(board, 3, 1, 3) == 0 );

assert( gamma_move(board, 4, 1, 24) == 0 );

assert( gamma_move(board, 5, 0, 46) == 1 );

assert( gamma_move(board, 6, 0, 3) == 1 );

assert( gamma_move(board, 7, 1, 19) == 0 );

assert( gamma_move(board, 8, 1, 44) == 0 );

assert( gamma_move(board, 1, 0, 36) == 0 );

assert(gamma_golden_possible(board, 1) == 1);
assert( gamma_busy_fields(board, 1) == 3 );

assert( gamma_free_fields(board, 1) == 40 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 1 );

assert( gamma_free_fields(board, 2) == 40 );

assert( gamma_golden_move(board, 1, 0, 38) == 1 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 0 );

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

assert( gamma_golden_move(board, 1, 1, 1) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 0 );

assert( gamma_free_fields(board, 7) == 40 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 1 );

assert( gamma_free_fields(board, 8) == 40 );

assert( gamma_move(board, 2, 0, 13) == 1 );

assert( gamma_move(board, 3, 0, 40) == 1 );

assert( gamma_move(board, 4, 0, 50) == 0 );

assert( gamma_move(board, 5, 1, 3) == 0 );

assert( gamma_move(board, 6, 1, 30) == 0 );

assert( gamma_move(board, 7, 0, 27) == 1 );

assert( gamma_move(board, 8, 1, 25) == 0 );

assert( gamma_move(board, 1, 1, 19) == 0 );

assert( gamma_move(board, 2, 1, 24) == 0 );

assert( gamma_move(board, 3, 1, 10) == 0 );

assert( gamma_move(board, 4, 0, 2) == 0 );

assert( gamma_move(board, 5, 1, 42) == 0 );

assert( gamma_move(board, 6, 1, 46) == 0 );

assert( gamma_move(board, 7, 1, 45) == 0 );

assert( gamma_move(board, 8, 1, 6) == 0 );

assert( gamma_move(board, 1, 0, 44) == 0 );

assert( gamma_move(board, 2, 1, 16) == 0 );

assert( gamma_move(board, 3, 1, 47) == 0 );

assert( gamma_move(board, 4, 1, 2) == 0 );

assert( gamma_move(board, 5, 1, 11) == 0 );

assert( gamma_move(board, 6, 1, 43) == 0 );

assert( gamma_move(board, 7, 1, 50) == 0 );

assert( gamma_move(board, 8, 0, 32) == 1 );

assert( gamma_move(board, 1, 1, 10) == 0 );

assert( gamma_move(board, 2, 1, 45) == 0 );

assert( gamma_move(board, 3, 1, 9) == 0 );

assert( gamma_move(board, 4, 1, 37) == 0 );

assert( gamma_move(board, 5, 1, 37) == 0 );

assert( gamma_move(board, 6, 0, 39) == 1 );

assert( gamma_move(board, 7, 0, 24) == 1 );

assert( gamma_move(board, 8, 1, 48) == 0 );

assert( gamma_move(board, 1, 1, 18) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 6 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 34 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 1 );

assert( gamma_free_fields(board, 3) == 34 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 2 );

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
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 34 );

assert( gamma_move(board, 2, 1, 52) == 0 );

assert( gamma_move(board, 3, 0, 34) == 1 );

assert( gamma_move(board, 4, 1, 40) == 0 );

assert( gamma_move(board, 5, 0, 21) == 1 );

assert( gamma_move(board, 6, 1, 35) == 0 );

assert( gamma_move(board, 7, 0, 51) == 1 );

assert( gamma_move(board, 8, 0, 46) == 0 );

assert( gamma_move(board, 1, 1, 25) == 0 );

assert( gamma_move(board, 2, 1, 7) == 0 );

assert( gamma_move(board, 3, 1, 15) == 0 );

assert( gamma_move(board, 4, 0, 15) == 1 );

assert( gamma_move(board, 5, 0, 1) == 1 );

assert( gamma_move(board, 6, 1, 10) == 0 );

assert( gamma_move(board, 7, 1, 23) == 0 );

assert( gamma_move(board, 8, 1, 1) == 0 );

assert( gamma_move(board, 1, 1, 33) == 0 );

assert( gamma_move(board, 2, 1, 32) == 0 );

assert( gamma_move(board, 3, 1, 25) == 0 );

assert( gamma_move(board, 4, 1, 15) == 0 );

assert( gamma_move(board, 5, 0, 22) == 0 );

assert( gamma_move(board, 6, 1, 45) == 0 );

assert( gamma_move(board, 7, 1, 44) == 0 );

assert( gamma_move(board, 8, 1, 8) == 0 );

assert( gamma_move(board, 1, 1, 25) == 0 );

assert( gamma_move(board, 2, 0, 50) == 0 );

assert( gamma_move(board, 3, 1, 26) == 0 );

assert( gamma_move(board, 4, 1, 16) == 0 );

assert( gamma_move(board, 5, 0, 24) == 0 );

assert( gamma_move(board, 6, 1, 21) == 0 );

assert( gamma_move(board, 7, 1, 51) == 0 );

assert( gamma_move(board, 8, 1, 51) == 0 );

assert( gamma_move(board, 1, 0, 27) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 4 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 2 );

assert( gamma_free_fields(board, 2) == 29 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 2 );

assert( gamma_free_fields(board, 3) == 29 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 29 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 4 );

assert( gamma_free_fields(board, 5) == 29 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 3 );

assert( gamma_free_fields(board, 6) == 29 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 29 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 2 );

assert( gamma_free_fields(board, 8) == 29 );

assert( gamma_move(board, 2, 0, 9) == 1 );

assert( gamma_move(board, 3, 1, 33) == 0 );

assert( gamma_move(board, 4, 0, 40) == 0 );

assert( gamma_move(board, 5, 0, 23) == 1 );

assert( gamma_move(board, 6, 0, 34) == 0 );

assert( gamma_move(board, 7, 1, 27) == 0 );

assert( gamma_move(board, 8, 0, 10) == 1 );

assert( gamma_move(board, 1, 0, 50) == 0 );

assert( gamma_move(board, 2, 1, 14) == 0 );

assert( gamma_move(board, 3, 1, 28) == 0 );

assert( gamma_move(board, 4, 1, 38) == 0 );

assert( gamma_move(board, 5, 1, 24) == 0 );

assert( gamma_move(board, 6, 1, 14) == 0 );

assert( gamma_move(board, 7, 1, 13) == 0 );

assert( gamma_move(board, 8, 0, 15) == 0 );

assert( gamma_move(board, 1, 1, 27) == 0 );

assert( gamma_move(board, 2, 1, 4) == 0 );

assert( gamma_move(board, 3, 0, 45) == 0 );

assert( gamma_move(board, 4, 1, 1) == 0 );

assert( gamma_move(board, 5, 0, 35) == 0 );

assert( gamma_move(board, 6, 0, 26) == 0 );

assert( gamma_move(board, 7, 0, 3) == 0 );

assert( gamma_move(board, 8, 0, 19) == 1 );

assert( gamma_move(board, 1, 0, 22) == 0 );

assert( gamma_move(board, 2, 1, 26) == 0 );

assert( gamma_move(board, 3, 0, 49) == 1 );

assert( gamma_move(board, 4, 1, 8) == 0 );

assert( gamma_move(board, 5, 0, 9) == 0 );

assert( gamma_move(board, 6, 0, 20) == 1 );

assert( gamma_move(board, 7, 1, 49) == 0 );

assert( gamma_move(board, 8, 1, 16) == 0 );

assert( gamma_move(board, 1, 0, 11) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 2 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 23 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 3 );

assert( gamma_free_fields(board, 3) == 23 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 23 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 1 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 3 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 23 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 5 );

assert( gamma_golden_move(board, 1, 0, 12) == 0 );

assert( gamma_move(board, 2, 1, 21) == 0 );

assert( gamma_move(board, 3, 0, 25) == 1 );

assert( gamma_move(board, 4, 1, 7) == 0 );

assert( gamma_move(board, 5, 1, 15) == 0 );

assert( gamma_move(board, 6, 1, 3) == 0 );

assert( gamma_move(board, 7, 1, 50) == 0 );

assert( gamma_move(board, 8, 1, 27) == 0 );

assert( gamma_move(board, 1, 1, 48) == 0 );

assert( gamma_move(board, 2, 1, 47) == 0 );

assert( gamma_move(board, 3, 1, 13) == 0 );

assert( gamma_move(board, 4, 1, 9) == 0 );

assert( gamma_move(board, 5, 0, 47) == 0 );

assert( gamma_move(board, 6, 0, 35) == 0 );

assert( gamma_move(board, 7, 1, 22) == 0 );

assert( gamma_move(board, 8, 0, 26) == 0 );

assert( gamma_move(board, 1, 0, 45) == 0 );

assert( gamma_move(board, 2, 1, 26) == 0 );

assert( gamma_move(board, 3, 1, 13) == 0 );

assert( gamma_move(board, 4, 1, 12) == 0 );

assert( gamma_move(board, 5, 1, 38) == 0 );

assert( gamma_move(board, 6, 0, 43) == 0 );

assert( gamma_move(board, 7, 1, 6) == 0 );

assert( gamma_move(board, 8, 1, 35) == 0 );

assert( gamma_move(board, 1, 0, 33) == 0 );

assert( gamma_move(board, 2, 0, 24) == 0 );

assert( gamma_move(board, 3, 1, 45) == 0 );

assert( gamma_move(board, 4, 1, 8) == 0 );

assert( gamma_move(board, 5, 0, 39) == 0 );

assert( gamma_move(board, 6, 0, 26) == 0 );

assert( gamma_move(board, 7, 1, 16) == 0 );

assert( gamma_move(board, 8, 1, 16) == 0 );

assert( gamma_move(board, 1, 0, 26) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 1 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 22 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 4 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 22 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 1 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 3 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 22 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 4 );

assert( gamma_free_fields(board, 8) == 5 );

assert( gamma_move(board, 2, 0, 38) == 0 );

assert( gamma_move(board, 3, 0, 3) == 0 );

assert( gamma_move(board, 4, 1, 31) == 0 );

assert( gamma_move(board, 5, 0, 3) == 0 );

assert( gamma_move(board, 6, 1, 28) == 0 );

assert( gamma_move(board, 7, 0, 13) == 0 );

assert( gamma_move(board, 8, 1, 35) == 0 );

assert( gamma_move(board, 1, 0, 12) == 0 );

assert( gamma_move(board, 2, 1, 18) == 0 );

assert( gamma_move(board, 3, 0, 26) == 0 );

assert( gamma_move(board, 4, 1, 30) == 0 );

assert( gamma_move(board, 5, 1, 20) == 0 );

assert( gamma_move(board, 6, 0, 25) == 0 );

assert( gamma_move(board, 7, 1, 28) == 0 );

assert( gamma_move(board, 8, 1, 22) == 0 );

assert( gamma_move(board, 1, 0, 49) == 0 );

assert( gamma_move(board, 2, 1, 14) == 0 );

assert( gamma_move(board, 3, 1, 8) == 0 );

assert( gamma_move(board, 4, 1, 29) == 0 );

assert( gamma_move(board, 5, 1, 52) == 0 );

assert( gamma_move(board, 6, 0, 21) == 0 );

assert( gamma_move(board, 7, 1, 41) == 0 );

assert( gamma_move(board, 8, 0, 31) == 1 );

assert( gamma_move(board, 1, 1, 30) == 0 );

assert( gamma_move(board, 2, 1, 29) == 0 );

assert( gamma_move(board, 3, 0, 3) == 0 );

assert( gamma_move(board, 4, 1, 45) == 0 );

assert( gamma_move(board, 5, 0, 50) == 0 );

assert( gamma_move(board, 6, 1, 0) == 0 );

assert( gamma_move(board, 7, 0, 6) == 0 );

assert( gamma_move(board, 8, 1, 41) == 0 );

assert( gamma_move(board, 1, 0, 47) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 1 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 21 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 4 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 21 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 5 );

assert( gamma_free_fields(board, 5) == 1 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 3 );

assert( gamma_golden_move(board, 1, 1, 1) == 0 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 3 );

assert( gamma_free_fields(board, 7) == 21 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 5 );

assert( gamma_free_fields(board, 8) == 5 );

assert( gamma_move(board, 2, 1, 4) == 0 );

assert( gamma_move(board, 3, 1, 34) == 0 );

assert( gamma_move(board, 4, 1, 35) == 0 );

assert( gamma_move(board, 5, 0, 41) == 0 );

assert( gamma_move(board, 6, 0, 51) == 0 );

assert( gamma_move(board, 7, 0, 21) == 0 );

assert( gamma_move(board, 8, 1, 35) == 0 );

assert( gamma_move(board, 1, 0, 21) == 0 );

assert( gamma_move(board, 2, 0, 2) == 0 );

assert( gamma_move(board, 3, 0, 39) == 0 );

assert( gamma_move(board, 4, 1, 9) == 0 );

assert( gamma_move(board, 5, 0, 0) == 1 );

assert( gamma_move(board, 6, 0, 12) == 0 );

assert( gamma_move(board, 7, 1, 16) == 0 );

assert( gamma_move(board, 8, 0, 33) == 1 );

assert( gamma_move(board, 1, 1, 46) == 0 );

assert( gamma_move(board, 2, 1, 30) == 0 );

assert( gamma_move(board, 3, 1, 50) == 0 );

assert( gamma_move(board, 4, 0, 19) == 0 );

assert( gamma_move(board, 5, 1, 43) == 0 );

assert( gamma_move(board, 6, 1, 11) == 0 );

assert( gamma_move(board, 7, 0, 17) == 1 );

assert( gamma_move(board, 8, 1, 47) == 0 );

assert( gamma_move(board, 1, 0, 47) == 0 );

assert( gamma_move(board, 2, 0, 51) == 0 );

assert( gamma_move(board, 3, 0, 17) == 0 );

assert( gamma_move(board, 4, 1, 43) == 0 );

assert( gamma_move(board, 5, 1, 10) == 0 );

assert( gamma_move(board, 6, 0, 19) == 0 );

assert( gamma_move(board, 7, 0, 6) == 0 );

assert( gamma_move(board, 8, 0, 38) == 0 );

assert( gamma_move(board, 1, 1, 25) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 4 );

assert( gamma_free_fields(board, 1) == 1 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 3 );

assert( gamma_free_fields(board, 2) == 18 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 3 );

assert( gamma_golden_move(board, 1, 0, 45) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 3 );

assert( gamma_free_fields(board, 4) == 18 );

assert( gamma_golden_move(board, 1, 1, 27) == 0 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 6 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 3 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 2 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 6 );

assert( gamma_free_fields(board, 8) == 4 );

assert( gamma_move(board, 2, 1, 38) == 0 );

assert( gamma_move(board, 3, 1, 46) == 0 );

assert( gamma_move(board, 4, 0, 3) == 0 );

assert( gamma_move(board, 5, 1, 52) == 0 );

assert( gamma_move(board, 6, 1, 35) == 0 );

assert( gamma_move(board, 7, 1, 2) == 0 );

assert( gamma_move(board, 8, 1, 19) == 0 );

assert( gamma_move(board, 1, 1, 30) == 0 );

assert( gamma_move(board, 2, 1, 42) == 0 );

assert( gamma_move(board, 3, 0, 36) == 0 );

assert( gamma_move(board, 4, 1, 40) == 0 );

assert( gamma_move(board, 5, 1, 51) == 0 );

assert( gamma_move(board, 6, 1, 41) == 0 );

assert( gamma_move(board, 7, 1, 4) == 0 );

assert( gamma_move(board, 8, 0, 43) == 0 );

assert( gamma_move(board, 1, 0, 37) == 1 );

assert( gamma_move(board, 2, 0, 48) == 1 );

assert( gamma_move(board, 3, 1, 23) == 0 );

assert( gamma_move(board, 4, 0, 43) == 1 );

assert( gamma_move(board, 5, 0, 13) == 0 );

assert( gamma_move(board, 6, 1, 37) == 0 );

assert( gamma_move(board, 7, 1, 30) == 0 );

assert( gamma_move(board, 8, 1, 13) == 0 );

assert( gamma_move(board, 1, 0, 33) == 0 );

assert( gamma_move(board, 2, 0, 20) == 0 );

assert( gamma_move(board, 3, 0, 13) == 0 );

assert( gamma_move(board, 4, 1, 0) == 0 );

assert( gamma_move(board, 5, 0, 2) == 0 );

assert( gamma_move(board, 6, 0, 6) == 0 );

assert( gamma_move(board, 7, 0, 51) == 0 );

assert( gamma_move(board, 8, 1, 30) == 0 );

assert(gamma_golden_possible(board, 1) == 0);
assert( gamma_busy_fields(board, 1) == 5 );

assert( gamma_free_fields(board, 1) == 0 );

assert(gamma_golden_possible(board, 2) == 1);
assert( gamma_busy_fields(board, 2) == 4 );

assert( gamma_free_fields(board, 2) == 4 );

assert(gamma_golden_possible(board, 3) == 1);
assert( gamma_busy_fields(board, 3) == 4 );

assert( gamma_free_fields(board, 3) == 2 );

assert( gamma_golden_move(board, 8, 0, 45) == 0 );

assert(gamma_golden_possible(board, 4) == 1);
assert( gamma_busy_fields(board, 4) == 4 );

assert( gamma_free_fields(board, 4) == 15 );

assert(gamma_golden_possible(board, 5) == 1);
assert( gamma_busy_fields(board, 5) == 6 );

assert( gamma_free_fields(board, 5) == 0 );

assert(gamma_golden_possible(board, 6) == 1);
assert( gamma_busy_fields(board, 6) == 4 );

assert( gamma_free_fields(board, 6) == 3 );

assert(gamma_golden_possible(board, 7) == 1);
assert( gamma_busy_fields(board, 7) == 4 );

assert( gamma_free_fields(board, 7) == 2 );

assert(gamma_golden_possible(board, 8) == 1);
assert( gamma_busy_fields(board, 8) == 6 );

assert( gamma_free_fields(board, 8) == 3 );





gamma_delete(board);



    return 0;

}

