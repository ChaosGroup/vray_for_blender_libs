/* Version ID for the JPEG library.
 * Might be useful for tests like "#if JPEG_LIB_VERSION >= 60".
 */
#define JPEG_LIB_VERSION  80 	/* 62 = Version 6b */

/* Support arithmetic encoding */
#undef C_ARITH_CODING_SUPPORTED

/* Support arithmetic decoding */
#undef D_ARITH_CODING_SUPPORTED

/* Compiler supports function prototypes. */
#define HAVE_PROTOTYPES

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H

/* Compiler supports 'unsigned char'. */
#define HAVE_UNSIGNED_CHAR

/* Compiler supports 'unsigned short'. */
#define HAVE_UNSIGNED_SHORT

/* Compiler does not support pointers to unspecified structures. */
#undef INCOMPLETE_TYPES_BROKEN

/* How to obtain function inlining. */
#ifdef _MSC_VER
#define INLINE __forceinline
#else
#define INLINE inline
#endif

/* Compiler has <strings.h> rather than standard <string.h>. */
#undef NEED_BSD_STRINGS

/* Linker requires that global names be unique in first 15 characters. */
#undef NEED_SHORT_EXTERNAL_NAMES

/* Need to include <sys/types.h> in order to obtain size_t. */
#undef NEED_SYS_TYPES_H

/* Broken compiler shifts signed values as an unsigned shift. */
#undef RIGHT_SHIFT_IS_UNSIGNED

/* Use accelerated SIMD routines. */
#ifndef WITH_SIMD
#define WITH_SIMD
#endif

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
# undef __CHAR_UNSIGNED__
#endif

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t

/* Define "boolean" as unsigned char, not int, per Windows custom */
#ifndef __RPCNDR_H__		/* don't conflict if rpcndr.h already read */
typedef unsigned char boolean;
#endif
#define HAVE_BOOLEAN		/* prevent jmorecfg.h from redefining it */

