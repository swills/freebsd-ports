# Created by: Mikhail Teterin <mi@aldan.algebra.com>
# $FreeBSD: head/security/sst/Makefile 436247 2017-03-15 14:45:30Z mat $

PORTNAME=	sst
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	http://utcc.utoronto.ca/~pkern/stuff/sst/
DISTNAME=	${PORTNAME}

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	Simple SSL tunneling tool (uses netcat)

.if !exists(/usr/bin/nc)
RUN_DEPENDS=	netcat:net/netcat
.endif

MAKEFILE=	${FILESDIR}/Makefile
USES=		uidfix ssl

PLIST_FILES=	sbin/sst \
		man/man1/sst.1.gz

.include <bsd.port.mk>
