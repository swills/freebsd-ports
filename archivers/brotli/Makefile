# Created by: Sergey A. Osokin <osa@FreeBSD.org>
# $FreeBSD: head/archivers/brotli/Makefile 467121 2018-04-12 00:30:20Z osa $

PORTNAME=	brotli
PORTVERSION=	1.0.4
DISTVERSIONPREFIX=	v
PORTEPOCH=	1
CATEGORIES=	archivers devel

MAINTAINER=	osa@FreeBSD.org
COMMENT=	Generic-purpose lossless compression algorithm

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	google

USES=		autoreconf:build compiler:c++0x gmake libtool pkgconfig
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

INSTALL_TARGET=	install-strip
PLIST_SUB=	SHLIBVER=${PORTVERSION}

pre-configure:
	(cd ${WRKSRC} && ./bootstrap)

.include <bsd.port.mk>
