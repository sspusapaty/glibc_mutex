#include <stddef.h>
#include "pthreadP.h"
#include "cilk_structs.h"

int (*is_cilk_worker)(void) = NULL;
pid_t (*get_boss_tid)(void) = NULL;

void reg_is_cilk_worker(int (*func)(void)) {
    is_cilk_worker = func;
}

void reg_get_boss_tid(pid_t (*func)(void)) {
    get_boss_tid = func;
}

