#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define DELIMITER ':'

#define FOO 10

#define HEART L'\u2764'

#define LEFTCURLY '{'

#define NEG_ONE -1

#define NEWLINE '\n'

#define POS_ONE 1

#define QUOTE '\''

#define TAB '\t'

#define ZOM 3.14

struct Foo {
  int32_t x[FOO];
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(struct Foo x);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
