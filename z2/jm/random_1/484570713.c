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
uuid: 484570713
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 13, 15, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_free_fields(board, 6) == 139 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 11, 13) == 0 );
assert( gamma_move(board, 10, 0, 10) == 1 );


char* board334637952 = gamma_board(board);
assert( board334637952 != NULL );
assert( strcmp(board334637952, 
"...........\n"
"...........\n"
"10..........\n"
"..7........\n"
"...........\n"
"...........\n"
"...........\n"
"..5........\n"
"...........\n"
"...2......6\n"
"...........\n"
"...........\n"
".........3.\n") == 0);
free(board334637952);
board334637952 = NULL;
assert( gamma_move(board, 11, 11, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 0 );
assert( gamma_move(board, 13, 7, 6) == 1 );
assert( gamma_move(board, 14, 11, 4) == 0 );
assert( gamma_move(board, 15, 3, 4) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 7, 1, -1) == 0 );


char* board773079320 = gamma_board(board);
assert( board773079320 != NULL );
assert( strcmp(board773079320, 
"...........\n"
"...........\n"
"10..........\n"
"..7........\n"
"...........\n"
"...........\n"
".......13...\n"
"..5........\n"
"...15.......\n"
"...2.....16\n"
"...........\n"
"...........\n"
".........3.\n") == 0);
free(board773079320);
board773079320 = NULL;
assert( gamma_move(board, 8, 10, 11) == 1 );


char* board710648126 = gamma_board(board);
assert( board710648126 != NULL );
assert( strcmp(board710648126, 
"...........\n"
"..........8\n"
"10..........\n"
"..7........\n"
"...........\n"
"...........\n"
".......13...\n"
"..5........\n"
"...15.......\n"
"...2.....16\n"
"...........\n"
"...........\n"
".........3.\n") == 0);
free(board710648126);
board710648126 = NULL;
assert( gamma_move(board, 9, 6, 13) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 13, 2, 10) == 1 );
assert( gamma_move(board, 14, 2, 10) == 0 );
assert( gamma_move(board, 15, 6, 7) == 1 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 7, 11) == 1 );


char* board669133964 = gamma_board(board);
assert( board669133964 != NULL );
assert( strcmp(board669133964, 
"...........\n"
".......5..8\n"
"10.13........\n"
"4.7........\n"
"...........\n"
"......15....\n"
".......13...\n"
"..5........\n"
"...15.......\n"
"...2....216\n"
"...........\n"
"...........\n"
".........3.\n") == 0);
free(board669133964);
board669133964 = NULL;
assert( gamma_move(board, 6, 6, 6) == 1 );


char* board141129331 = gamma_board(board);
assert( board141129331 != NULL );
assert( strcmp(board141129331, 
"...........\n"
".......5..8\n"
"10.13........\n"
"4.7........\n"
"...........\n"
"......15....\n"
"......613...\n"
"..5........\n"
"...15.......\n"
"...2....216\n"
"...........\n"
"...........\n"
".........3.\n") == 0);
free(board141129331);
board141129331 = NULL;
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 10) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 12) == 1 );
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_golden_move(board, 12, 3, 9) == 0 );
assert( gamma_move(board, 13, 9, 9) == 1 );


char* board898111399 = gamma_board(board);
assert( board898111399 != NULL );
assert( strcmp(board898111399, 
".......10...\n"
".......5..8\n"
"10.13........\n"
"4.7......13.\n"
"...........\n"
"......15....\n"
"......613...\n"
"..5........\n"
"...15.......\n"
"...2....216\n"
"...........\n"
".11.........\n"
".........3.\n") == 0);
free(board898111399);
board898111399 = NULL;
assert( gamma_move(board, 14, 10, -1) == 0 );
assert( gamma_free_fields(board, 14) == 124 );
assert( gamma_move(board, 15, 3, 9) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_free_fields(board, 2) == 122 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 9, 9, 8) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 13) == 0 );
assert( gamma_move(board, 12, 3, 1) == 1 );
assert( gamma_free_fields(board, 12) == 119 );
assert( gamma_move(board, 13, 3, -1) == 0 );
assert( gamma_golden_move(board, 13, 6, 2) == 0 );
assert( gamma_move(board, 14, 6, 3) == 1 );
assert( gamma_move(board, 15, 7, 8) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_free_fields(board, 7) == 115 );
assert( gamma_move(board, 9, 9, 10) == 1 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_move(board, 11, 10, 1) == 1 );
assert( gamma_move(board, 12, 3, 1) == 0 );


char* board301119050 = gamma_board(board);
assert( board301119050 != NULL );
assert( strcmp(board301119050, 
".......10...\n"
".......5..8\n"
"10.13......9.\n"
"4.715.....13.\n"
".......15.9.\n"
"......15....\n"
"..6...613.4.\n"
"..5........\n"
".1.15.......\n"
"...2..14.216\n"
"...........\n"
".11.12......11\n"
"......2..3.\n") == 0);
free(board301119050);
board301119050 = NULL;
assert( gamma_move(board, 13, 1, -1) == 0 );
assert( gamma_free_fields(board, 13) == 113 );
assert( gamma_move(board, 14, 9, 6) == 0 );
assert( gamma_move(board, 15, 8, 5) == 1 );
assert( gamma_move(board, 1, 10, 2) == 1 );


char* board447002399 = gamma_board(board);
assert( board447002399 != NULL );
assert( strcmp(board447002399, 
".......10...\n"
".......5..8\n"
"10.13......9.\n"
"4.715.....13.\n"
".......15.9.\n"
"......15....\n"
"..6...613.4.\n"
"..5.....15..\n"
".1.15.......\n"
"...2..14.216\n"
"..........1\n"
".11.12......11\n"
"......2..3.\n") == 0);
free(board447002399);
board447002399 = NULL;
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_free_fields(board, 6) == 108 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 9, 8, 6) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 12) == 0 );
assert( gamma_move(board, 11, 11, -1) == 0 );
assert( gamma_move(board, 12, 9, 6) == 0 );
assert( gamma_move(board, 13, -1, 0) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 2, 3) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 8, 1) == 1 );
assert( gamma_move(board, 12, 4, 6) == 1 );
assert( gamma_move(board, 13, 11, 1) == 0 );
assert( gamma_move(board, 14, 5, 8) == 1 );
assert( gamma_move(board, 15, 7, 2) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 7, -1) == 0 );


char* board488184444 = gamma_board(board);
assert( board488184444 != NULL );
assert( strcmp(board488184444, 
".......10...\n"
".......5..8\n"
"10.13......9.\n"
"4.715..2..13.\n"
".....1411579.\n"
"....5.15....\n"
"..6.12.613941\n"
"..5.....15..\n"
".1.15.......\n"
"..142..144216\n"
"..9....15..1\n"
".11.12....11711\n"
".6....2..3.\n") == 0);
free(board488184444);
board488184444 = NULL;
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board802904445 = gamma_board(board);
assert( board802904445 != NULL );
assert( strcmp(board802904445, 
".......10...\n"
".....6.5..8\n"
"10.13......9.\n"
"4.715..2..13.\n"
".....1411579.\n"
"....5.15....\n"
"..6.12.613941\n"
"..5.....15..\n"
".1.15.......\n"
"..142..144216\n"
"..9....15..1\n"
".11.12....11711\n"
".6....2..3.\n") == 0);
free(board802904445);
board802904445 = NULL;
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_free_fields(board, 9) == 94 );
assert( gamma_move(board, 11, 0, 1) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 9, 12) == 1 );
assert( gamma_free_fields(board, 12) == 92 );
assert( gamma_move(board, 13, 9, 6) == 0 );
assert( gamma_busy_fields(board, 13) == 3 );
assert( gamma_move(board, 14, 3, 10) == 1 );


char* board730843494 = gamma_board(board);
assert( board730843494 != NULL );
assert( strcmp(board730843494, 
".......10.12.\n"
".....6.5..8\n"
"10.1314.....9.\n"
"4.715..2..13.\n"
".....1411579.\n"
"....5.15....\n"
"..6.12.613941\n"
"..5.....15..\n"
".1.15.......\n"
"..142..144216\n"
"..98...15..1\n"
"1111.12....11711\n"
".6....2..3.\n") == 0);
free(board730843494);
board730843494 = NULL;
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_free_fields(board, 6) == 91 );


char* board724528616 = gamma_board(board);
assert( board724528616 != NULL );
assert( strcmp(board724528616, 
".......10.12.\n"
".....6.5..8\n"
"10.1314.....9.\n"
"4.715..2..13.\n"
".....1411579.\n"
"....5.15....\n"
"..6.12.613941\n"
"..5.....15..\n"
".1.15.......\n"
"..142..144216\n"
"..98...15..1\n"
"1111.12....11711\n"
".6....2..3.\n") == 0);
free(board724528616);
board724528616 = NULL;
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_free_fields(board, 8) == 90 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 11, 1, 3) == 1 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 13, 0, -1) == 0 );
assert( gamma_move(board, 14, 4, 7) == 0 );
assert( gamma_move(board, 15, 9, 12) == 0 );
assert( gamma_free_fields(board, 15) == 89 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 86 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 8, -1, 10) == 0 );
assert( gamma_move(board, 10, 0, 13) == 0 );
assert( gamma_free_fields(board, 10) == 85 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_move(board, 12, 6, -1) == 0 );
assert( gamma_move(board, 13, 10, 9) == 1 );
assert( gamma_move(board, 15, 7, 3) == 0 );


char* board767521075 = gamma_board(board);
assert( board767521075 != NULL );
assert( strcmp(board767521075, 
".......10.122\n"
".....6.5..8\n"
"10.1314..3..9.\n"
"4.715..2.41313\n"
".....1411579.\n"
"....5.15....\n"
"..6.12.613941\n"
"..5..7..15.7\n"
".1.15.......\n"
".11142..144216\n"
"..98...15..1\n"
"1111.12....11711\n"
".6....2..3.\n") == 0);
free(board767521075);
board767521075 = NULL;
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_move(board, 13, 5, 4) == 1 );
assert( gamma_move(board, 14, 10, -1) == 0 );
assert( gamma_busy_fields(board, 14) == 4 );
assert( gamma_move(board, 15, 1, 6) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 6, 2, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, -1, -1) == 0 );


char* board196766544 = gamma_board(board);
assert( board196766544 != NULL );
assert( strcmp(board196766544, 
"..6....10.122\n"
".....6.5..8\n"
"10.1314..3..9.\n"
"43715..2.41313\n"
".....1411579.\n"
"....5.15....\n"
".156.12.613941\n"
"..5..7..15.7\n"
".1.15.13.....\n"
".11142..144216\n"
"..98...15..1\n"
"1111.12.2..11711\n"
".611...2..3.\n") == 0);
free(board196766544);
board196766544 = NULL;
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 10, 2, -1) == 0 );
assert( gamma_free_fields(board, 10) == 77 );
assert( gamma_move(board, 11, 9, -1) == 0 );
assert( gamma_move(board, 12, 0, -1) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 5, 7) == 1 );
assert( gamma_move(board, 14, 9, 4) == 1 );
assert( gamma_busy_fields(board, 14) == 5 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );


char* board450885858 = gamma_board(board);
assert( board450885858 != NULL );
assert( strcmp(board450885858, 
"..6....10.122\n"
".....6.5..8\n"
"10.1314..3..9.\n"
"43715..2.41313\n"
".....1411579.\n"
"....51315....\n"
"3156212.613941\n"
"..5..7..15.7\n"
"11.15.13...14.\n"
".11142..144216\n"
"..98..815..1\n"
"1111.12.2..11711\n"
".611...2..3.\n") == 0);
free(board450885858);
board450885858 = NULL;
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_free_fields(board, 8) == 72 );
assert( gamma_move(board, 9, -1, 1) == 0 );
assert( gamma_free_fields(board, 9) == 72 );
assert( gamma_move(board, 10, 9, 5) == 1 );
assert( gamma_golden_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 11, 6, 11) == 1 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 13, 8, 10) == 1 );
assert( gamma_move(board, 14, 10, 7) == 1 );
assert( gamma_move(board, 15, 9, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 2, 2) == 0 );


char* board385563468 = gamma_board(board);
assert( board385563468 != NULL );
assert( strcmp(board385563468, 
"..6.2..10.122\n"
".....6115..8\n"
"10.1314..3.139.\n"
"43715..2.41313\n"
".....1411579.\n"
"....51315...14\n"
"3156212.613941\n"
"..5..7..15107\n"
"11.15.13...14.\n"
".11142..144216\n"
"..98..815..1\n"
"1111.12.2..11711\n"
".611...2..3.\n") == 0);
free(board385563468);
board385563468 = NULL;
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_golden_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, -1, -1) == 0 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_free_fields(board, 8) == 66 );
assert( gamma_move(board, 9, 1, 10) == 1 );
assert( gamma_move(board, 10, 1, -1) == 0 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 11, -1) == 0 );
assert( gamma_move(board, 13, 0, 9) == 0 );
assert( gamma_move(board, 14, 9, 13) == 0 );


char* board395287157 = gamma_board(board);
assert( board395287157 != NULL );
assert( strcmp(board395287157, 
"..6.2..10.122\n"
".....6115..8\n"
"1091314..3.139.\n"
"43715..2.41313\n"
".....1411579.\n"
"....51315...14\n"
"3156212.613941\n"
"..5..7..15107\n"
"11.15.13...14.\n"
".11142.6144216\n"
"..98..815..1\n"
"1111.12.2..11711\n"
".611...2..3.\n") == 0);
free(board395287157);
board395287157 = NULL;
assert( gamma_move(board, 15, 7, 7) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_free_fields(board, 5) == 64 );
assert( gamma_move(board, 6, 1, 6) == 0 );


char* board554369896 = gamma_board(board);
assert( board554369896 != NULL );
assert( strcmp(board554369896, 
"..6.2..10.122\n"
".....6115..8\n"
"1091314..3.139.\n"
"43715..2.41313\n"
".....1411579.\n"
"....5131515..14\n"
"3156212.613941\n"
"..5..7..15107\n"
"11.15.13...14.\n"
".11142.6144216\n"
"..98..815..1\n"
"1111.12.2..11711\n"
".611...2..3.\n") == 0);
free(board554369896);
board554369896 = NULL;
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_golden_move(board, 11, 2, 2) == 1 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_move(board, 14, 1, 6) == 0 );
assert( gamma_busy_fields(board, 14) == 6 );
assert( gamma_move(board, 15, 0, 3) == 1 );
assert( gamma_free_fields(board, 15) == 63 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 9, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 11) == 1 );
assert( gamma_move(board, 12, -1, 12) == 0 );
assert( gamma_move(board, 13, -1, 13) == 0 );
assert( gamma_move(board, 14, 0, 9) == 0 );
assert( gamma_golden_move(board, 14, 1, 1) == 1 );
assert( gamma_move(board, 15, 9, 13) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 10, 10) == 1 );
assert( gamma_move(board, 11, -1, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_golden_move(board, 12, 3, 3) == 1 );
assert( gamma_move(board, 13, 7, 5) == 1 );
assert( gamma_move(board, 14, 1, 4) == 0 );
assert( gamma_move(board, 15, 10, 11) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_golden_move(board, 15, 6, 10) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );


char* board837795334 = gamma_board(board);
assert( board837795334 != NULL );
assert( strcmp(board837795334, 
"..6.2..10.122\n"
"....106115..8\n"
"1091314..15.13910\n"
"43715..2.41313\n"
".....1411579.\n"
"....5131515.914\n"
"3156212.613941\n"
"..5..7.1315107\n"
"11.15613...14.\n"
"15111412.6144216\n"
"..1187.815..1\n"
"1114.12.2..11711\n"
"7611...2..3.\n") == 0);
free(board837795334);
board837795334 = NULL;
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_golden_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, -1, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board999799300 = gamma_board(board);
assert( board999799300 != NULL );
assert( strcmp(board999799300, 
"..6.2..10.122\n"
"....106115..8\n"
"1091314..15.13910\n"
"43715..2.41313\n"
".....1411579.\n"
"....5131515.914\n"
"3156212.613941\n"
"..5..7.1315107\n"
"11.15613...14.\n"
"15111412.6144216\n"
"..1187.815..1\n"
"1114.12.2..11711\n"
"7611...2..3.\n") == 0);
free(board999799300);
board999799300 = NULL;
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 9) == 1 );
assert( gamma_move(board, 10, 11, 7) == 0 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_free_fields(board, 11) == 54 );
assert( gamma_move(board, 12, 0, 6) == 0 );


char* board588648433 = gamma_board(board);
assert( board588648433 != NULL );
assert( strcmp(board588648433, 
"..6.2..10.122\n"
"....106115..8\n"
"1091314..15.13910\n"
"437159.2.41313\n"
".....1411579.\n"
"....5131515.914\n"
"3156212.613941\n"
".85..7.1315107\n"
"11.15613...14.\n"
"15111412.6144216\n"
"..1187.815..1\n"
"1114.12.2..11711\n"
"7611...2..3.\n") == 0);
free(board588648433);
board588648433 = NULL;
assert( gamma_move(board, 13, 8, 13) == 0 );
assert( gamma_move(board, 14, 3, 6) == 0 );
assert( gamma_move(board, 15, 10, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_free_fields(board, 7) == 51 );
assert( gamma_golden_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );


char* board728466081 = gamma_board(board);
assert( board728466081 != NULL );
assert( strcmp(board728466081, 
"..6.2..10.122\n"
"....106115..8\n"
"1091314..15313910\n"
"437159.2541313\n"
".....1411579.\n"
"....5131515.914\n"
"3156212.613941\n"
".85..7.715107\n"
"11.15613...14.\n"
"15111412.6144216\n"
"..1187.815..1\n"
"1114.12.2..11711\n"
"7611...2..315\n") == 0);
free(board728466081);
board728466081 = NULL;
assert( gamma_move(board, 9, -1, 5) == 0 );
assert( gamma_move(board, 12, 4, 13) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 13, 5, 7) == 0 );
assert( gamma_move(board, 14, 5, 10) == 1 );
assert( gamma_golden_possible(board, 14) == 0 );
assert( gamma_move(board, 15, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );


gamma_delete(board);

    return 0;
}
