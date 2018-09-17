# Created by: Sergey A. Osokin <osa@FreeBSD.org>
# $FreeBSD: head/archivers/brotli/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	brotli
PORTVERSION=	1.0.5
PORTREVISION=	1
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

OPTIONS_DEFINE=	DOCS

pre-configure:
	(cd ${WRKSRC} && ./bootstrap)

.include <bsd.port.mk>
