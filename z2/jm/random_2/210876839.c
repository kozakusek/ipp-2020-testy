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
uuid: 210876839
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 9, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 7, 1) == 0 );


char* board778624559 = gamma_board(board);
assert( board778624559 != NULL );
assert( strcmp(board778624559, 
".....2\n"
"......\n"
"......\n"
"......\n"
"......\n"
"...21.\n"
"......\n"
"..3...\n"
"......\n"
"......\n") == 0);
free(board778624559);
board778624559 = NULL;
assert( gamma_move(board, 5, 6, 4) == 0 );


char* board722903161 = gamma_board(board);
assert( board722903161 != NULL );
assert( strcmp(board722903161, 
".....2\n"
"......\n"
"......\n"
"......\n"
"......\n"
"...21.\n"
"......\n"
"..3...\n"
"......\n"
"......\n") == 0);
free(board722903161);
board722903161 = NULL;
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_golden_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 9, 8, 4) == 0 );


char* board841355857 = gamma_board(board);
assert( board841355857 != NULL );
assert( strcmp(board841355857, 
".....2\n"
"......\n"
"......\n"
"..8...\n"
"......\n"
"...21.\n"
".87...\n"
"..3.6.\n"
"..7...\n"
"......\n") == 0);
free(board841355857);
board841355857 = NULL;
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_golden_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 9, 3, 8) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_free_fields(board, 8) == 33 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board925737393 = gamma_board(board);
assert( board925737393 != NULL );
assert( strcmp(board925737393, 
"...862\n"
"...92.\n"
".81...\n"
"..8...\n"
"..2.5.\n"
"79321.\n"
"1872.1\n"
"..3.6.\n"
".17.72\n"
"21...4\n") == 0);
free(board925737393);
board925737393 = NULL;
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_free_fields(board, 7) == 28 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_free_fields(board, 8) == 24 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );


char* board818469037 = gamma_board(board);
assert( board818469037 != NULL );
assert( strcmp(board818469037, 
"..1862\n"
"..8926\n"
".811..\n"
".68..4\n"
"..2.57\n"
"79321.\n"
"1872.1\n"
"..3.6.\n"
"617972\n"
"21...4\n") == 0);
free(board818469037);
board818469037 = NULL;
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );


char* board349623601 = gamma_board(board);
assert( board349623601 != NULL );
assert( strcmp(board349623601, 
"..1862\n"
"..8926\n"
".811..\n"
".68..4\n"
"..2.57\n"
"79321.\n"
"187221\n"
"..3.6.\n"
"617972\n"
"21...4\n") == 0);
free(board349623601);
board349623601 = NULL;
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_free_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 9, 1, 8) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_golden_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_free_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 7 );


char* board998905805 = gamma_board(board);
assert( board998905805 != NULL );
assert( strcmp(board998905805, 
"8.1862\n"
"398926\n"
"48116.\n"
"8684.4\n"
"782557\n"
"79481.\n"
"187221\n"
".6326.\n"
"617972\n"
"2197.4\n") == 0);
free(board998905805);
board998905805 = NULL;
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_free_fields(board, 8) == 7 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_free_fields(board, 7) == 6 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );


gamma_delete(board);

    return 0;
}
