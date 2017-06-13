# $FreeBSD: head/sysutils/ttyd/Makefile 440222 2017-05-06 05:53:03Z miwi $

PORTNAME=	ttyd
PORTVERSION=	1.3.2
CATEGORIES=	sysutils

MAINTAINER=	neel@neelc.org
COMMENT=	Program to share your terminal over the web

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	xxd:editors/vim-lite
LIB_DEPENDS=	libjson-c.so:devel/json-c \
		libwebsockets.so:net/libwebsockets

USE_GITHUB=	yes
GH_ACCOUNT=	tsl0922

USES=		cmake pkgconfig ssl
USE_CSTD=	c99
PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ttyd ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
