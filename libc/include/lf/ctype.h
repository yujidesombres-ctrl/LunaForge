#ifndef LF_CTYPE_H
#define LF_CTYPE_H

static inline int lf_isdigit(int c) { return c >= '0' && c <= '9'; }
static inline int lf_isalpha(int c) { return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); }
static inline int lf_isalnum(int c) { return lf_isalpha(c) || lf_isdigit(c); }
static inline int lf_isspace(int c) { return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v'; }
static inline int lf_isupper(int c) { return c >= 'A' && c <= 'Z'; }
static inline int lf_islower(int c) { return c >= 'a' && c <= 'z'; }
static inline int lf_toupper(int c) { return lf_islower(c) ? c - 'a' + 'A' : c; }
static inline int lf_tolower(int c) { return lf_isupper(c) ? c - 'A' + 'a' : c; }

#endif
