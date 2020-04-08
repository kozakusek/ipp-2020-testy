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
uuid: 445175368
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 15, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 11, 8) == 1 );


char* board334240250 = gamma_board(board);
assert( board334240250 != NULL );
assert( strcmp(board334240250, 
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"...........3..\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"2..........1..\n"
"..............\n"
"..............\n") == 0);
free(board334240250);
board334240250 = NULL;
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_free_fields(board, 3) == 204 );
assert( gamma_move(board, 4, 11, 11) == 1 );
assert( gamma_move(board, 1, 8, 14) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 199 );
assert( gamma_move(board, 2, 6, 14) == 1 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 1, 0, 15) == 0 );
assert( gamma_free_fields(board, 1) == 197 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );


char* board460934145 = gamma_board(board);
assert( board460934145 != NULL );
assert( strcmp(board460934145, 
"......2.1.....\n"
"....1.........\n"
"..............\n"
"..1........4..\n"
".......2......\n"
"..............\n"
"...........3..\n"
"..............\n"
"............4.\n"
"..............\n"
".........32...\n"
"..............\n"
"2..........12.\n"
"............4.\n"
"..............\n") == 0);
free(board460934145);
board460934145 = NULL;
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_golden_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 1, 14, 15) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );


char* board274870864 = gamma_board(board);
assert( board274870864 != NULL );
assert( strcmp(board274870864, 
"......2.1.....\n"
"3...1.........\n"
"..............\n"
"..11....4..4..\n"
".4....22......\n"
"..............\n"
"...........3..\n"
"..............\n"
"...........44.\n"
"..............\n"
".........32...\n"
"..............\n"
"2..1....3..12.\n"
"..3.........4.\n"
"..............\n") == 0);
free(board274870864);
board274870864 = NULL;
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 13) == 1 );


char* board389463905 = gamma_board(board);
assert( board389463905 != NULL );
assert( strcmp(board389463905, 
"......2.1.....\n"
"3...1...1.....\n"
"..............\n"
"..11....4..4..\n"
".4....22......\n"
"..............\n"
"...........3..\n"
"..............\n"
"...........44.\n"
"..............\n"
".........32...\n"
"..............\n"
"2..1....3..12.\n"
"..3.........4.\n"
"..............\n") == 0);
free(board389463905);
board389463905 = NULL;
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board249246410 = gamma_board(board);
assert( board249246410 != NULL );
assert( strcmp(board249246410, 
"......2.1.....\n"
"3...1...1.....\n"
"..............\n"
"..11....4..4..\n"
".4....22......\n"
"..............\n"
"...........3..\n"
"..............\n"
"...........44.\n"
"..............\n"
".........32...\n"
"..............\n"
"2..1....3..12.\n"
"..3.........4.\n"
"..............\n") == 0);
free(board249246410);
board249246410 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 14, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board674261761 = gamma_board(board);
assert( board674261761 != NULL );
assert( strcmp(board674261761, 
"......2.1.....\n"
"3...1...1.....\n"
"..............\n"
".111....4..4..\n"
".4....22......\n"
"..............\n"
"...........3..\n"
"..............\n"
"...........44.\n"
"..............\n"
".........32...\n"
"..............\n"
"2..1....3..12.\n"
"..3.........4.\n"
"..............\n") == 0);
free(board674261761);
board674261761 = NULL;
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );


char* board481641219 = gamma_board(board);
assert( board481641219 != NULL );
assert( strcmp(board481641219, 
"......2.1.....\n"
"3...1...1.....\n"
"..............\n"
".111....4..4..\n"
".4....22......\n"
"..............\n"
"...........3..\n"
"..............\n"
"...........44.\n"
"..............\n"
".........32...\n"
"..............\n"
"2..1....3..12.\n"
"..3.........4.\n"
"..............\n") == 0);
free(board481641219);
board481641219 = NULL;
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );


char* board362152107 = gamma_board(board);
assert( board362152107 != NULL );
assert( strcmp(board362152107, 
"......2.1.....\n"
"3...1...1.....\n"
"..............\n"
".111....4..4..\n"
".4....22......\n"
"..............\n"
"...........3..\n"
"..............\n"
"...........44.\n"
"..............\n"
".........32...\n"
"..............\n"
"2..1....3..12.\n"
"..3.........4.\n"
"..............\n") == 0);
free(board362152107);
board362152107 = NULL;
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 11, 15) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_golden_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board437246976 = gamma_board(board);
assert( board437246976 != NULL );
assert( strcmp(board437246976, 
"......2.1.....\n"
"3...1...1.....\n"
"....1.........\n"
".111....4..4..\n"
".4....22......\n"
"..............\n"
"...........3..\n"
"...........4..\n"
"...........44.\n"
"..............\n"
".........322..\n"
"..............\n"
"2..1....3..12.\n"
"..3.....3...4.\n"
"..............\n") == 0);
free(board437246976);
board437246976 = NULL;
assert( gamma_move(board, 1, 1, 7) == 0 );


char* board297108590 = gamma_board(board);
assert( board297108590 != NULL );
assert( strcmp(board297108590, 
"......2.1.....\n"
"3...1...1.....\n"
"....1.........\n"
".111....4..4..\n"
".4....22......\n"
"..............\n"
"...........3..\n"
"...........4..\n"
"...........44.\n"
"..............\n"
".........322..\n"
"..............\n"
"2..1....3..12.\n"
"..3.....3...4.\n"
"..............\n") == 0);
free(board297108590);
board297108590 = NULL;
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 13, 15) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, 15) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_golden_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );


gamma_delete(board);

    return 0;
}
