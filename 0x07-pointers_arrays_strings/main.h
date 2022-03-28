#ifndef _PUTCHAR_H_
#define _PUTCHAR_H_
void putchar(int);
#endif
#ifndef __MEMSET_H_
#define __MEMSET_H_
char *_memset(char *s, char b, unsigned int n);
#endif
#ifndef __MEMCPY_H_
#define __MEMCPY_H_
char *_memcpy(char *dest, char *src, unsigned int n);
#endif
#ifndef __STRCHR_H_
#define __STRCHR_H_
char *_strchr(char *s, char c);
#endif
#ifndef __STRSPN_H_
#define __STRSPN_H_
unsigned int _strspn(char *s, char *accept);
#endif
#ifndef __STRPBRK_H_
#define __STRPBRK_H_
char *_strpbrk(char *s, char *accept);
#endif
#ifndef __STRSTR_H_
#define __STRSTR_H_
char *_strstr(char *haystack, char *needle);
#endif
#ifndef _PRINT_CHESSBOARD_H_
#define _PRINT_CHESSBOARD_H_
void print_chessboard(char (*a)[8]);
#endif
