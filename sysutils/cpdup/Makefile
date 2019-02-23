# Created by: Matthew Dillon <dillon@backplane.com>
# $FreeBSD: head/sysutils/cpdup/Makefile 493509 2019-02-21 15:03:39Z madpilot $

PORTNAME=	cpdup
PORTVERSION=	1.20
CATEGORIES=	sysutils
MASTER_SITES=	http://utenti.gufi.org/~gmarco/files/distfiles/ \
		https://www.madpilot.net/~mad/

MAINTAINER=	gmarco@gufi.org
COMMENT=	Comprehensive filesystem mirroring and backup program

LICENSE=	BSD2CLAUSE # clarified by Matthew Dillon himself

USES=		tar:xz

WRKSRC=		${WRKDIR}/${PORTNAME}

CFLAGS+=	-D_ST_FLAGS_PRESENT_

PLIST_FILES=	bin/cpdup man/man1/cpdup.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/cpdup ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/cpdup.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
