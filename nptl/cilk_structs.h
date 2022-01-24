#ifndef CILK_STRUCTS_H_
#define CILK_STRUCTS_H_

extern int (*is_cilk_worker)(void);
extern pid_t (*get_boss_tid)(void);

extern void reg_is_cilk_worker(int (*func)(void));
extern void reg_get_boss_tid(pid_t (*func)(void));

#endif
