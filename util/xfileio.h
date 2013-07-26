/*
 *
 * xfileio.h -- package-specific xfileio.h used by fitsy
 *
 */

#ifndef XFILEIO_H
#define XFILEIO_H

#include <gio.h>

/* define the basic IO routines */
typedef GIO File;
#define Open(n, m)		gopen(n, m)
#define Read(f, b, s, n)	gread(f, b, s, n)
#define Gets(f, b, n)		ggets(f, b, n)
#define Write(f, b, s, n)	gwrite(f, b, s, n)
#define Flush(f)		gflush(f)
#define Seek(f, o, n)		(gseek(f, o, n), gtell(f))
#define Tell(f)			gtell(f)
#define Close(fd)		gclose(fd)

#endif
