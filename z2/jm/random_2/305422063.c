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
uuid: 305422063
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 11, 10, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );


char* board338051221 = gamma_board(board);
assert( board338051221 != NULL );
assert( strcmp(board338051221, 
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
".....3..1...\n"
"............\n"
"............\n"
"32..........\n"
"............\n") == 0);
free(board338051221);
board338051221 = NULL;
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 7, 10, 6) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 7, 8) == 1 );
assert( gamma_move(board, 10, 6, 3) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );


char* board574430379 = gamma_board(board);
assert( board574430379 != NULL );
assert( strcmp(board574430379, 
"............\n"
"............\n"
"...6...9.3..\n"
".........1..\n"
".........67.\n"
".......5.4..\n"
".....3..1...\n"
"......10.....\n"
"........1...\n"
"32..........\n"
".....8......\n") == 0);
free(board574430379);
board574430379 = NULL;
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 8, 3, 10) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 9, 5, 8) == 1 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 10, 2, 3) == 1 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_free_fields(board, 2) == 105 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 104 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 10, 11, 1) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board690728155 = gamma_board(board);
assert( board690728155 != NULL );
assert( strcmp(board690728155, 
"5.583.......\n"
".6...57661.4\n"
"8..6.9.9.31.\n"
"....7....1..\n"
".......7.67.\n"
"..1.2.75.4..\n"
"8....3..1...\n"
"4.10..210.....\n"
"........1...\n"
"329........10\n"
"....38....4.\n") == 0);
free(board690728155);
board690728155 = NULL;
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 90 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_free_fields(board, 4) == 89 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 9, 7, 3) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_free_fields(board, 5) == 71 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 10, 8, 7) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_golden_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 10, 7, 10) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_free_fields(board, 8) == 57 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_golden_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_golden_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );


char* board847900788 = gamma_board(board);
assert( board847900788 != NULL );
assert( strcmp(board847900788, 
"53583.410..7.\n"
".6.5777661.4\n"
"87.67999.31.\n"
"74..78..101..\n"
".24..857.67.\n"
"..152175.47.\n"
"8.8.338.1.25\n"
"4.10942109..4.\n"
"2255...101.4.\n"
"32973..38..10\n"
"6...386..34.\n") == 0);
free(board847900788);
board847900788 = NULL;
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 10, 5, 5) == 0 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_golden_move(board, 2, 7, 9) == 1 );


char* board280561037 = gamma_board(board);
assert( board280561037 != NULL );
assert( strcmp(board280561037, 
"53583.410..7.\n"
".6.5777261.4\n"
"87.67999.31.\n"
"74..78..101..\n"
".24..857.67.\n"
"..152175.47.\n"
"8.8.338.1.25\n"
"4.10942109..4.\n"
"2255...101.4.\n"
"32973..38..10\n"
"6...386..34.\n") == 0);
free(board280561037);
board280561037 = NULL;
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_golden_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_move(board, 9, 10, 9) == 1 );
assert( gamma_move(board, 10, 2, 10) == 0 );
assert( gamma_move(board, 10, 6, 10) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );


char* board234786277 = gamma_board(board);
assert( board234786277 != NULL );
assert( strcmp(board234786277, 
"53583.410..7.\n"
".6.577726194\n"
"87.67999.31.\n"
"74..78.3101..\n"
".24..857.67.\n"
"..152175.47.\n"
"8.8.338.1.25\n"
"4.10942109..4.\n"
"2255...101.4.\n"
"329736.38.710\n"
"6..3386..34.\n") == 0);
free(board234786277);
board234786277 = NULL;
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_free_fields(board, 9) == 42 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_free_fields(board, 10) == 42 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );


char* board761704182 = gamma_board(board);
assert( board761704182 != NULL );
assert( strcmp(board761704182, 
"53583.410..7.\n"
".6.577726194\n"
"87.67999.31.\n"
"74..78.3101..\n"
".24..857.67.\n"
"..152175.47.\n"
"8.8.33851.25\n"
"4.10942109..4.\n"
"2255...101.4.\n"
"329736.38.710\n"
"6..3386..34.\n") == 0);
free(board761704182);
board761704182 = NULL;
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 9, 10, 8) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );


char* board487599968 = gamma_board(board);
assert( board487599968 != NULL );
assert( strcmp(board487599968, 
"53583.410..7.\n"
".6.577726194\n"
"87.67999.31.\n"
"745.78103101..\n"
".2432857.67.\n"
"..152175.47.\n"
"8.8.33851.25\n"
"4.10942109..4.\n"
"2255.4.101.4.\n"
"329736.38.710\n"
"6..3386..34.\n") == 0);
free(board487599968);
board487599968 = NULL;
assert( gamma_move(board, 6, 11, 5) == 1 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );


char* board885782460 = gamma_board(board);
assert( board885782460 != NULL );
assert( strcmp(board885782460, 
"53583.410..7.\n"
".6.577726194\n"
"87.67999231.\n"
"745.78103101..\n"
".2432857.67.\n"
"..152175.476\n"
"8.8.33851.25\n"
"4.10942109..4.\n"
"2255.4.101.4.\n"
"329736.381710\n"
"6..3386..34.\n") == 0);
free(board885782460);
board885782460 = NULL;
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 9, 10, 8) == 0 );
assert( gamma_move(board, 9, 11, 3) == 1 );
assert( gamma_move(board, 10, 9, 2) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_golden_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );


char* board865956496 = gamma_board(board);
assert( board865956496 != NULL );
assert( strcmp(board865956496, 
"53583.410..7.\n"
".6.577726194\n"
"87.67999231.\n"
"745.78103101..\n"
".2432857.67.\n"
"8.1521752476\n"
"8.8.33851.25\n"
"4.10942109..49\n"
"2255.4.101104.\n"
"329736.381710\n"
"6..3386..34.\n") == 0);
free(board865956496);
board865956496 = NULL;
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_golden_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_free_fields(board, 7) == 28 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_golden_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 8, 11) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 10, 6, 10) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 10, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 10, 7, 5) == 0 );


char* board493229359 = gamma_board(board);
assert( board493229359 != NULL );
assert( strcmp(board493229359, 
"53583.410..7.\n"
".6.577726194\n"
"87.67999231.\n"
"745.78103101..\n"
"82432857.67.\n"
"8.1521752476\n"
"8.8.33851.25\n"
"4510942109..49\n"
"2255.4.101104.\n"
"329736.381710\n"
"6..3386.634.\n") == 0);
free(board493229359);
board493229359 = NULL;
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 10, 10, 11) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );


char* board498987507 = gamma_board(board);
assert( board498987507 != NULL );
assert( strcmp(board498987507, 
"53583.410..7.\n"
".6.577726194\n"
"87.67999231.\n"
"745278103101..\n"
"82432857.67.\n"
"8.1521752476\n"
"8.8.33851.25\n"
"4510942109..49\n"
"2255.4.101104.\n"
"329736.381710\n"
"6..3386.634.\n") == 0);
free(board498987507);
board498987507 = NULL;
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );


char* board318770887 = gamma_board(board);
assert( board318770887 != NULL );
assert( strcmp(board318770887, 
"53583.410..7.\n"
".6.577726194\n"
"87.67999231.\n"
"745278103101..\n"
"82432857.67.\n"
"8.1521752476\n"
"8.8.33851.25\n"
"4510942109..49\n"
"2255.4.101104.\n"
"329736.381710\n"
"6..3386.634.\n") == 0);
free(board318770887);
board318770887 = NULL;
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_free_fields(board, 8) == 24 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );


char* board539521724 = gamma_board(board);
assert( board539521724 != NULL );
assert( strcmp(board539521724, 
"53583.410..7.\n"
".6.577726194\n"
"87667999231.\n"
"745278103101..\n"
"82432857.67.\n"
"8.1521752476\n"
"8108.33851.25\n"
"4510942109..49\n"
"2255.4.101104.\n"
"3297368381710\n"
"6..3386.634.\n") == 0);
free(board539521724);
board539521724 = NULL;
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 10, 9, 10) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );


char* board842743909 = gamma_board(board);
assert( board842743909 != NULL );
assert( strcmp(board842743909, 
"53583.410.107.\n"
".6.577726194\n"
"87667999231.\n"
"745278103101..\n"
"82432857.67.\n"
"8.1521752476\n"
"8108.33851.25\n"
"4510942109..49\n"
"2255.4.101104.\n"
"3297368381710\n"
"6..3386.634.\n") == 0);
free(board842743909);
board842743909 = NULL;
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_free_fields(board, 7) == 22 );


char* board781296010 = gamma_board(board);
assert( board781296010 != NULL );
assert( strcmp(board781296010, 
"53583.410.107.\n"
".6.577726194\n"
"87667999231.\n"
"745278103101..\n"
"82432857.67.\n"
"8.1521752476\n"
"8108.33851.25\n"
"4510942109..49\n"
"2255.4.101104.\n"
"3297368381710\n"
"6..3386.634.\n") == 0);
free(board781296010);
board781296010 = NULL;
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_free_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_free_fields(board, 7) == 21 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 9, 10, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );


char* board381910579 = gamma_board(board);
assert( board381910579 != NULL );
assert( strcmp(board381910579, 
"53583.410.107.\n"
".6.577726194\n"
"87667999231.\n"
"745278103101..\n"
"82432857.67.\n"
"8.1521752476\n"
"8108.33851.25\n"
"4510942109..49\n"
"2255.4.101104.\n"
"3297368181710\n"
"6..33862634.\n") == 0);
free(board381910579);
board381910579 = NULL;
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_free_fields(board, 10) == 7 );
assert( gamma_move(board, 1, 11, 5) == 0 );


char* board662492838 = gamma_board(board);
assert( board662492838 != NULL );
assert( strcmp(board662492838, 
"53583.410.107.\n"
".6.577726194\n"
"87667999231.\n"
"745278103101..\n"
"82432857.67.\n"
"8.1521752476\n"
"8108.33851.25\n"
"4510942109..49\n"
"2255.4.101104.\n"
"3297368181710\n"
"6..33862634.\n") == 0);
free(board662492838);
board662492838 = NULL;
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );


gamma_delete(board);

    return 0;
}
