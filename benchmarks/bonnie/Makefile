# Created by: se
# $FreeBSD: head/benchmarks/bonnie/Makefile 451957 2017-10-13 08:21:36Z bapt $

PORTNAME=	bonnie
PORTVERSION=	2.0.6
PORTREVISION=	1
CATEGORIES=	benchmarks
MASTER_SITES=	http://www.textuality.com/bonnie/
DISTNAME=	bonnie

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Performance Test of Filesystem I/O

NO_WRKSUBDIR=	yes
MAKE_ARGS+=	-e CFLAGS="${CFLAGS}"
ALL_TARGET=	bsd
PLIST_FILES=	bin/bonnie man/man1/bonnie.1.gz

OPTIONS_DEFINE=	STATIC

STATIC_CFLAGS+=	-static

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/Bonnie ${STAGEDIR}${PREFIX}/bin/bonnie
	${INSTALL_MAN} ${FILESDIR}/bonnie.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
