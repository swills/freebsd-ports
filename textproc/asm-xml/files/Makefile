# $FreeBSD: head/textproc/asm-xml/files/Makefile 486174 2018-11-29 14:10:20Z 0mp $

LIB = 	asm-xml
OBJS=	src/elf.So
INCS=	include/asm-xml.h

NO_PIC=
MK_PROFILE=no

LIBDIR=		${PREFIX}/lib
INCLUDEDIR=	${PREFIX}/include

src/elf.So:
	${LOCALBASE}/bin/fasm src/elf.asm src/elf.So

.include <bsd.lib.mk>
