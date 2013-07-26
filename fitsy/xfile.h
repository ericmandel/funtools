/* default xfile.h
 */

#ifndef XFILE_H
#define XFILE_H

#include <stdio.h>

typedef FILE *File;
#define Open(n, m)		fopen(n, m)
#define Write(f, b, s, n)	fwrite(b, s, n, f)
#define Read(f, b, s, n)	fread(b, s, n, f)
#define Gets(f, b, n)		fgets(b, n, f)
#define Flush(f)		fflush(f)
#define Seek(f, o, n)		(fseek(f, o, n), ftell(f))
#define Tell(f)			ftell(f)
#define OpenFd(fd, mode)	fdopen(fd, mode)
#define Close(fd)		fclose(fd)

#endif
