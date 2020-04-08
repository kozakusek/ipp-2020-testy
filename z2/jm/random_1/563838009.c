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
uuid: 563838009
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 10, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_golden_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );


char* board248769480 = gamma_board(board);
assert( board248769480 != NULL );
assert( strcmp(board248769480, 
".1...2......\n"
"............\n"
"...........4\n"
"............\n"
"............\n"
"............\n"
"....5.......\n"
"............\n"
"............\n"
"3.........2.\n") == 0);
free(board248769480);
board248769480 = NULL;
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 100 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );


char* board357592699 = gamma_board(board);
assert( board357592699 != NULL );
assert( strcmp(board357592699, 
".1...2...5..\n"
"..3...4.....\n"
".........5.4\n"
".....2......\n"
"....1...1...\n"
"21.2....5...\n"
".1..51......\n"
"............\n"
"......4.....\n"
"3....5.1..2.\n") == 0);
free(board357592699);
board357592699 = NULL;
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 5, 12, -1) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_golden_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );


char* board615771546 = gamma_board(board);
assert( board615771546 != NULL );
assert( strcmp(board615771546, 
"311..2...5..\n"
"..32..4.....\n"
".........5.4\n"
".....2......\n"
"....1...1.3.\n"
"2152....5...\n"
".15.51......\n"
"......3.....\n"
".....24.2...\n"
"3....511..24\n") == 0);
free(board615771546);
board615771546 = NULL;
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );


char* board548424329 = gamma_board(board);
assert( board548424329 != NULL );
assert( strcmp(board548424329, 
"311..2.4.5..\n"
"..32..4.....\n"
"...3.....5.4\n"
".....2......\n"
"....1...1.3.\n"
"2152....5...\n"
".15.51......\n"
"......3.....\n"
".3.1.24.2...\n"
"3....511..24\n") == 0);
free(board548424329);
board548424329 = NULL;
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_free_fields(board, 1) == 83 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_free_fields(board, 2) == 21 );


char* board543225679 = gamma_board(board);
assert( board543225679 != NULL );
assert( strcmp(board543225679, 
"311..2.4.5..\n"
"..32..4.....\n"
"...3.....5.4\n"
".....2..5...\n"
"....1...1.3.\n"
"2152....5...\n"
".15.51......\n"
"......3.....\n"
".3.1.24.2...\n"
"3....511.124\n") == 0);
free(board543225679);
board543225679 = NULL;
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );


char* board529341945 = gamma_board(board);
assert( board529341945 != NULL );
assert( strcmp(board529341945, 
"311..2.4.55.\n"
"..32..4.....\n"
"...3.4...5.4\n"
"....52..34..\n"
"....1...1.3.\n"
"21522...5...\n"
".15.51......\n"
"......3.....\n"
".3.1.24.2...\n"
"3....511.124\n") == 0);
free(board529341945);
board529341945 = NULL;
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_golden_move(board, 5, 2, 4) == 0 );


char* board103783007 = gamma_board(board);
assert( board103783007 != NULL );
assert( strcmp(board103783007, 
"311..2.4.55.\n"
"..32..4.....\n"
"...3.4...544\n"
"....52..34..\n"
"....1...1.3.\n"
"21522...5...\n"
".15.51......\n"
"......3.....\n"
".3.1.24.2...\n"
"35...511.124\n") == 0);
free(board103783007);
board103783007 = NULL;


gamma_delete(board);

    return 0;
}
