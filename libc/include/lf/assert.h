#ifndef LF_ASSERT_H
#define LF_ASSERT_H

#ifdef NDEBUG
#define lf_assert(expr) ((void)0)
#else
#define lf_assert(expr) ((expr) ? (void)0 : lf_assert_fail(#expr, __FILE__, __LINE__))
#endif

_Noreturn void lf_assert_fail(const char *expression, const char *file, int line);

#endif
