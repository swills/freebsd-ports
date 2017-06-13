# Created by: David Xu
# $FreeBSD: head/devel/byaccj/Makefile 433834 2017-02-11 04:44:43Z mmokhi $

PORTNAME=	byaccj
PORTVERSION=	1.15
CATEGORIES=	devel java
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}${PORTVERSION}_src

MAINTAINER=	mmokhi@FreeBSD.org
COMMENT=	Java extension of BSD YACC-compatible parser generator

PLIST_FILES=	bin/byaccj
WRKSRC=		${WRKDIR}/${PORTNAME}${PORTVERSION}/src

post-patch:
	@${REINPLACE_CMD} -e 's#<malloc.h>#<stdlib.h>#' ${WRKSRC}/defs.h ${WRKSRC}/*c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/yacc ${STAGEDIR}${PREFIX}/bin/byaccj

.include <bsd.port.mk>
