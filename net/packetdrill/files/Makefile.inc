# $FreeBSD: head/net/packetdrill/files/Makefile.inc 423744 2016-10-11 03:12:03Z hrs $

PREFIX?=	/usr/local
BINDIR?=	${PREFIX}/bin

MAN=

.PATH: ${.CURDIR}/..

CFLAGS+=	-I${.CURDIR}/.. -I${.CURDIR}
LDADD=	${.CURDIR}/../libpd/libpd.a -lprocstat -lutil \
	-lkvm -lelf -lpthread -lpcap
