# Created by: Mikhail Teterin <mi@aldan.algebra.com>
# $FreeBSD: head/security/sst/Makefile 484158 2018-11-05 00:04:04Z mi $

PORTNAME=	sst
PORTVERSION=	1.23
CATEGORIES=	security
MASTER_SITES=	http://utcc.utoronto.ca/~pkern/stuff/sst/

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	Simple SSL tunneling tool (uses netcat)

.if !exists(/usr/bin/nc)
RUN_DEPENDS=	netcat:net/netcat
.endif

MAKEFILE=	${FILESDIR}/Makefile
USES=		uidfix ssl tar:xz

PLIST_FILES=	sbin/sst \
		man/man1/sst.1.gz

.include <bsd.port.mk>
