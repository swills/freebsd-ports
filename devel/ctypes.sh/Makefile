# $FreeBSD: head/devel/ctypes.sh/Makefile 452196 2017-10-16 13:49:41Z swills $

PORTNAME=	ctypes.sh
PORTVERSION=	1.1
CATEGORIES=	devel
MASTER_SITES=	https://github.com/taviso/${PORTNAME}/releases/download/v${PORTVERSION}/
DISTNAME=	ctypes-sh-${PORTVERSION}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Foreign function interface for bash

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	bash:shells/bash
RUN_DEPENDS=	bash:shells/bash
LIB_DEPENDS=	libffi.so:devel/libffi

USES=		libtool pkgconfig
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

PLIST_FILES=	bin/ctypes.sh lib/ctypes.so

.include <bsd.port.mk>
