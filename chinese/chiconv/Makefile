# Created by: buganini@gmail.com
# $FreeBSD: head/chinese/chiconv/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	chiconv
PORTVERSION=	11.3
CATEGORIES=	chinese converters

MAINTAINER=	buganini@gmail.com
COMMENT=	Auto chinese encoding converter

LICENSE=	ISCL

LIB_DEPENDS=	libbsdconv.so:converters/bsdconv

USE_GITHUB=	yes
GH_ACCOUNT=	buganini

MAKE_ARGS=	PREFIX=${PREFIX}

PLIST_FILES=	bin/chiconv

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/chiconv

.include <bsd.port.mk>
