#define DEBUG

/* #ifdef DEBUG */
#if defined(DEBUG) && !defined(QUEIT)
#define DLOG(x) (printf(x))
#else
#define DLOG(x)
#endif

#if __STDC_VERSION__ >= 201112L
/**/
#elif __STDC_VERSION__ >= 199901L
/**/
#else
/**/
#endif
