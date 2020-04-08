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
uuid: 800793802
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 13, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );


char* board352082822 = gamma_board(board);
assert( board352082822 != NULL );
assert( strcmp(board352082822, 
"......4.\n"
"....1...\n"
"........\n"
"....1...\n"
"2.......\n"
"...4....\n"
"........\n"
"........\n"
"........\n"
".3......\n") == 0);
free(board352082822);
board352082822 = NULL;
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );


char* board709287910 = gamma_board(board);
assert( board709287910 != NULL );
assert( strcmp(board709287910, 
"......4.\n"
"....1...\n"
"........\n"
"...51...\n"
"2.......\n"
"...4....\n"
"....5...\n"
"........\n"
"........\n"
".3......\n") == 0);
free(board709287910);
board709287910 = NULL;
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 10, 5, 6) == 1 );
assert( gamma_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 12, 0, 7) == 1 );
assert( gamma_free_fields(board, 12) == 64 );
assert( gamma_move(board, 13, 3, 8) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_golden_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_free_fields(board, 9) == 53 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 2, 3) == 1 );
assert( gamma_move(board, 12, 2, 0) == 1 );
assert( gamma_move(board, 12, 2, 4) == 1 );
assert( gamma_move(board, 13, 5, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_golden_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_free_fields(board, 9) == 40 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 11, 9, 1) == 0 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 7, 3) == 0 );
assert( gamma_move(board, 13, 4, 1) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_free_fields(board, 4) == 37 );


char* board550541506 = gamma_board(board);
assert( board550541506 != NULL );
assert( strcmp(board550541506, 
".....74.\n"
"...131.93\n"
"12...182.\n"
"...511025\n"
"214..8..\n"
"..124..10.\n"
".311115168\n"
"5686.4.7\n"
"..8.99..\n"
".3126..115\n") == 0);
free(board550541506);
board550541506 = NULL;
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );


char* board553205337 = gamma_board(board);
assert( board553205337 != NULL );
assert( strcmp(board553205337, 
".....74.\n"
"...131.93\n"
"12...1826\n"
"...511025\n"
"214..8..\n"
"..124..10.\n"
".311115168\n"
"5686.4.7\n"
"..8.99..\n"
".3126..115\n") == 0);
free(board553205337);
board553205337 = NULL;
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_free_fields(board, 7) == 36 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 10, 4, 4) == 1 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 12, 4, 5) == 1 );
assert( gamma_move(board, 12, 0, 2) == 0 );


char* board915864006 = gamma_board(board);
assert( board915864006 != NULL );
assert( strcmp(board915864006, 
".....74.\n"
"...131.93\n"
"12...1826\n"
"...511025\n"
"214.128..\n"
"..12410.10.\n"
".311115168\n"
"5686.4.7\n"
"..8.99..\n"
".3126..115\n") == 0);
free(board915864006);
board915864006 = NULL;
assert( gamma_move(board, 13, 5, 4) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_golden_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_golden_move(board, 12, 6, 5) == 0 );
assert( gamma_move(board, 13, 5, 8) == 1 );
assert( gamma_busy_fields(board, 13) == 3 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 7, 3) == 0 );


char* board201675904 = gamma_board(board);
assert( board201675904 != NULL );
assert( strcmp(board201675904, 
".....74.\n"
"...1311393\n"
"1236.1826\n"
"7.4511025\n"
"214.128..\n"
".8124101310.\n"
".311115178\n"
"5686.3.7\n"
"..8.99..\n"
".3126..115\n") == 0);
free(board201675904);
board201675904 = NULL;
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 10, 9, 3) == 0 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_move(board, 12, 0, 2) == 0 );


char* board264907928 = gamma_board(board);
assert( board264907928 != NULL );
assert( strcmp(board264907928, 
".....74.\n"
"10..1311393\n"
"1236.1826\n"
"7.4511025\n"
"214.128..\n"
".8124101310.\n"
".311115178\n"
"5686.3.7\n"
"..8.99..\n"
".3126..115\n") == 0);
free(board264907928);
board264907928 = NULL;
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );


char* board431622168 = gamma_board(board);
assert( board431622168 != NULL );
assert( strcmp(board431622168, 
".....74.\n"
"10..1311393\n"
"1236.1826\n"
"7.4511025\n"
"214.128..\n"
".8124101310.\n"
".311115178\n"
"568653.7\n"
"..8.992.\n"
"73126..115\n") == 0);
free(board431622168);
board431622168 = NULL;
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 9, 4) == 0 );
assert( gamma_move(board, 12, 0, 8) == 0 );
assert( gamma_free_fields(board, 12) == 22 );


char* board178631972 = gamma_board(board);
assert( board178631972 != NULL );
assert( strcmp(board178631972, 
".....74.\n"
"10..1311393\n"
"1236.1826\n"
"7.4511025\n"
"214.128..\n"
".8124101310.\n"
".311115178\n"
"568653.7\n"
"..8.992.\n"
"7312611.115\n") == 0);
free(board178631972);
board178631972 = NULL;
assert( gamma_move(board, 13, 3, 0) == 0 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_move(board, 10, 7, 4) == 1 );


char* board415744177 = gamma_board(board);
assert( board415744177 != NULL );
assert( strcmp(board415744177, 
".....74.\n"
"10..1311393\n"
"123661826\n"
"7.4511025\n"
"214.128..\n"
".812410131010\n"
".311115178\n"
"568653.7\n"
"..8.992.\n"
"73126114115\n") == 0);
free(board415744177);
board415744177 = NULL;
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_move(board, 11, 2, 9) == 1 );
assert( gamma_move(board, 12, 8, 1) == 0 );
assert( gamma_move(board, 12, 7, 3) == 0 );


char* board722513657 = gamma_board(board);
assert( board722513657 != NULL );
assert( strcmp(board722513657, 
"..11..74.\n"
"10..1311393\n"
"123661826\n"
"7.4511025\n"
"214.128..\n"
".812410131010\n"
".311115178\n"
"568653.7\n"
".118.992.\n"
"73126114115\n") == 0);
free(board722513657);
board722513657 = NULL;
assert( gamma_move(board, 13, 0, 8) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_golden_move(board, 10, 4, 2) == 1 );
assert( gamma_move(board, 12, 9, 0) == 0 );
assert( gamma_move(board, 12, 4, 3) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );


char* board969462752 = gamma_board(board);
assert( board969462752 != NULL );
assert( strcmp(board969462752, 
"..11..74.\n"
"10..1311393\n"
"123661826\n"
"7.4511025\n"
"214.128..\n"
".812410131010\n"
"4311115178\n"
"568610397\n"
".118.992.\n"
"73126114115\n") == 0);
free(board969462752);
board969462752 = NULL;
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_free_fields(board, 8) == 15 );


char* board741737429 = gamma_board(board);
assert( board741737429 != NULL );
assert( strcmp(board741737429, 
"..11..74.\n"
"10..1311393\n"
"123661826\n"
"7.4511025\n"
"214.128..\n"
".812410131010\n"
"4311115178\n"
"568610397\n"
".118.992.\n"
"73126114115\n") == 0);
free(board741737429);
board741737429 = NULL;
assert( gamma_move(board, 9, 6, 9) == 0 );
assert( gamma_move(board, 9, 2, 8) == 1 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 12, 5, 7) == 0 );
assert( gamma_move(board, 12, 5, 3) == 0 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_move(board, 13, 1, 9) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );


char* board418697365 = gamma_board(board);
assert( board418697365 != NULL );
assert( strcmp(board418697365, 
".1311..74.\n"
"10.91311393\n"
"123661826\n"
"7.4511025\n"
"214.128..\n"
".812410131010\n"
"4311115178\n"
"568610397\n"
"4118.992.\n"
"73126114115\n") == 0);
free(board418697365);
board418697365 = NULL;
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_free_fields(board, 9) == 12 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 11, 9, 3) == 0 );
assert( gamma_move(board, 12, 5, 3) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_golden_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_move(board, 11, 1, 8) == 1 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 12, 5, 7) == 0 );
assert( gamma_move(board, 12, 5, 3) == 0 );
assert( gamma_move(board, 13, 2, 6) == 0 );
assert( gamma_move(board, 13, 7, 6) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );


gamma_delete(board);

    return 0;
}
