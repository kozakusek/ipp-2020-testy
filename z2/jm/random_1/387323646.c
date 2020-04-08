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
uuid: 387323646
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 8, 12, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );


char* board944908991 = gamma_board(board);
assert( board944908991 != NULL );
assert( strcmp(board944908991, 
".............\n"
"........1....\n"
".............\n"
".........2...\n"
".............\n"
".............\n"
".............\n"
".....3.......\n") == 0);
free(board944908991);
board944908991 = NULL;
assert( gamma_move(board, 7, 12, 1) == 1 );
assert( gamma_free_fields(board, 8) == 100 );
assert( gamma_move(board, 10, 6, -1) == 0 );
assert( gamma_move(board, 11, 12, 1) == 0 );
assert( gamma_move(board, 12, 13, 8) == 0 );


char* board979300871 = gamma_board(board);
assert( board979300871 != NULL );
assert( strcmp(board979300871, 
".............\n"
"........1....\n"
".............\n"
".........2...\n"
".............\n"
".............\n"
"............7\n"
".....3.......\n") == 0);
free(board979300871);
board979300871 = NULL;
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 13, -1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_free_fields(board, 6) == 96 );
assert( gamma_move(board, 7, 11, 3) == 1 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_move(board, 9, 11, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 10, 7) == 1 );
assert( gamma_move(board, 11, 1, 4) == 1 );
assert( gamma_golden_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_free_fields(board, 3) == 91 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_golden_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 9, 11, 0) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_free_fields(board, 2) == 88 );


char* board589371150 = gamma_board(board);
assert( board589371150 != NULL );
assert( strcmp(board589371150, 
"5.........10..\n"
".......21....\n"
".............\n"
".11.......2...\n"
".........4.7.\n"
"6...32.....9.\n"
"............7\n"
".....36....9.\n") == 0);
free(board589371150);
board589371150 = NULL;
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 87 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_free_fields(board, 6) == 86 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 11, 6, 4) == 1 );
assert( gamma_move(board, 12, 11, 2) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );


char* board758358375 = gamma_board(board);
assert( board758358375 != NULL );
assert( strcmp(board758358375, 
"5..2......10.4\n"
".......21....\n"
".............\n"
".11....11..2...\n"
"........94.7.\n"
"6...32.....9.\n"
"............7\n"
".5...36....9.\n") == 0);
free(board758358375);
board758358375 = NULL;
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_free_fields(board, 5) == 82 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_free_fields(board, 6) == 82 );


char* board496069160 = gamma_board(board);
assert( board496069160 != NULL );
assert( strcmp(board496069160, 
"5..2......10.4\n"
".....4.21....\n"
".............\n"
".11....11..2...\n"
"........94.7.\n"
"6...32.....9.\n"
"............7\n"
".5...36....9.\n") == 0);
free(board496069160);
board496069160 = NULL;
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 10, 6, 5) == 1 );
assert( gamma_move(board, 11, 6, 0) == 0 );
assert( gamma_move(board, 12, 6, 6) == 1 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 9, 9, 7) == 1 );


char* board481650443 = gamma_board(board);
assert( board481650443 != NULL );
assert( strcmp(board481650443, 
"5..2.....910.4\n"
".....41221....\n"
"......10......\n"
".11....11..2...\n"
"........94.7.\n"
"6...32.6..39.\n"
".....9......7\n"
".5...36....9.\n") == 0);
free(board481650443);
board481650443 = NULL;
assert( gamma_move(board, 11, -1, -1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );


char* board479785790 = gamma_board(board);
assert( board479785790 != NULL );
assert( strcmp(board479785790, 
"5..2.....910.4\n"
".....41221....\n"
"......10......\n"
".11....113.2...\n"
"........94.74\n"
"6...32.6..39.\n"
".....9..7...7\n"
".5...36....9.\n") == 0);
free(board479785790);
board479785790 = NULL;
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 11, 9, 3) == 0 );
assert( gamma_move(board, 12, 4, 8) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 7, 7, -1) == 0 );
assert( gamma_free_fields(board, 7) == 72 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 10, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_free_fields(board, 1) == 71 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );


gamma_delete(board);

    return 0;
}
