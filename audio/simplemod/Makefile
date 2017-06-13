# Created by: Christian Laursen <xi@borderworlds.dk>
# $FreeBSD: head/audio/simplemod/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	simplemod
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://borderworlds.dk/projects/sm/

MAINTAINER=	xi@borderworlds.dk
COMMENT=	Minimalistic module player

LIB_DEPENDS=	libmikmod.so:audio/libmikmod

WRKSRC=		${WRKDIR}/simplemod

ALL_TARGET=	simplemod
PLIST_FILES=	bin/simplemod

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/simplemod ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
