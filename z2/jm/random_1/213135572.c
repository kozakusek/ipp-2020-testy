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
uuid: 213135572
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 5, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_free_fields(board, 2) == 89 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_free_fields(board, 5) == 76 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 75 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );


char* board453093995 = gamma_board(board);
assert( board453093995 != NULL );
assert( strcmp(board453093995, 
".5..34.23\n"
"...51....\n"
".........\n"
"..1..4.2.\n"
"5.....44.\n"
"......2..\n"
".4.......\n"
".........\n"
"1.1......\n"
"..13.....\n") == 0);
free(board453093995);
board453093995 = NULL;
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board224467841 = gamma_board(board);
assert( board224467841 != NULL );
assert( strcmp(board224467841, 
".5..34.23\n"
"...51....\n"
".........\n"
"..1..4.23\n"
"5.....44.\n"
".....52..\n"
".4.......\n"
".........\n"
"1.1......\n"
"..13..2..\n") == 0);
free(board224467841);
board224467841 = NULL;
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );


char* board126056130 = gamma_board(board);
assert( board126056130 != NULL );
assert( strcmp(board126056130, 
".5.534.23\n"
"...51....\n"
".........\n"
"..1..4.23\n"
"5.....44.\n"
".....52..\n"
".4.......\n"
".........\n"
"1.1......\n"
"..13..2..\n") == 0);
free(board126056130);
board126056130 = NULL;
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );


char* board576046287 = gamma_board(board);
assert( board576046287 != NULL );
assert( strcmp(board576046287, 
".5.534.23\n"
"...51....\n"
".........\n"
"..1..4.23\n"
"5.....44.\n"
".....52..\n"
".4.......\n"
".........\n"
"1.1......\n"
"..13..2..\n") == 0);
free(board576046287);
board576046287 = NULL;
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );


char* board633698475 = gamma_board(board);
assert( board633698475 != NULL );
assert( strcmp(board633698475, 
".5.534.23\n"
"...51....\n"
".........\n"
"..1..4.23\n"
"5.....44.\n"
".....52..\n"
".4.......\n"
".........\n"
"1.1......\n"
"..13..2..\n") == 0);
free(board633698475);
board633698475 = NULL;
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


gamma_delete(board);

    return 0;
}
