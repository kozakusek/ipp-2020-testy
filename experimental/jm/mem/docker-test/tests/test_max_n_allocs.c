

//////////////////////////////////////////////////////////////////////////////

// zostanie doklejone do oryginalnego pliku gamma_main.c
// oryginalny main jest dostepny jako original_main
#include <stdlib.h>
#include <errno.h>
#include <malloc.h>
#include <stdbool.h>
#include <assert.h>
#include <stdio.h>
#include "remalloc.h"

int main() {
    int ret = original_main();
    printf("\n\nalokow %i\n\n", realloc_calls_performed());
    if (remalloc_memory_error()) {
        //printf('\ninteresting\n');
        assert (errno == ENOMEM);
    }
    return ret;
}
