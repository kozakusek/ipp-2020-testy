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
uuid: 510381724
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 15, 15, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 2, 9, 13) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board338699259 = gamma_board(board);
assert( board338699259 != NULL );
assert( strcmp(board338699259, 
"..........\n"
".........2\n"
"..........\n"
"...4...1..\n"
"..........\n"
"..........\n"
"3.........\n"
"..........\n"
"..........\n"
"..........\n"
"4.........\n"
"..........\n"
".....3....\n"
"..........\n"
"........2.\n") == 0);
free(board338699259);
board338699259 = NULL;
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 13) == 1 );
assert( gamma_move(board, 10, 12, 7) == 0 );
assert( gamma_move(board, 10, 5, 3) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, 13) == 1 );
assert( gamma_move(board, 11, 7, 13) == 1 );
assert( gamma_move(board, 12, 9, 14) == 1 );
assert( gamma_move(board, 12, 1, 5) == 1 );
assert( gamma_move(board, 13, 8, 6) == 1 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 14, 2, 2) == 1 );
assert( gamma_move(board, 15, 2, 10) == 1 );
assert( gamma_move(board, 15, 2, 11) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 14, 1) == 0 );
assert( gamma_move(board, 10, 4, 5) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 0, 7) == 1 );
assert( gamma_move(board, 11, 7, 8) == 1 );
assert( gamma_move(board, 13, 6, 4) == 1 );
assert( gamma_move(board, 13, 8, 13) == 0 );
assert( gamma_move(board, 14, 8, 9) == 1 );
assert( gamma_move(board, 15, 14, 3) == 0 );
assert( gamma_move(board, 15, 7, 13) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 4, 9, 12) == 1 );
assert( gamma_golden_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_free_fields(board, 5) == 110 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 14, 7) == 0 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 10, 6, 5) == 1 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 12, 8, 6) == 0 );
assert( gamma_move(board, 13, 2, 8) == 1 );
assert( gamma_move(board, 13, 5, 3) == 0 );
assert( gamma_move(board, 14, 10, 7) == 0 );
assert( gamma_move(board, 14, 3, 10) == 0 );
assert( gamma_free_fields(board, 15) == 105 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 4, 14) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 7, 14, 3) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 4, 13) == 1 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_golden_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 10, 6, 3) == 1 );
assert( gamma_move(board, 11, 7, 3) == 1 );
assert( gamma_move(board, 13, 4, 8) == 1 );
assert( gamma_move(board, 13, 5, 13) == 1 );
assert( gamma_move(board, 14, 5, 7) == 1 );
assert( gamma_move(board, 14, 8, 7) == 1 );
assert( gamma_move(board, 15, 11, 4) == 0 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_free_fields(board, 6) == 85 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_move(board, 10, 9, 13) == 0 );
assert( gamma_move(board, 12, 3, 4) == 1 );
assert( gamma_move(board, 12, 8, 6) == 0 );
assert( gamma_move(board, 13, 14, 5) == 0 );
assert( gamma_move(board, 13, 7, 8) == 0 );
assert( gamma_free_fields(board, 13) == 84 );
assert( gamma_move(board, 14, 3, 12) == 1 );
assert( gamma_move(board, 14, 6, 10) == 1 );
assert( gamma_move(board, 15, 14, 5) == 0 );
assert( gamma_move(board, 15, 1, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );


char* board966670227 = gamma_board(board);
assert( board966670227 != NULL );
assert( strcmp(board966670227, 
"....1....12\n"
".9..813.11112\n"
"1..14.....4\n"
"2.154...17.\n"
"..152..14...\n"
"...1...214.\n"
"3.13.131.116.\n"
"1166.614..148\n"
".......813.\n"
"312..10510.42\n"
"4.412..13...\n"
".153.31010116.\n"
"..14..3...8\n"
".5311...33\n"
"..7.9711.24\n") == 0);
free(board966670227);
board966670227 = NULL;
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 11, 1, 6) == 1 );
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_move(board, 13, 9, 4) == 1 );
assert( gamma_move(board, 13, 5, 9) == 1 );
assert( gamma_move(board, 14, 14, 7) == 0 );
assert( gamma_move(board, 14, 1, 2) == 1 );
assert( gamma_busy_fields(board, 14) == 7 );
assert( gamma_move(board, 15, 2, 8) == 0 );
assert( gamma_move(board, 15, 8, 7) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_move(board, 10, 7, 7) == 1 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 12, 3, 4) == 0 );
assert( gamma_move(board, 13, 6, 14) == 1 );
assert( gamma_move(board, 14, 6, 5) == 0 );
assert( gamma_move(board, 14, 1, 12) == 0 );
assert( gamma_free_fields(board, 14) == 61 );


char* board121409676 = gamma_board(board);
assert( board121409676 != NULL );
assert( strcmp(board121409676, 
"....1.13..12\n"
".9..813311112\n"
"12.14.....4\n"
"2.154...17.\n"
"..152..145..\n"
"..91.1372146\n"
"3.13.131.116.\n"
"1166.614.10148\n"
".11....5813.\n"
"312..10510.42\n"
"4.412.4134.13\n"
".153.310101162\n"
"51414..34..8\n"
"35311...33\n"
"..7.9711.24\n") == 0);
free(board121409676);
board121409676 = NULL;
assert( gamma_move(board, 15, 0, 3) == 1 );
assert( gamma_move(board, 15, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_free_fields(board, 3) == 58 );


char* board657956686 = gamma_board(board);
assert( board657956686 != NULL );
assert( strcmp(board657956686, 
"....1.13..12\n"
".9..813311112\n"
"12.14.....4\n"
"2.154...17.\n"
"..152..1453.\n"
"..91.1372146\n"
"3.13.131.116.\n"
"1166.614.10148\n"
".11....5813.\n"
"312..10510.42\n"
"4.412.4134.13\n"
"15153.310101162\n"
"51414..34.28\n"
"35311...33\n"
"..7.9711.24\n") == 0);
free(board657956686);
board657956686 = NULL;
assert( gamma_golden_move(board, 4, 2, 1) == 1 );


char* board102309789 = gamma_board(board);
assert( board102309789 != NULL );
assert( strcmp(board102309789, 
"....1.13..12\n"
".9..813311112\n"
"12.14.....4\n"
"2.154...17.\n"
"..152..1453.\n"
"..91.1372146\n"
"3.13.131.116.\n"
"1166.614.10148\n"
".11....5813.\n"
"312..10510.42\n"
"4.412.4134.13\n"
"15153.310101162\n"
"51414..34.28\n"
"35411...33\n"
"..7.9711.24\n") == 0);
free(board102309789);
board102309789 = NULL;
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 8) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 14, 1) == 0 );
assert( gamma_move(board, 13, 10, 4) == 0 );
assert( gamma_move(board, 14, 10, 9) == 0 );
assert( gamma_move(board, 15, 10, 5) == 0 );
assert( gamma_move(board, 15, 8, 10) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_free_fields(board, 9) == 55 );
assert( gamma_move(board, 10, 7, 13) == 0 );


char* board493695150 = gamma_board(board);
assert( board493695150 != NULL );
assert( strcmp(board493695150, 
"....1.13..12\n"
".9..813311112\n"
"12.14.....4\n"
"2.1546..17.\n"
"4.152..1453.\n"
"..91.1372146\n"
"3.13.131.116.\n"
"1166.614.10148\n"
".11....5813.\n"
"312..10510.42\n"
"4.41274134.13\n"
"15153.310101162\n"
"51414..34.28\n"
"35411...33\n"
"..7.9711.24\n") == 0);
free(board493695150);
board493695150 = NULL;
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 12, 6, 0) == 0 );
assert( gamma_move(board, 12, 4, 3) == 0 );
assert( gamma_move(board, 13, 1, 11) == 1 );
assert( gamma_move(board, 14, 2, 3) == 0 );
assert( gamma_move(board, 14, 6, 6) == 0 );
assert( gamma_move(board, 15, 2, 4) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_free_fields(board, 8) == 52 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_free_fields(board, 9) == 52 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 11, 7, 10) == 0 );
assert( gamma_move(board, 12, 9, 0) == 0 );
assert( gamma_move(board, 12, 7, 2) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 5, 3) == 0 );
assert( gamma_move(board, 14, 1, 6) == 0 );
assert( gamma_move(board, 14, 4, 11) == 0 );
assert( gamma_move(board, 15, 12, 4) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );


char* board629130866 = gamma_board(board);
assert( board629130866 != NULL );
assert( strcmp(board629130866, 
"....1.13..12\n"
".94.813311112\n"
"12.14.....4\n"
"21315462.17.\n"
"4.1523.1453.\n"
"..91.1372146\n"
"3.13.131.116.\n"
"1166.614.10148\n"
".11....5813.\n"
"312..10510142\n"
"4241274134.13\n"
"15153.310101162\n"
"51414..341228\n"
"35411...33\n"
"..7.9711.24\n") == 0);
free(board629130866);
board629130866 = NULL;
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 1, 14) == 1 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_free_fields(board, 9) == 47 );
assert( gamma_move(board, 10, 0, 6) == 1 );
assert( gamma_move(board, 12, 9, 6) == 1 );
assert( gamma_move(board, 12, 6, 10) == 0 );
assert( gamma_move(board, 13, 2, 5) == 1 );
assert( gamma_busy_fields(board, 13) == 10 );
assert( gamma_move(board, 14, 10, 9) == 0 );
assert( gamma_move(board, 14, 8, 5) == 0 );
assert( gamma_busy_fields(board, 14) == 7 );
assert( gamma_move(board, 15, 12, 6) == 0 );
assert( gamma_move(board, 15, 4, 6) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );


char* board775173631 = gamma_board(board);
assert( board775173631 != NULL );
assert( strcmp(board775173631, 
".9..1.13..12\n"
".94.813311112\n"
"12.14.....4\n"
"21315462.17.\n"
"4.1523.1453.\n"
"..91.1372146\n"
"3.13.131.116.\n"
"1166.614.10148\n"
"1011..15.581312\n"
"31213.10510142\n"
"4241274134.13\n"
"15153.310101162\n"
"51414..341228\n"
"35411...33\n"
"..7.9711.24\n") == 0);
free(board775173631);
board775173631 = NULL;
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 10, 11, 9) == 0 );
assert( gamma_move(board, 11, 9, 2) == 0 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_move(board, 12, 6, 3) == 0 );
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 9, 9) == 0 );
assert( gamma_move(board, 14, 11, 9) == 0 );
assert( gamma_free_fields(board, 14) == 42 );
assert( gamma_move(board, 15, 8, 6) == 0 );
assert( gamma_move(board, 15, 6, 2) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_golden_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 7, 14, 8) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_golden_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_free_fields(board, 9) == 42 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_move(board, 11, 2, 13) == 0 );
assert( gamma_move(board, 12, 5, 7) == 0 );
assert( gamma_move(board, 12, 9, 11) == 1 );
assert( gamma_move(board, 13, 12, 7) == 0 );
assert( gamma_move(board, 14, 10, 1) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board905337722 = gamma_board(board);
assert( board905337722 != NULL );
assert( strcmp(board905337722, 
".9..1.13..12\n"
".94.813311112\n"
"12.14.....4\n"
"21315462.1712\n"
"4.1523.1453.\n"
"..91.1372146\n"
"3.13.131.116.\n"
"1166.614.10148\n"
"1011..15.581312\n"
"31213.10510142\n"
"4241274134.13\n"
"151536310101162\n"
"5148..341228\n"
"35411...33\n"
"..7.9711.24\n") == 0);
free(board905337722);
board905337722 = NULL;
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 14, 5) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_free_fields(board, 8) == 39 );
assert( gamma_move(board, 9, 8, 4) == 1 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 12, 6) == 0 );
assert( gamma_move(board, 11, 6, 8) == 1 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_busy_fields(board, 13) == 10 );
assert( gamma_move(board, 14, 14, 5) == 0 );
assert( gamma_move(board, 14, 5, 1) == 1 );
assert( gamma_move(board, 15, 5, 3) == 0 );
assert( gamma_move(board, 15, 9, 9) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board885447900 = gamma_board(board);
assert( board885447900 != NULL );
assert( strcmp(board885447900, 
".9..1.13..12\n"
".94.813311112\n"
"12.14.....4\n"
"21315462.1712\n"
"4.1523.1453.\n"
"..91.1372146\n"
"3613.13111116.\n"
"1166.614.10148\n"
"1011..15.581312\n"
"31213.10510142\n"
"4241274134913\n"
"151536310101162\n"
"5148..341228\n"
"3541114..33\n"
"..7.9711824\n") == 0);
free(board885447900);
board885447900 = NULL;
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 9, 13) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 4, 14) == 0 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 12, 10, 1) == 0 );
assert( gamma_move(board, 12, 3, 3) == 0 );
assert( gamma_free_fields(board, 12) == 35 );
assert( gamma_move(board, 13, 6, 3) == 0 );
assert( gamma_move(board, 13, 3, 10) == 0 );
assert( gamma_move(board, 14, 7, 9) == 0 );
assert( gamma_move(board, 14, 8, 8) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );


char* board983980701 = gamma_board(board);
assert( board983980701 != NULL );
assert( strcmp(board983980701, 
".9..1.13..12\n"
".94.813311112\n"
"12.14.....4\n"
"21315462.1712\n"
"4.1523.1453.\n"
"..91.1372146\n"
"3613.13111116.\n"
"1166.614.10148\n"
"1011..15.581312\n"
"31213.10510142\n"
"4241274134913\n"
"151536310101162\n"
"5148..341228\n"
"3541114..33\n"
"7.7.9711824\n") == 0);
free(board983980701);
board983980701 = NULL;
assert( gamma_move(board, 15, 2, 3) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_golden_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_free_fields(board, 8) == 34 );
assert( gamma_move(board, 9, 9, 8) == 1 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 10, 12, 8) == 0 );
assert( gamma_move(board, 11, 8, 3) == 0 );
assert( gamma_move(board, 12, 1, 7) == 0 );
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_move(board, 13, 3, 7) == 1 );
assert( gamma_move(board, 14, 3, 12) == 0 );
assert( gamma_move(board, 15, 6, 3) == 0 );
assert( gamma_move(board, 15, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 8, 14) == 1 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 13, 0) == 0 );
assert( gamma_free_fields(board, 9) == 30 );
assert( gamma_move(board, 10, 9, 12) == 0 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 12, 12, 6) == 0 );
assert( gamma_move(board, 13, 12, 4) == 0 );
assert( gamma_move(board, 14, 10, 9) == 0 );
assert( gamma_move(board, 14, 4, 14) == 0 );
assert( gamma_move(board, 15, 1, 6) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_golden_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_free_fields(board, 7) == 28 );
assert( gamma_move(board, 8, 14, 3) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );


char* board236465885 = gamma_board(board);
assert( board236465885 != NULL );
assert( strcmp(board236465885, 
".9..1213.612\n"
".94.813311112\n"
"12.14.....4\n"
"21315462.1712\n"
"4.1523.1453.\n"
"..91.1372146\n"
"3613.131111169\n"
"116613614410148\n"
"1011..15.581312\n"
"31213.10510142\n"
"4241274134913\n"
"151536310101162\n"
"5148..241228\n"
"35411141.33\n"
"7.719711824\n") == 0);
free(board236465885);
board236465885 = NULL;
assert( gamma_move(board, 9, 3, 14) == 1 );
assert( gamma_move(board, 10, 12, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 12, 4) == 0 );
assert( gamma_move(board, 11, 2, 6) == 1 );
assert( gamma_move(board, 12, 12, 6) == 0 );
assert( gamma_move(board, 13, 10, 1) == 0 );
assert( gamma_move(board, 13, 5, 4) == 0 );
assert( gamma_busy_fields(board, 13) == 11 );
assert( gamma_move(board, 14, 7, 8) == 0 );
assert( gamma_move(board, 15, 1, 7) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_golden_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 12, 10, 9) == 0 );
assert( gamma_move(board, 12, 6, 8) == 0 );
assert( gamma_move(board, 13, 6, 7) == 0 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_free_fields(board, 13) == 26 );
assert( gamma_move(board, 14, 13, 3) == 0 );
assert( gamma_move(board, 15, 6, 3) == 0 );
assert( gamma_move(board, 15, 6, 12) == 1 );
assert( gamma_golden_move(board, 15, 2, 7) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );


char* board605802786 = gamma_board(board);
assert( board605802786 != NULL );
assert( strcmp(board605802786, 
".9.91213.612\n"
".94.813311112\n"
"12.14..15..4\n"
"21315462.1712\n"
"4.1523.1453.\n"
"..91.1372146\n"
"3613.131111169\n"
"1161513614410148\n"
"101111.15.581312\n"
"31213.10510142\n"
"4241274134913\n"
"151536310101162\n"
"5148.1241228\n"
"35411141.33\n"
"7.719711824\n") == 0);
free(board605802786);
board605802786 = NULL;
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 12, 2) == 0 );
assert( gamma_move(board, 10, 6, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 11, 3, 11) == 0 );
assert( gamma_move(board, 12, 6, 14) == 0 );
assert( gamma_move(board, 13, 9, 3) == 0 );
assert( gamma_move(board, 14, 12, 8) == 0 );
assert( gamma_move(board, 15, 13, 0) == 0 );


gamma_delete(board);

    return 0;
}
