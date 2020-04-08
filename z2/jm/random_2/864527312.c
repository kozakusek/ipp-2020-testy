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
uuid: 864527312
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 14, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );


char* board608608508 = gamma_board(board);
assert( board608608508 != NULL );
assert( strcmp(board608608508, 
".......\n"
".......\n"
".......\n"
"..5....\n"
".......\n"
"..4....\n"
".6..5..\n"
".......\n"
"......4\n") == 0);
free(board608608508);
board608608508 = NULL;
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 2) == 0 );


char* board862955824 = gamma_board(board);
assert( board862955824 != NULL );
assert( strcmp(board862955824, 
".......\n"
".......\n"
".......\n"
"..5....\n"
"...7...\n"
"..4....\n"
".6..5..\n"
".......\n"
"......4\n") == 0);
free(board862955824);
board862955824 = NULL;
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_free_fields(board, 9) == 56 );
assert( gamma_move(board, 10, 5, 5) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 11, 6, 8) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 8) == 1 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_move(board, 13, 1, 0) == 1 );
assert( gamma_move(board, 14, 5, 3) == 1 );
assert( gamma_move(board, 14, 2, 6) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );


char* board285749866 = gamma_board(board);
assert( board285749866 != NULL );
assert( strcmp(board285749866, 
".3.12..11\n"
".......\n"
"..14....\n"
"..5..10.\n"
"...71..\n"
"..4..14.\n"
"96..5.3\n"
".......\n"
".13....4\n") == 0);
free(board285749866);
board285749866 = NULL;
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 10, 3, 2) == 1 );
assert( gamma_move(board, 11, 0, 7) == 1 );
assert( gamma_move(board, 12, 3, 5) == 1 );
assert( gamma_move(board, 12, 6, 0) == 0 );
assert( gamma_move(board, 13, 1, 0) == 0 );
assert( gamma_move(board, 14, 5, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board645050824 = gamma_board(board);
assert( board645050824 != NULL );
assert( strcmp(board645050824, 
".3.12..11\n"
"11..9...\n"
"..14...8\n"
"3.512.106\n"
".3.71..\n"
"..4.814.\n"
"96.105.3\n"
"..1..14.\n"
"413....4\n") == 0);
free(board645050824);
board645050824 = NULL;
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );


char* board613518271 = gamma_board(board);
assert( board613518271 != NULL );
assert( strcmp(board613518271, 
".3.12..11\n"
"11..9...\n"
"..14...8\n"
"3.512.106\n"
".3.71..\n"
".647814.\n"
"96.105.3\n"
"..1..14.\n"
"413....4\n") == 0);
free(board613518271);
board613518271 = NULL;
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 11, 7, 5) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );


char* board513204786 = gamma_board(board);
assert( board513204786 != NULL );
assert( strcmp(board513204786, 
".3.12..11\n"
"11..9...\n"
"..14...8\n"
"3.5128106\n"
".3.71..\n"
".647814.\n"
"96.105.3\n"
"..1..14.\n"
"413....4\n") == 0);
free(board513204786);
board513204786 = NULL;
assert( gamma_move(board, 13, 5, 5) == 0 );
assert( gamma_move(board, 13, 6, 7) == 1 );
assert( gamma_move(board, 14, 8, 2) == 0 );
assert( gamma_move(board, 14, 4, 8) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_golden_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_free_fields(board, 8) == 27 );
assert( gamma_golden_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_free_fields(board, 10) == 26 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 12, 4, 2) == 0 );


char* board955943000 = gamma_board(board);
assert( board955943000 != NULL );
assert( strcmp(board955943000, 
".3.1214.11\n"
"11..9..13\n"
"..14..28\n"
"3.5128106\n"
".3.71.8\n"
".647814.\n"
"962105.3\n"
".101..14.\n"
"413....4\n") == 0);
free(board955943000);
board955943000 = NULL;
assert( gamma_move(board, 13, 1, 0) == 0 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_busy_fields(board, 13) == 3 );
assert( gamma_move(board, 14, 3, 0) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_free_fields(board, 9) == 22 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 12, 5, 0) == 1 );
assert( gamma_move(board, 13, 5, 2) == 1 );
assert( gamma_move(board, 13, 0, 1) == 1 );
assert( gamma_move(board, 14, 5, 7) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board658602225 = gamma_board(board);
assert( board658602225 != NULL );
assert( strcmp(board658602225, 
".3.1214.11\n"
"11..9.1413\n"
"..141.28\n"
"3135128106\n"
"93.71.8\n"
".647814.\n"
"962105133\n"
"13101..142\n"
"413.14.124\n") == 0);
free(board658602225);
board658602225 = NULL;
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_free_fields(board, 5) == 16 );


char* board547111410 = gamma_board(board);
assert( board547111410 != NULL );
assert( strcmp(board547111410, 
".3.1214.11\n"
"11..9.1413\n"
"..141.28\n"
"3135128106\n"
"93.71.8\n"
".6478144\n"
"962105133\n"
"13101..142\n"
"413.14.124\n") == 0);
free(board547111410);
board547111410 = NULL;
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board273591270 = gamma_board(board);
assert( board273591270 != NULL );
assert( strcmp(board273591270, 
".3.1214.11\n"
"11.79.1413\n"
"..141.28\n"
"3135128106\n"
"93.71.8\n"
".6478144\n"
"962105133\n"
"13101..142\n"
"413.14.124\n") == 0);
free(board273591270);
board273591270 = NULL;
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 7, 1) == 0 );


char* board872587775 = gamma_board(board);
assert( board872587775 != NULL );
assert( strcmp(board872587775, 
".3.1214.11\n"
"11.79.1413\n"
"..141.28\n"
"3135128106\n"
"93.71.8\n"
".6478144\n"
"962105133\n"
"13101..142\n"
"4131014.124\n") == 0);
free(board872587775);
board872587775 = NULL;
assert( gamma_move(board, 12, 4, 7) == 1 );
assert( gamma_move(board, 13, 4, 5) == 0 );
assert( gamma_golden_move(board, 13, 7, 0) == 0 );
assert( gamma_move(board, 14, 7, 1) == 0 );
assert( gamma_move(board, 14, 5, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 12, 5, 7) == 0 );
assert( gamma_move(board, 13, 6, 3) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 6, 1) == 0 );
assert( gamma_move(board, 14, 1, 8) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );


char* board486831533 = gamma_board(board);
assert( board486831533 != NULL );
assert( strcmp(board486831533, 
".3.1214.11\n"
"11.79121413\n"
"7.141728\n"
"3135128106\n"
"93271.8\n"
"46478144\n"
"962105133\n"
"13101..142\n"
"4131014.124\n") == 0);
free(board486831533);
board486831533 = NULL;
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 12, 8, 5) == 0 );
assert( gamma_move(board, 12, 2, 5) == 0 );
assert( gamma_move(board, 13, 8, 2) == 0 );
assert( gamma_move(board, 14, 8, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );


char* board115850299 = gamma_board(board);
assert( board115850299 != NULL );
assert( strcmp(board115850299, 
".3.1214.11\n"
"11679121413\n"
"7.141728\n"
"3135128106\n"
"93271.8\n"
"46478144\n"
"962105133\n"
"13101..142\n"
"4131014.124\n") == 0);
free(board115850299);
board115850299 = NULL;
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 2, 8) == 1 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 13, 4, 4) == 0 );


char* board891922500 = gamma_board(board);
assert( board891922500 != NULL );
assert( strcmp(board891922500, 
".391214.11\n"
"11679121413\n"
"7.141728\n"
"3135128106\n"
"93271.8\n"
"46478144\n"
"962105133\n"
"13101..142\n"
"413101411124\n") == 0);
free(board891922500);
board891922500 = NULL;
assert( gamma_move(board, 14, 1, 3) == 0 );
assert( gamma_move(board, 14, 6, 7) == 0 );


gamma_delete(board);

    return 0;
}
