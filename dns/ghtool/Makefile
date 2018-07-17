# Created by: roam@orbitel.bg
# $FreeBSD: head/dns/ghtool/Makefile 474572 2018-07-13 09:56:57Z antoine $

PORTNAME=	ghtool
PORTVERSION=	1.0
CATEGORIES=	dns
MASTER_SITES=	SF/gh-tool/gh-tool/1
DISTNAME=	ghmain.c
EXTRACT_SUFX=	# none

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Command-line interface to the resolver library

LICENSE=	NONE

DEPRECATED=	unknown license
EXPIRATION_DATE=	2018-08-15

PLIST_FILES=	bin/gh

do-extract:
	@${MKDIR} ${WRKDIR}
	${CP} ${DISTDIR}/${DISTNAME} ${WRKDIR}/

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} -o ${WRKDIR}/gh ${WRKDIR}/ghmain.c

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/gh ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
