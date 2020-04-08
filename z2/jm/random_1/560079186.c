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
uuid: 560079186
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 9, 8, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_free_fields(board, 6) == 92 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 5) == 1 );


char* board769079194 = gamma_board(board);
assert( board769079194 != NULL );
assert( strcmp(board769079194, 
"8..........\n"
"...........\n"
".......4...\n"
".8......3.2\n"
"...........\n"
"..6........\n"
".........3.\n"
"...........\n"
"...1.7.....\n") == 0);
free(board769079194);
board769079194 = NULL;
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 6) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );


char* board932136569 = gamma_board(board);
assert( board932136569 != NULL );
assert( strcmp(board932136569, 
"8..........\n"
"..85.......\n"
".......4..8\n"
".8......3.2\n"
"...........\n"
"..6........\n"
"........33.\n"
".....7...6.\n"
"...1.7.....\n") == 0);
free(board932136569);
board932136569 = NULL;
assert( gamma_free_fields(board, 3) == 84 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_golden_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_free_fields(board, 8) == 83 );
assert( gamma_golden_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board591058800 = gamma_board(board);
assert( board591058800 != NULL );
assert( strcmp(board591058800, 
"8..........\n"
"..85.......\n"
".......4..8\n"
".8......3.2\n"
"...........\n"
".36.....5..\n"
"........33.\n"
".....7...6.\n"
"...1.72....\n") == 0);
free(board591058800);
board591058800 = NULL;
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_golden_move(board, 8, 0, 3) == 0 );


char* board769485235 = gamma_board(board);
assert( board769485235 != NULL );
assert( strcmp(board769485235, 
"8..........\n"
"..85.......\n"
".......4..8\n"
".8......3.2\n"
".....7.....\n"
".36.....5..\n"
"........33.\n"
"....67...6.\n"
"...1.72....\n") == 0);
free(board769485235);
board769485235 = NULL;
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_free_fields(board, 8) == 76 );


char* board576658767 = gamma_board(board);
assert( board576658767 != NULL );
assert( strcmp(board576658767, 
"8...8......\n"
"..85..3....\n"
".......4..8\n"
".8.7....3.2\n"
".....7.....\n"
".36.....5..\n"
"........33.\n"
"....67...6.\n"
"...1.72....\n") == 0);
free(board576658767);
board576658767 = NULL;
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_move(board, 1, 2, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_free_fields(board, 7) == 69 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );


char* board476564371 = gamma_board(board);
assert( board476564371 != NULL );
assert( strcmp(board476564371, 
"8.2.845....\n"
"..85..3....\n"
".......4..8\n"
".8.78...3.2\n"
".....7....5\n"
".36.....5..\n"
"........333\n"
"...6674..6.\n"
"...1.72....\n") == 0);
free(board476564371);
board476564371 = NULL;
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );


char* board202980043 = gamma_board(board);
assert( board202980043 != NULL );
assert( strcmp(board202980043, 
"8.2.845....\n"
"..858.34...\n"
".......4..8\n"
".8.78.1.3.2\n"
"....77....5\n"
".36.....5..\n"
".6......333\n"
"...6674..6.\n"
"...1.72....\n") == 0);
free(board202980043);
board202980043 = NULL;
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_free_fields(board, 7) == 63 );
assert( gamma_free_fields(board, 8) == 63 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_free_fields(board, 3) == 60 );


char* board267619431 = gamma_board(board);
assert( board267619431 != NULL );
assert( strcmp(board267619431, 
"8.2.845....\n"
"..858.344..\n"
"....5..4..8\n"
".8.78.1.1.2\n"
"....77....5\n"
".36.....5..\n"
".6......333\n"
"...6674..66\n"
"...1.72....\n") == 0);
free(board267619431);
board267619431 = NULL;
assert( gamma_move(board, 7, 10, -1) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_free_fields(board, 7) == 54 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );


char* board969168115 = gamma_board(board);
assert( board969168115 != NULL );
assert( strcmp(board969168115, 
"8.2.845..2.\n"
"..858.344..\n"
"....5..4..8\n"
".8.78.181.2\n"
"...3777...5\n"
".3648...5..\n"
".6......333\n"
"...6674..66\n"
"...1.72.4..\n") == 0);
free(board969168115);
board969168115 = NULL;
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 7, -1, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );


char* board628012428 = gamma_board(board);
assert( board628012428 != NULL );
assert( strcmp(board628012428, 
"8.2.8455.22\n"
".8858.344..\n"
"....5..4..8\n"
".8.78.181.2\n"
"7..37776..5\n"
".3648...5..\n"
".6......333\n"
"...6674..66\n"
".8.1.72.46.\n") == 0);
free(board628012428);
board628012428 = NULL;
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 8, 9, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );


char* board792747369 = gamma_board(board);
assert( board792747369 != NULL );
assert( strcmp(board792747369, 
"8.2.8455.22\n"
".8858.344.4\n"
"..215..4.48\n"
".8.78.181.2\n"
"7..37776..5\n"
".3648...56.\n"
".6...8..333\n"
"...6674..66\n"
".8.1472446.\n") == 0);
free(board792747369);
board792747369 = NULL;
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );


gamma_delete(board);

    return 0;
}
