# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/graphics/icat/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	icat
PORTVERSION=	0.4
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	graphics

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Displays images in 256-color capable terminals

LIB_DEPENDS=	libImlib2.so:graphics/imlib2

USES=		gmake dos2unix
USE_GITHUB=	yes
GH_ACCOUNT=	atextor

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/icat

CONFLICTS=	sleuthkit-[0-9]*

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
