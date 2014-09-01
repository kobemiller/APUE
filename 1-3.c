#include "apue.h"
#include "myerr.h"

int log_to_stderr = 0;

int main(void)
{
    int c;

    while ( (c = getc(stdin)) != EOF )
        if ( putc(c, stdout) == EOF )
            err_sys("output error");
    if ( ferror(stdin) )
        err_sys("input error");
    return 0;
}
