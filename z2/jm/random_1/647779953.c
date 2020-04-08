#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_random_actions
uuid: 647779953
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 13, 5, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 1, 11, 10) == 1 );


char* board241984969 = gamma_board(board);
assert( board241984969 != NULL );
assert( strcmp(board241984969, 
".............\n"
".............\n"
"...........1.\n"
".............\n"
"..2..........\n"
"........1....\n"
"............2\n"
".......1.....\n"
".......5.....\n"
".............\n"
".............\n"
".............\n"
"............3\n") == 0);
free(board241984969);
board241984969 = NULL;
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_free_fields(board, 5) == 155 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 1, 11, -1) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 4, 12, -1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_free_fields(board, 3) == 13 );


char* board548898010 = gamma_board(board);
assert( board548898010 != NULL );
assert( strcmp(board548898010, 
".5...........\n"
".............\n"
".........2.1.\n"
"3.........4..\n"
"..2....3...2.\n"
"........1....\n"
"..........1.2\n"
".......1.....\n"
"..4....5.....\n"
".............\n"
"....5........\n"
"4.....5...3..\n"
"............3\n") == 0);
free(board548898010);
board548898010 = NULL;
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );


char* board508914242 = gamma_board(board);
assert( board508914242 != NULL );
assert( strcmp(board508914242, 
".5...........\n"
".5...........\n"
".........2.1.\n"
"3.........4..\n"
"4.2....3...2.\n"
"........1....\n"
"..........1.2\n"
".......1.....\n"
"..4....5.....\n"
".............\n"
"....5........\n"
"4.....5...3..\n"
"..........3.3\n") == 0);
free(board508914242);
board508914242 = NULL;
assert( gamma_move(board, 5, 9, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 13, -1) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 1, -1, 12) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 11, -1) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 13, -1) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );


char* board963444436 = gamma_board(board);
assert( board963444436 != NULL );
assert( strcmp(board963444436, 
".5...........\n"
".5...........\n"
".........2.1.\n"
"3.........4..\n"
"4.2....3...2.\n"
"........1....\n"
"..........1.2\n"
".......1.....\n"
"..4....5.....\n"
".............\n"
"....5........\n"
"4.....5...3..\n"
"..........3.3\n") == 0);
free(board963444436);
board963444436 = NULL;
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_golden_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_golden_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, -1, 12) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );


char* board724813676 = gamma_board(board);
assert( board724813676 != NULL );
assert( strcmp(board724813676, 
".5...........\n"
".5...........\n"
".........2.1.\n"
"3.........4..\n"
"4.2....3...2.\n"
"........1....\n"
"..........1.2\n"
".......1.....\n"
"..4....5.....\n"
".............\n"
"....5........\n"
"4.....5...3..\n"
"..........3.3\n") == 0);
free(board724813676);
board724813676 = NULL;
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_golden_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 11, 9) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 1, 12, 10) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );


char* board434079472 = gamma_board(board);
assert( board434079472 != NULL );
assert( strcmp(board434079472, 
".5...........\n"
".5...........\n"
".........2.11\n"
"3.........42.\n"
"4.2...33...2.\n"
"........1....\n"
"..........1.2\n"
".......1.....\n"
"..4....5.....\n"
".............\n"
"....5........\n"
"4.....5...3..\n"
"..........3.3\n") == 0);
free(board434079472);
board434079472 = NULL;
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 13) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 4, 12) == 0 );


char* board560218020 = gamma_board(board);
assert( board560218020 != NULL );
assert( strcmp(board560218020, 
".5...........\n"
".5...........\n"
".........2.11\n"
"3.........42.\n"
"4.2...33...2.\n"
"4.......1....\n"
"..........1.2\n"
".......1.....\n"
"..4....5.....\n"
".............\n"
"....5........\n"
"4.....5...3..\n"
"..........3.3\n") == 0);
free(board560218020);
board560218020 = NULL;
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );


gamma_delete(board);

    return 0;
}
