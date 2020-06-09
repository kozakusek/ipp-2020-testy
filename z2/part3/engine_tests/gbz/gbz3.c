#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"



int main()

{

gamma_t *test = gamma_new(50, 25, 8, 10);

assert(1 == gamma_move(test, 3, 24, 4));

assert(1 == gamma_move(test, 5, 20, 3));

assert(1 == gamma_move(test, 1, 35, 4));

assert(1 == gamma_move(test, 7, 22, 22));

assert(1 == gamma_move(test, 5, 39, 1));

assert(1 == gamma_move(test, 8, 34, 4));

assert(1 == gamma_move(test, 4, 48, 17));

assert(1 == gamma_move(test, 3, 30, 19));

assert(1 == gamma_move(test, 8, 20, 2));

assert(0 == gamma_move(test, 9, 49, 17));

assert(0 == gamma_move(test, 9, 0, -1));

assert(1 == gamma_move(test, 1, 37, 16));

assert(1 == gamma_move(test, 3, 44, 12));

assert(1 == gamma_move(test, 1, 19, 2));

assert(1 == gamma_move(test, 3, 21, 22));

assert(3 == gamma_busy_fields(test, 1));

assert(1237 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(0 == gamma_busy_fields(test, 2));

assert(1237 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(4 == gamma_busy_fields(test, 3));

assert(1237 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(1 == gamma_busy_fields(test, 4));

assert(1237 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(2 == gamma_busy_fields(test, 5));

assert(1237 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(0 == gamma_busy_fields(test, 6));

assert(1237 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(1 == gamma_busy_fields(test, 7));

assert(1237 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(2 == gamma_busy_fields(test, 8));

assert(1237 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 2, 24, 3));

assert(1 == gamma_move(test, 3, 1, 1));

assert(1 == gamma_move(test, 8, 19, 3));

assert(0 == gamma_move(test, 0, 48, 17));

assert(1 == gamma_move(test, 1, 25, 3));

assert(1 == gamma_move(test, 2, 21, 23));

assert(1 == gamma_move(test, 5, 0, 1));

assert(0 == gamma_move(test, 0, 34, 5));

assert(1 == gamma_move(test, 4, 26, 3));

assert(0 == gamma_move(test, 0, 30, 20));

assert(1 == gamma_move(test, 6, 34, 6));

assert(1 == gamma_move(test, 5, 13, 11));

assert(1 == gamma_move(test, 4, 33, 5));

assert(1 == gamma_move(test, 3, 30, 21));

assert(1 == gamma_move(test, 6, 41, 7));

assert(1 == gamma_golden_move(test, 8, 30, 21));

assert(4 == gamma_busy_fields(test, 1));

assert(1225 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(2 == gamma_busy_fields(test, 2));

assert(1225 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(5 == gamma_busy_fields(test, 3));

assert(1225 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(3 == gamma_busy_fields(test, 4));

assert(1225 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(4 == gamma_busy_fields(test, 5));

assert(1225 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(2 == gamma_busy_fields(test, 6));

assert(1225 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(1 == gamma_busy_fields(test, 7));

assert(1225 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(4 == gamma_busy_fields(test, 8));

assert(1225 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 2, 49, 17));

assert(1 == gamma_move(test, 6, 0, 2));

assert(1 == gamma_move(test, 6, 26, 20));

assert(0 == gamma_move(test, 0, 45, 2));

assert(0 == gamma_move(test, 0, 13, 2));

assert(0 == gamma_move(test, 9, 25, 4));

assert(0 == gamma_move(test, 9, 1, -1));

assert(1 == gamma_move(test, 6, 27, 12));

assert(1 == gamma_move(test, 2, 13, 10));

assert(1 == gamma_move(test, 2, 22, 14));

assert(1 == gamma_move(test, 6, 14, 18));

assert(1 == gamma_move(test, 1, 12, 10));

assert(1 == gamma_move(test, 4, 20, 23));

assert(1 == gamma_move(test, 7, 30, 22));

assert(1 == gamma_move(test, 5, 39, 0));

assert(5 == gamma_busy_fields(test, 1));

assert(1214 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(5 == gamma_busy_fields(test, 2));

assert(1214 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(5 == gamma_busy_fields(test, 3));

assert(1214 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(4 == gamma_busy_fields(test, 4));

assert(1214 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(5 == gamma_busy_fields(test, 5));

assert(1214 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(6 == gamma_busy_fields(test, 6));

assert(1214 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(2 == gamma_busy_fields(test, 7));

assert(1214 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(4 == gamma_busy_fields(test, 8));

assert(1214 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 5, 19, 16));

assert(1 == gamma_move(test, 1, 33, 6));

assert(1 == gamma_move(test, 1, 19, 23));

assert(1 == gamma_move(test, 3, 19, 22));

assert(1 == gamma_move(test, 6, 20, 4));

assert(1 == gamma_move(test, 3, 11, 10));

assert(1 == gamma_move(test, 3, 28, 24));

assert(1 == gamma_move(test, 5, 20, 5));

assert(0 == gamma_move(test, 9, 34, 6));

assert(1 == gamma_move(test, 3, 3, 12));

assert(1 == gamma_move(test, 1, 10, 5));

assert(1 == gamma_move(test, 2, 0, 4));

assert(1 == gamma_move(test, 3, 40, 21));

assert(0 == gamma_move(test, 0, 20, 3));

assert(1 == gamma_move(test, 1, 31, 11));

assert(9 == gamma_busy_fields(test, 1));

assert(1201 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(6 == gamma_busy_fields(test, 2));

assert(1201 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(10 == gamma_busy_fields(test, 3));

assert(32 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(4 == gamma_busy_fields(test, 4));

assert(1201 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(7 == gamma_busy_fields(test, 5));

assert(1201 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(7 == gamma_busy_fields(test, 6));

assert(1201 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(2 == gamma_busy_fields(test, 7));

assert(1201 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(4 == gamma_busy_fields(test, 8));

assert(1201 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 8, 25, 4));

assert(1 == gamma_move(test, 5, 49, 18));

assert(1 == gamma_move(test, 6, 34, 7));

assert(1 == gamma_move(test, 6, 18, 3));

assert(1 == gamma_move(test, 5, 6, 7));

assert(0 == gamma_move(test, 0, 35, 7));

assert(1 == gamma_move(test, 8, 37, 2));

assert(1 == gamma_move(test, 1, 49, 19));

assert(1 == gamma_move(test, 8, 17, 19));

assert(1 == gamma_move(test, 8, 12, 19));

assert(0 == gamma_move(test, 9, 49, 18));

assert(1 == gamma_move(test, 7, 13, 4));

assert(1 == gamma_move(test, 3, 29, 24));

assert(1 == gamma_move(test, 8, 21, 3));

assert(0 == gamma_move(test, 0, 49, 17));

assert(10 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(6 == gamma_busy_fields(test, 2));

assert(1189 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(11 == gamma_busy_fields(test, 3));

assert(32 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(4 == gamma_busy_fields(test, 4));

assert(1189 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(9 == gamma_busy_fields(test, 5));

assert(1189 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(9 == gamma_busy_fields(test, 6));

assert(1189 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(3 == gamma_busy_fields(test, 7));

assert(1189 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(9 == gamma_busy_fields(test, 8));

assert(1189 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 4, 23, 4));

assert(0 == gamma_move(test, 0, 31, 21));

assert(0 == gamma_move(test, 9, 23, 5));

assert(0 == gamma_move(test, 2, 50, 4));

assert(0 == gamma_move(test, 3, 17, 1));

assert(1 == gamma_move(test, 4, 24, 8));

assert(1 == gamma_move(test, 4, 44, 13));

assert(1 == gamma_move(test, 2, 12, 0));

assert(1 == gamma_move(test, 6, 29, 16));

assert(0 == gamma_move(test, 3, 14, 9));

assert(0 == gamma_move(test, 0, 20, 3));

assert(1 == gamma_move(test, 8, 39, 23));

assert(1 == gamma_move(test, 2, 27, 23));

assert(0 == gamma_move(test, 8, 22, 8));

assert(1 == gamma_move(test, 7, 48, 18));

assert(10 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(8 == gamma_busy_fields(test, 2));

assert(1181 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(11 == gamma_busy_fields(test, 3));

assert(30 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(7 == gamma_busy_fields(test, 4));

assert(1181 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(9 == gamma_busy_fields(test, 5));

assert(1181 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(1181 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(4 == gamma_busy_fields(test, 7));

assert(1181 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(10 == gamma_busy_fields(test, 8));

assert(29 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 4, 10, 10));

assert(1 == gamma_move(test, 3, 30, 20));

assert(0 == gamma_move(test, 9, 20, 2));

assert(1 == gamma_move(test, 6, 25, 21));

assert(1 == gamma_move(test, 7, 10, 9));

assert(1 == gamma_move(test, 7, 17, 12));

assert(0 == gamma_move(test, 6, 22, 1));

assert(0 == gamma_move(test, 6, 36, 20));

assert(1 == gamma_move(test, 5, 30, 9));

assert(0 == gamma_move(test, 1, 46, 15));

assert(0 == gamma_move(test, 1, 44, 7));

assert(0 == gamma_move(test, 3, 43, 24));

assert(0 == gamma_move(test, 0, 19, 2));

assert(0 == gamma_move(test, 3, 28, 2));

assert(1 == gamma_move(test, 4, 19, 1));

assert(10 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(8 == gamma_busy_fields(test, 2));

assert(1174 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(30 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(9 == gamma_busy_fields(test, 4));

assert(1174 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(10 == gamma_busy_fields(test, 5));

assert(1174 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(6 == gamma_busy_fields(test, 7));

assert(1174 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(10 == gamma_busy_fields(test, 8));

assert(28 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 2, 37, 1));

assert(1 == gamma_move(test, 5, 3, 16));

assert(1 == gamma_move(test, 7, 36, 7));

assert(1 == gamma_move(test, 2, 40, 1));

assert(0 == gamma_move(test, 2, 49, 2));

assert(0 == gamma_move(test, 1, 31, 15));

assert(0 == gamma_move(test, 6, 17, 2));

assert(0 == gamma_move(test, 8, 9, 2));

assert(0 == gamma_move(test, 3, 47, 13));

assert(0 == gamma_move(test, 8, 20, 19));

assert(0 == gamma_move(test, 1, 40, 18));

assert(0 == gamma_move(test, 5, 2, 21));

assert(0 == gamma_move(test, 3, 8, 0));

assert(0 == gamma_move(test, 3, 7, 13));

assert(0 == gamma_move(test, 5, 50, 0));

assert(10 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(10 == gamma_busy_fields(test, 2));

assert(27 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(30 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(9 == gamma_busy_fields(test, 4));

assert(1170 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(7 == gamma_busy_fields(test, 7));

assert(1170 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(10 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 1, 47, 24));

assert(0 == gamma_move(test, 9, 19, 22));

assert(0 == gamma_move(test, 0, 0, -2));

assert(0 == gamma_move(test, 6, 9, 16));

assert(0 == gamma_move(test, 6, 2, 0));

assert(0 == gamma_move(test, 2, 12, 14));

assert(0 == gamma_move(test, 6, 20, 25));

assert(0 == gamma_move(test, 2, 47, 6));

assert(0 == gamma_move(test, 5, 40, 8));

assert(0 == gamma_move(test, 8, 6, 19));

assert(0 == gamma_move(test, 5, 47, 3));

assert(0 == gamma_move(test, 3, 0, 9));

assert(0 == gamma_move(test, 2, 35, 1));

assert(0 == gamma_move(test, 5, 33, 10));

assert(0 == gamma_move(test, 0, 36, 6));

assert(1 == gamma_golden_move(test, 7, 39, 0));

assert(10 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(10 == gamma_busy_fields(test, 2));

assert(27 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(30 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(9 == gamma_busy_fields(test, 4));

assert(1170 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(10 == gamma_busy_fields(test, 5));

assert(25 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(8 == gamma_busy_fields(test, 7));

assert(1170 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(10 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 2, 40, 2));

assert(1 == gamma_move(test, 4, 4, 22));

assert(1 == gamma_move(test, 7, 31, 20));

assert(1 == gamma_move(test, 7, 40, 3));

assert(0 == gamma_move(test, 0, 39, 3));

assert(0 == gamma_move(test, 0, 22, 6));

assert(0 == gamma_move(test, 2, 38, 14));

assert(0 == gamma_move(test, 5, 3, 12));

assert(0 == gamma_move(test, 0, 36, 5));

assert(0 == gamma_move(test, 0, 22, 6));

assert(0 == gamma_move(test, 1, 44, 25));

assert(0 == gamma_move(test, 0, 18, 22));

assert(0 == gamma_move(test, 9, 23, 5));

assert(0 == gamma_move(test, 7, 17, 14));

assert(0 == gamma_move(test, 9, 40, 3));

assert(10 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(10 == gamma_busy_fields(test, 4));

assert(29 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(10 == gamma_busy_fields(test, 5));

assert(25 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(10 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(10 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 3, 8, 3));

assert(1 == gamma_move(test, 1, 33, 7));

assert(0 == gamma_move(test, 8, 39, 5));

assert(0 == gamma_move(test, 7, 48, 3));

assert(1 == gamma_move(test, 7, 40, 4));

assert(0 == gamma_move(test, 0, 39, 4));

assert(0 == gamma_move(test, 6, 44, 0));

assert(0 == gamma_move(test, 2, 9, 19));

assert(0 == gamma_move(test, 9, 3, 0));

assert(0 == gamma_move(test, 4, 30, 18));

assert(0 == gamma_move(test, 0, 45, 10));

assert(0 == gamma_move(test, 2, 50, 17));

assert(0 == gamma_move(test, 5, 49, 16));

assert(0 == gamma_move(test, 5, 14, 2));

assert(0 == gamma_move(test, 4, 48, 1));

assert(11 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(10 == gamma_busy_fields(test, 4));

assert(29 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(10 == gamma_busy_fields(test, 5));

assert(25 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(33 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(11 == gamma_busy_fields(test, 7));

assert(33 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(10 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 1, 10, 19));

assert(0 == gamma_move(test, 9, 17, 23));

assert(0 == gamma_move(test, 9, -2, -3));

assert(0 == gamma_move(test, 5, 15, 2));

assert(0 == gamma_move(test, 1, 40, 6));

assert(0 == gamma_move(test, 4, 23, 25));

assert(0 == gamma_move(test, 1, 17, 0));

assert(0 == gamma_move(test, 6, 33, 20));

assert(0 == gamma_move(test, 5, 37, 4));

assert(0 == gamma_move(test, 4, 15, 11));

assert(0 == gamma_move(test, 9, 32, 19));

assert(0 == gamma_move(test, 1, 9, 7));

assert(0 == gamma_move(test, 4, 1, 10));

assert(1 == gamma_move(test, 7, 32, 20));

assert(0 == gamma_move(test, 8, 16, 4));

assert(11 == gamma_busy_fields(test, 1));

assert(26 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(10 == gamma_busy_fields(test, 4));

assert(29 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(10 == gamma_busy_fields(test, 5));

assert(25 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(33 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(35 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(10 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 9, 32, 19));

assert(0 == gamma_move(test, 0, -1, -2));

assert(0 == gamma_move(test, 7, 9, 8));

assert(0 == gamma_move(test, 8, 12, 4));

assert(0 == gamma_move(test, 2, 47, 11));

assert(0 == gamma_move(test, 0, 2, 1));

assert(0 == gamma_move(test, 2, 8, 23));

assert(0 == gamma_move(test, 5, 15, 24));

assert(1 == gamma_move(test, 1, 36, 4));

assert(0 == gamma_move(test, 3, 36, 8));

assert(0 == gamma_move(test, 8, 36, 13));

assert(0 == gamma_move(test, 0, 47, 18));

assert(1 == gamma_move(test, 4, 23, 5));

assert(0 == gamma_move(test, 0, 33, 19));

assert(0 == gamma_move(test, 0, 22, 5));

assert(12 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(31 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(10 == gamma_busy_fields(test, 5));

assert(25 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(33 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(35 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(10 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 0, 18, 1));

assert(0 == gamma_move(test, 7, 5, 24));

assert(0 == gamma_move(test, 0, 39, 6));

assert(0 == gamma_move(test, 8, 6, 6));

assert(0 == gamma_move(test, 2, 21, 9));

assert(0 == gamma_move(test, 2, 0, 0));

assert(0 == gamma_move(test, 2, 21, 2));

assert(0 == gamma_move(test, 7, 46, 6));

assert(0 == gamma_move(test, 9, 39, 7));

assert(0 == gamma_move(test, 8, 27, 4));

assert(0 == gamma_move(test, 3, 18, 19));

assert(0 == gamma_move(test, 2, 48, 11));

assert(0 == gamma_move(test, 7, 20, 13));

assert(0 == gamma_move(test, 4, 2, 17));

assert(0 == gamma_move(test, 6, 30, 22));

assert(12 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(31 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(10 == gamma_busy_fields(test, 5));

assert(25 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(33 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(35 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(10 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 8, 10, 6));

assert(0 == gamma_move(test, 6, 21, 10));

assert(1 == gamma_move(test, 7, 10, 8));

assert(0 == gamma_move(test, 8, 8, 10));

assert(0 == gamma_move(test, 9, 47, 17));

assert(0 == gamma_move(test, 2, 28, 12));

assert(0 == gamma_move(test, 0, 1, 1));

assert(0 == gamma_move(test, 4, 49, 0));

assert(0 == gamma_move(test, 4, 46, 6));

assert(0 == gamma_move(test, 7, 1, 19));

assert(0 == gamma_move(test, 7, 43, 15));

assert(0 == gamma_move(test, 2, 36, 14));

assert(1 == gamma_move(test, 3, 1, 2));

assert(0 == gamma_move(test, 3, 29, 5));

assert(0 == gamma_move(test, 6, 28, 8));

assert(1 == gamma_golden_move(test, 5, 1, 1));

assert(12 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(31 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(11 == gamma_busy_fields(test, 6));

assert(32 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(13 == gamma_busy_fields(test, 7));

assert(37 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(10 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 0, 40, 6));

assert(0 == gamma_move(test, 0, 23, 5));

assert(0 == gamma_move(test, 7, 25, 13));

assert(0 == gamma_move(test, 4, 22, 13));

assert(0 == gamma_move(test, 9, 32, 4));

assert(0 == gamma_move(test, 3, 2, 4));

assert(0 == gamma_move(test, 8, 8, 0));

assert(0 == gamma_move(test, 3, 25, 14));

assert(0 == gamma_move(test, 8, 43, 19));

assert(0 == gamma_move(test, 2, 19, 15));

assert(0 == gamma_move(test, 2, 38, 17));

assert(0 == gamma_move(test, 8, 41, 14));

assert(0 == gamma_move(test, 5, 36, 17));

assert(0 == gamma_move(test, 1, 41, 24));

assert(0 == gamma_move(test, 0, 17, 24));

assert(12 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(31 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(11 == gamma_busy_fields(test, 6));

assert(32 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(13 == gamma_busy_fields(test, 7));

assert(37 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(10 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 8, 25, 12));

assert(0 == gamma_move(test, 2, 19, 9));

assert(0 == gamma_move(test, 3, 34, 5));

assert(1 == gamma_move(test, 6, 14, 19));

assert(0 == gamma_move(test, 4, 0, 7));

assert(0 == gamma_move(test, 3, 31, 9));

assert(0 == gamma_move(test, 0, 21, 0));

assert(0 == gamma_move(test, 2, 6, 15));

assert(0 == gamma_move(test, 2, 34, 5));

assert(0 == gamma_move(test, 6, 22, 20));

assert(0 == gamma_move(test, 6, 25, 12));

assert(0 == gamma_move(test, 0, 9, 8));

assert(0 == gamma_move(test, 5, 43, 0));

assert(0 == gamma_move(test, 9, 16, 6));

assert(0 == gamma_move(test, 6, 16, 6));

assert(12 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(31 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(12 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(13 == gamma_busy_fields(test, 7));

assert(37 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(10 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 9, 22, 2));

assert(0 == gamma_move(test, 8, 0, 12));

assert(0 == gamma_move(test, 0, 46, 17));

assert(0 == gamma_move(test, 9, 23, 2));

assert(1 == gamma_move(test, 6, 0, 3));

assert(0 == gamma_move(test, 1, 15, 23));

assert(0 == gamma_move(test, 7, 50, 2));

assert(0 == gamma_move(test, 4, 43, 1));

assert(0 == gamma_move(test, 9, 33, 18));

assert(0 == gamma_move(test, 1, 19, 17));

assert(0 == gamma_move(test, 1, 29, 5));

assert(0 == gamma_move(test, 3, 38, 11));

assert(0 == gamma_move(test, 5, 1, 10));

assert(0 == gamma_move(test, 2, 2, 10));

assert(0 == gamma_move(test, 9, 1, 1));

assert(12 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(27 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(31 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(13 == gamma_busy_fields(test, 7));

assert(37 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(10 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 4, 25, 8));

assert(0 == gamma_move(test, 6, 7, 20));

assert(0 == gamma_move(test, 8, 10, 5));

assert(0 == gamma_move(test, 6, 25, 11));

assert(0 == gamma_move(test, 6, 16, 15));

assert(0 == gamma_move(test, 5, 34, 6));

assert(0 == gamma_move(test, 1, 42, 23));

assert(0 == gamma_move(test, 5, 20, 25));

assert(0 == gamma_move(test, 5, 45, 6));

assert(1 == gamma_move(test, 8, 34, 3));

assert(0 == gamma_move(test, 2, 48, 21));

assert(0 == gamma_move(test, 9, 1, 2));

assert(0 == gamma_move(test, 8, 42, 19));

assert(0 == gamma_move(test, 1, 23, 17));

assert(0 == gamma_move(test, 8, 6, 13));

assert(12 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(27 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(13 == gamma_busy_fields(test, 7));

assert(37 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(29 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 6, 11, 14));

assert(0 == gamma_move(test, 9, 6, 8));

assert(0 == gamma_move(test, 1, 23, 0));

assert(0 == gamma_move(test, 2, 31, 8));

assert(0 == gamma_move(test, 1, 19, 7));

assert(0 == gamma_move(test, 6, 22, 5));

assert(0 == gamma_move(test, 9, 7, 8));

assert(0 == gamma_move(test, 6, 35, 23));

assert(0 == gamma_move(test, 3, 43, 13));

assert(0 == gamma_move(test, 9, 22, -1));

assert(0 == gamma_move(test, 5, 23, 25));

assert(0 == gamma_move(test, 9, 34, 4));

assert(0 == gamma_move(test, 1, 21, 1));

assert(0 == gamma_move(test, 0, 16, 21));

assert(0 == gamma_move(test, 6, 19, 17));

assert(12 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(27 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(13 == gamma_busy_fields(test, 7));

assert(37 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(29 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 7, 28, 16));

assert(0 == gamma_move(test, 3, 23, 16));

assert(0 == gamma_move(test, 0, 23, -1));

assert(0 == gamma_move(test, 9, 23, 1));

assert(0 == gamma_move(test, 3, 5, 20));

assert(0 == gamma_move(test, 3, 42, 4));

assert(0 == gamma_move(test, 9, 23, -1));

assert(0 == gamma_move(test, 3, 2, 6));

assert(0 == gamma_move(test, 4, 8, 17));

assert(0 == gamma_move(test, 5, 11, 6));

assert(0 == gamma_move(test, 9, 34, 3));

assert(0 == gamma_move(test, 3, 8, 16));

assert(0 == gamma_move(test, 9, 24, -2));

assert(1 == gamma_move(test, 7, 30, 23));

assert(0 == gamma_move(test, 2, 22, 18));

assert(12 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(11 == gamma_busy_fields(test, 2));

assert(27 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(14 == gamma_busy_fields(test, 7));

assert(39 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(29 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 6, 45, 6));

assert(0 == gamma_move(test, 4, 23, 20));

assert(0 == gamma_move(test, 2, 31, 17));

assert(0 == gamma_move(test, 6, 22, 6));

assert(0 == gamma_move(test, 3, 48, 14));

assert(0 == gamma_move(test, 3, 42, 2));

assert(0 == gamma_move(test, 5, 47, 16));

assert(0 == gamma_move(test, 5, 20, 19));

assert(0 == gamma_move(test, 2, 41, 13));

assert(0 == gamma_move(test, 0, 0, 0));

assert(0 == gamma_move(test, 6, 25, 7));

assert(0 == gamma_move(test, 3, 3, 6));

assert(1 == gamma_move(test, 2, 0, 5));

assert(0 == gamma_move(test, 1, 7, 13));

assert(0 == gamma_move(test, 7, 50, 8));

assert(12 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(12 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(14 == gamma_busy_fields(test, 7));

assert(39 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(29 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 1, 35, 3));

assert(0 == gamma_move(test, 9, 15, 22));

assert(0 == gamma_move(test, 3, 1, 23));

assert(0 == gamma_move(test, 1, 16, 1));

assert(0 == gamma_move(test, 1, 28, 12));

assert(0 == gamma_move(test, 1, 41, 25));

assert(0 == gamma_move(test, 1, 26, 23));

assert(0 == gamma_move(test, 7, 45, 11));

assert(0 == gamma_move(test, 8, 31, 1));

assert(0 == gamma_move(test, 4, 30, 10));

assert(0 == gamma_move(test, 3, 14, 15));

assert(0 == gamma_move(test, 9, 42, 11));

assert(0 == gamma_move(test, 5, 46, 16));

assert(0 == gamma_move(test, 7, 44, 15));

assert(0 == gamma_move(test, 3, 39, 23));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(12 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(14 == gamma_busy_fields(test, 7));

assert(39 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(28 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 2, 14, 15));

assert(0 == gamma_move(test, 5, 26, 1));

assert(0 == gamma_move(test, 7, 7, 1));

assert(0 == gamma_move(test, 6, 7, 6));

assert(0 == gamma_move(test, 7, 7, 9));

assert(0 == gamma_move(test, 9, 39, 7));

assert(0 == gamma_move(test, 4, 44, 16));

assert(0 == gamma_move(test, 6, 49, 4));

assert(0 == gamma_move(test, 2, 45, 17));

assert(0 == gamma_move(test, 0, 32, 19));

assert(0 == gamma_move(test, 3, 49, 21));

assert(0 == gamma_move(test, 8, 35, 18));

assert(0 == gamma_move(test, 8, 28, 15));

assert(0 == gamma_move(test, 0, 44, 16));

assert(0 == gamma_move(test, 0, 25, 0));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(12 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(14 == gamma_busy_fields(test, 7));

assert(39 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(28 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 4, 31, 1));

assert(0 == gamma_move(test, 4, 13, 16));

assert(0 == gamma_move(test, 3, 22, 9));

assert(0 == gamma_move(test, 0, 25, 0));

assert(0 == gamma_move(test, 2, 41, 11));

assert(0 == gamma_move(test, 9, -1, 1));

assert(0 == gamma_move(test, 6, 19, 5));

assert(0 == gamma_move(test, 5, 47, 19));

assert(0 == gamma_move(test, 1, 42, 10));

assert(0 == gamma_move(test, 7, 49, 6));

assert(0 == gamma_move(test, 7, 47, 16));

assert(0 == gamma_move(test, 0, 39, 8));

assert(0 == gamma_move(test, 2, 10, 10));

assert(0 == gamma_move(test, 6, 33, 15));

assert(0 == gamma_move(test, 7, 0, 19));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(12 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(14 == gamma_busy_fields(test, 7));

assert(39 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(28 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 0, -2, 1));

assert(0 == gamma_move(test, 6, 24, 17));

assert(0 == gamma_move(test, 5, 9, 16));

assert(0 == gamma_move(test, 4, 42, 16));

assert(0 == gamma_move(test, 1, 41, 7));

assert(0 == gamma_move(test, 8, 27, 16));

assert(0 == gamma_move(test, 4, 12, 11));

assert(0 == gamma_move(test, 8, 16, 14));

assert(0 == gamma_move(test, 1, 27, 18));

assert(0 == gamma_move(test, 1, 41, 13));

assert(0 == gamma_move(test, 5, 19, 2));

assert(0 == gamma_move(test, 5, 50, 16));

assert(0 == gamma_move(test, 9, 17, 24));

assert(0 == gamma_move(test, 0, 0, -3));

assert(0 == gamma_move(test, 4, 5, 12));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(12 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(14 == gamma_busy_fields(test, 7));

assert(39 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(28 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 4, 28, 15));

assert(0 == gamma_move(test, 6, 19, 10));

assert(0 == gamma_move(test, 1, 17, 18));

assert(0 == gamma_move(test, 5, 27, 7));

assert(0 == gamma_move(test, 3, 23, 18));

assert(0 == gamma_move(test, 3, 17, 25));

assert(0 == gamma_move(test, 1, 18, 0));

assert(0 == gamma_move(test, 6, 3, 0));

assert(0 == gamma_move(test, 7, 32, 22));

assert(0 == gamma_move(test, 7, 34, 1));

assert(0 == gamma_move(test, 7, 18, 14));

assert(0 == gamma_move(test, 2, 10, 0));

assert(0 == gamma_move(test, 2, 39, 23));

assert(0 == gamma_move(test, 0, -3, 2));

assert(0 == gamma_move(test, 9, 26, 0));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(12 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(14 == gamma_busy_fields(test, 7));

assert(39 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(28 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 7, 16, 11));

assert(0 == gamma_move(test, 0, 39, 7));

assert(0 == gamma_move(test, 1, 15, 17));

assert(0 == gamma_move(test, 1, 8, 0));

assert(0 == gamma_move(test, 1, 16, 21));

assert(0 == gamma_move(test, 8, 41, 14));

assert(0 == gamma_move(test, 2, 14, 25));

assert(0 == gamma_move(test, 3, 7, 9));

assert(0 == gamma_move(test, 5, 2, 6));

assert(1 == gamma_move(test, 1, 36, 3));

assert(0 == gamma_move(test, 9, 15, 20));

assert(0 == gamma_move(test, 8, 48, 1));

assert(0 == gamma_move(test, 4, 43, 17));

assert(0 == gamma_move(test, 2, 15, 7));

assert(0 == gamma_move(test, 8, 31, 4));

assert(14 == gamma_busy_fields(test, 1));

assert(29 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(12 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(14 == gamma_busy_fields(test, 7));

assert(39 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(28 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 2, 10, 8));

assert(0 == gamma_move(test, 7, 32, 13));

assert(0 == gamma_move(test, 0, 39, 8));

assert(0 == gamma_move(test, 0, 25, 0));

assert(0 == gamma_move(test, 6, 20, 12));

assert(0 == gamma_move(test, 9, -1, 8));

assert(0 == gamma_move(test, 5, 47, 15));

assert(0 == gamma_move(test, 2, 13, 11));

assert(0 == gamma_move(test, 8, 47, 8));

assert(0 == gamma_move(test, 4, 40, 13));

assert(0 == gamma_move(test, 1, 33, 17));

assert(0 == gamma_move(test, 4, 26, 12));

assert(0 == gamma_move(test, 4, 12, 7));

assert(0 == gamma_move(test, 2, 2, 21));

assert(0 == gamma_move(test, 1, 1, 24));

assert(14 == gamma_busy_fields(test, 1));

assert(29 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(12 == gamma_busy_fields(test, 2));

assert(28 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(14 == gamma_busy_fields(test, 7));

assert(39 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(28 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 4, 36, 0));

assert(0 == gamma_move(test, 7, 2, 5));

assert(0 == gamma_move(test, 5, 30, 3));

assert(1 == gamma_move(test, 2, 21, 24));

assert(0 == gamma_move(test, 2, 6, 10));

assert(0 == gamma_move(test, 6, 30, 11));

assert(0 == gamma_move(test, 8, 43, 7));

assert(0 == gamma_move(test, 6, 14, 14));

assert(0 == gamma_move(test, 3, 3, 0));

assert(0 == gamma_move(test, 6, 21, 17));

assert(0 == gamma_move(test, 5, 21, 13));

assert(1 == gamma_move(test, 1, 37, 4));

assert(0 == gamma_move(test, 9, 16, 20));

assert(0 == gamma_move(test, 0, -1, -5));

assert(0 == gamma_move(test, 0, 28, 0));

assert(15 == gamma_busy_fields(test, 1));

assert(30 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(13 == gamma_busy_fields(test, 2));

assert(29 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(28 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(33 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(27 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(13 == gamma_busy_fields(test, 6));

assert(34 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(14 == gamma_busy_fields(test, 7));

assert(39 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(28 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


gamma_delete(test);

return 0;

}

