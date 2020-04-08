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
uuid: 179186609
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 15, 14, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 9, 5, 9) == 1 );
assert( gamma_move(board, 10, 4, 5) == 1 );
assert( gamma_move(board, 10, 5, 14) == 0 );
assert( gamma_move(board, 11, 0, 7) == 1 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 0 );
assert( gamma_move(board, 14, 4, 7) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_free_fields(board, 5) == 81 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_free_fields(board, 7) == 80 );
assert( gamma_move(board, 9, 4, 11) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board405780520 = gamma_board(board);
assert( board405780520 != NULL );
assert( strcmp(board405780520, 
".....2\n"
"......\n"
"......\n"
".3..9.\n"
"......\n"
".....9\n"
"3.....\n"
"11...14.\n"
"......\n"
"....107\n"
"......\n"
"......\n"
".....9\n"
"....7.\n"
"......\n") == 0);
free(board405780520);
board405780520 = NULL;
assert( gamma_move(board, 10, 12, 2) == 0 );
assert( gamma_move(board, 11, 4, 12) == 1 );
assert( gamma_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 12, 3, 6) == 1 );
assert( gamma_golden_move(board, 12, 5, 4) == 0 );
assert( gamma_move(board, 14, 4, 12) == 0 );
assert( gamma_move(board, 14, 0, 2) == 1 );
assert( gamma_busy_fields(board, 14) == 2 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_free_fields(board, 1) == 76 );


char* board631113034 = gamma_board(board);
assert( board631113034 != NULL );
assert( strcmp(board631113034, 
".....2\n"
"......\n"
"....11.\n"
".3..9.\n"
"......\n"
".....9\n"
"3.....\n"
"11...14.\n"
"...12..\n"
"....107\n"
"......\n"
"......\n"
"14....9\n"
"....7.\n"
"......\n") == 0);
free(board631113034);
board631113034 = NULL;
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_golden_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board813937127 = gamma_board(board);
assert( board813937127 != NULL );
assert( strcmp(board813937127, 
".....2\n"
"......\n"
"....11.\n"
".3..9.\n"
"......\n"
".....9\n"
"3.....\n"
"11..314.\n"
"...12.4\n"
"...2107\n"
"......\n"
"......\n"
"14...69\n"
"....7.\n"
"....6.\n") == 0);
free(board813937127);
board813937127 = NULL;
assert( gamma_move(board, 8, 2, 10) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 3, 13) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 11, 0, 1) == 1 );
assert( gamma_move(board, 12, 11, 5) == 0 );
assert( gamma_move(board, 13, 4, 0) == 0 );
assert( gamma_move(board, 14, 5, 3) == 1 );
assert( gamma_move(board, 14, 1, 10) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );


char* board462377070 = gamma_board(board);
assert( board462377070 != NULL );
assert( strcmp(board462377070, 
".....2\n"
"...9..\n"
"....11.\n"
".3..9.\n"
".148...\n"
".....9\n"
"3.....\n"
"11..314.\n"
"...12.4\n"
"...2107\n"
"14.1..\n"
".10...14\n"
"14...69\n"
"11...7.\n"
"....6.\n") == 0);
free(board462377070);
board462377070 = NULL;
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 5, 1, 14) == 1 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 10, 2, 3) == 1 );
assert( gamma_move(board, 10, 4, 4) == 1 );
assert( gamma_move(board, 11, 3, 10) == 1 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 12, 13, 1) == 0 );
assert( gamma_move(board, 12, 4, 11) == 0 );


char* board361464838 = gamma_board(board);
assert( board361464838 != NULL );
assert( strcmp(board361464838, 
".5...2\n"
"...9..\n"
"...511.\n"
".3..9.\n"
".14811..\n"
".....9\n"
"3.....\n"
"11..314.\n"
"...12.4\n"
"...2107\n"
"14.110.\n"
".1010..14\n"
"14...69\n"
"11...7.\n"
"....6.\n") == 0);
free(board361464838);
board361464838 = NULL;
assert( gamma_move(board, 13, 0, 1) == 0 );
assert( gamma_move(board, 14, 7, 5) == 0 );
assert( gamma_move(board, 14, 2, 3) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_free_fields(board, 5) == 54 );


char* board444308770 = gamma_board(board);
assert( board444308770 != NULL );
assert( strcmp(board444308770, 
".5...2\n"
".2.9..\n"
"...511.\n"
".3..9.\n"
".14811..\n"
".....9\n"
"3.....\n"
"11..314.\n"
"...12.4\n"
"...2103\n"
"14.110.\n"
".1010..14\n"
"143..69\n"
"11...7.\n"
"5...6.\n") == 0);
free(board444308770);
board444308770 = NULL;
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 4, 10) == 1 );
assert( gamma_free_fields(board, 7) == 52 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_free_fields(board, 8) == 52 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 0, 3) == 1 );
assert( gamma_move(board, 11, 13, 5) == 0 );
assert( gamma_move(board, 11, 3, 10) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 12, 0, 10) == 1 );
assert( gamma_move(board, 14, 11, 0) == 0 );
assert( gamma_move(board, 14, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_free_fields(board, 9) == 47 );
assert( gamma_move(board, 10, 9, 1) == 0 );


char* board189076185 = gamma_board(board);
assert( board189076185 != NULL );
assert( strcmp(board189076185, 
".5...2\n"
".2.9..\n"
"...5116\n"
".3..9.\n"
"12148117.\n"
".....9\n"
"3.....\n"
"115.314.\n"
"...12.4\n"
"..12103\n"
"14.110.\n"
"1010104.14\n"
"143..69\n"
"11...7.\n"
"5...6.\n") == 0);
free(board189076185);
board189076185 = NULL;
assert( gamma_move(board, 11, 14, 4) == 0 );
assert( gamma_move(board, 11, 5, 0) == 1 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_move(board, 13, 3, 0) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 5, 3) == 0 );
assert( gamma_move(board, 14, 2, 6) == 1 );


char* board188674873 = gamma_board(board);
assert( board188674873 != NULL );
assert( strcmp(board188674873, 
".5...2\n"
".2.9..\n"
"...5116\n"
".3..9.\n"
"12148117.\n"
".....9\n"
"3.....\n"
"115.314.\n"
"..1412.4\n"
"..12103\n"
"14.110.\n"
"1010104.14\n"
"143..69\n"
"11...7.\n"
"5..13611\n") == 0);
free(board188674873);
board188674873 = NULL;
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 9, 9, 1) == 0 );


char* board294995940 = gamma_board(board);
assert( board294995940 != NULL );
assert( strcmp(board294995940, 
".5...2\n"
".2.9..\n"
"...5116\n"
".3.29.\n"
"12148117.\n"
".....9\n"
"3.....\n"
"115.314.\n"
"..1412.4\n"
"..12103\n"
"148110.\n"
"1010104614\n"
"1431769\n"
"11...7.\n"
"5..13611\n") == 0);
free(board294995940);
board294995940 = NULL;
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_move(board, 12, 5, 9) == 0 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 13, 9, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 14, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 11, 1, 2) == 0 );
assert( gamma_move(board, 12, 14, 0) == 0 );
assert( gamma_golden_move(board, 12, 4, 1) == 1 );
assert( gamma_move(board, 13, 1, 14) == 0 );
assert( gamma_move(board, 13, 0, 14) == 1 );
assert( gamma_move(board, 14, 12, 0) == 0 );
assert( gamma_golden_move(board, 14, 3, 3) == 1 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 9, 13, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 11, 9, 1) == 0 );
assert( gamma_move(board, 12, 5, 10) == 1 );


char* board701134318 = gamma_board(board);
assert( board701134318 != NULL );
assert( strcmp(board701134318, 
"1351..2\n"
".2.9..\n"
"...5116\n"
".3.29.\n"
"1214811712\n"
".....9\n"
"3.....\n"
"115.314.\n"
"4.1412.4\n"
"5812103\n"
"1481101\n"
"10101014614\n"
"1431769\n"
"11..11123\n"
"5..13611\n") == 0);
free(board701134318);
board701134318 = NULL;
assert( gamma_move(board, 13, 8, 5) == 0 );
assert( gamma_move(board, 13, 1, 13) == 0 );
assert( gamma_move(board, 14, 13, 0) == 0 );
assert( gamma_move(board, 14, 3, 10) == 0 );
assert( gamma_move(board, 1, 2, 13) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_golden_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_golden_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_free_fields(board, 7) == 28 );
assert( gamma_golden_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 12, 2) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 12, 6, 1) == 0 );
assert( gamma_move(board, 13, 13, 0) == 0 );
assert( gamma_move(board, 14, 11, 5) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );


char* board390519221 = gamma_board(board);
assert( board390519221 != NULL );
assert( strcmp(board390519221, 
"1351..2\n"
".219..\n"
"1..5116\n"
".3.29.\n"
"1214811712\n"
"..1..9\n"
"3....4\n"
"115.314.\n"
"4.1412.4\n"
"5812107\n"
"1481101\n"
"10101014614\n"
"1431769\n"
"11..1123\n"
"5..13611\n") == 0);
free(board390519221);
board390519221 = NULL;
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 11, 1, 5) == 0 );


char* board929563619 = gamma_board(board);
assert( board929563619 != NULL );
assert( strcmp(board929563619, 
"1351..2\n"
".219..\n"
"1..5116\n"
"43.29.\n"
"1214811712\n"
"..1..9\n"
"3....4\n"
"115.3148\n"
"4101412.4\n"
"5812107\n"
"1481101\n"
"10101014614\n"
"1431769\n"
"11.71123\n"
"5..13611\n") == 0);
free(board929563619);
board929563619 = NULL;
assert( gamma_move(board, 12, 5, 3) == 0 );
assert( gamma_move(board, 13, 9, 0) == 0 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_move(board, 14, 11, 5) == 0 );
assert( gamma_move(board, 14, 4, 10) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 9, 5, 11) == 1 );
assert( gamma_free_fields(board, 9) == 20 );
assert( gamma_move(board, 10, 13, 5) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_move(board, 12, 13, 0) == 0 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_move(board, 13, 8, 2) == 0 );
assert( gamma_move(board, 14, 8, 2) == 0 );
assert( gamma_busy_fields(board, 14) == 6 );
assert( gamma_move(board, 1, 4, 14) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_golden_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 10, 8, 3) == 0 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 9, 4) == 0 );


gamma_delete(board);

    return 0;
}
