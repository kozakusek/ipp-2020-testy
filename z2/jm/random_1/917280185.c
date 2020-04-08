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
uuid: 917280185
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 9, 11, 7);
assert( board != NULL );


assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_golden_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_free_fields(board, 6) == 105 );
assert( gamma_golden_move(board, 6, 7, 10) == 0 );


char* board194485513 = gamma_board(board);
assert( board194485513 != NULL );
assert( strcmp(board194485513, 
".........5..\n"
"........4...\n"
"............\n"
"............\n"
"............\n"
"..2.........\n"
"............\n"
"............\n"
"............\n") == 0);
free(board194485513);
board194485513 = NULL;
assert( gamma_move(board, 7, 8, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 10, -1, 8) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 1) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 103 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_free_fields(board, 6) == 101 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_move(board, 11, 9, -1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 8, 10, 6) == 1 );


char* board381490209 = gamma_board(board);
assert( board381490209 != NULL );
assert( strcmp(board381490209, 
".........5..\n"
"........4...\n"
"..........8.\n"
".........4..\n"
"..2.........\n"
"..2.........\n"
"........5...\n"
"...5.9114....\n"
"............\n") == 0);
free(board381490209);
board381490209 = NULL;
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_free_fields(board, 9) == 97 );
assert( gamma_move(board, 10, 10, 1) == 1 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );


char* board909778643 = gamma_board(board);
assert( board909778643 != NULL );
assert( strcmp(board909778643, 
".........5..\n"
"........4...\n"
"..........8.\n"
".........4..\n"
"..2.........\n"
"..211........\n"
"........5...\n"
"...5.9114..10.\n"
"1...........\n") == 0);
free(board909778643);
board909778643 = NULL;
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_free_fields(board, 2) == 93 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 92 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_free_fields(board, 4) == 91 );
assert( gamma_golden_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_free_fields(board, 7) == 90 );


char* board344630209 = gamma_board(board);
assert( board344630209 != NULL );
assert( strcmp(board344630209, 
".62......5..\n"
"........4...\n"
"..........8.\n"
"..3.4....4..\n"
"..2.........\n"
"..211........\n"
"........5...\n"
"...5.9114..10.\n"
"1...........\n") == 0);
free(board344630209);
board344630209 = NULL;
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 7, 5) == 1 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 85 );


char* board837851489 = gamma_board(board);
assert( board837851489 != NULL );
assert( strcmp(board837851489, 
".62......5..\n"
"........4...\n"
"..........8.\n"
"..3.4..10.4..\n"
"..2.........\n"
"11.21........\n"
"........5...\n"
"...5.91149.10.\n"
"1.1...2.....\n") == 0);
free(board837851489);
board837851489 = NULL;
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_free_fields(board, 6) == 83 );
assert( gamma_move(board, 7, -1, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 7, -1) == 0 );
assert( gamma_move(board, 10, 9, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 8, 6) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );


char* board156898015 = gamma_board(board);
assert( board156898015 != NULL );
assert( strcmp(board156898015, 
".62......5..\n"
"........4...\n"
"........1158.\n"
"..3.4..10.4..\n"
"..2......5..\n"
"11.21......6.\n"
"........5..4\n"
"...5.911491010.\n"
"1.1...2.....\n") == 0);
free(board156898015);
board156898015 = NULL;
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_free_fields(board, 8) == 77 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 11, 5, 3) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 9, 10, 2) == 1 );
assert( gamma_move(board, 10, -1, 8) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 2, 6) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_golden_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 10, 9, -1) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 12, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 11, 3, 6) == 1 );
assert( gamma_free_fields(board, 11) == 67 );
assert( gamma_move(board, 3, 11, -1) == 0 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 5, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 5) == 0 );


gamma_delete(board);

    return 0;
}
