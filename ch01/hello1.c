#include <stdio.h>
/* (1) A single-line C-style comment. */
/* (2) A multi-line
   C-style comment. */
/*
 * (3) A very common way to 
 * format a multi-line
 * C-Style comment.
 */
int main(){

/* (4) C-style comments can appear almost anywhere. */
/*(5)*/ printf( /* Say hello. */ "Hello, world!\n" ); 
/*(6)*/ printf( "Hello, world!\n" ); /* Yay! */
// (7) A C++ style comment (terminated by End-of-Line).
   printf( "Hello, world!\n" ); // (8) Say hello; yay!
//
}
// (9) A more common way 
// of commenting with multi-line
// C++ style comments
// 
// (10) anything can appear after //, even /* ... */ and
// even more // after the first // but they will be 
// ignored because they are all in the comment.