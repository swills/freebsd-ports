# Created by: Tobias Kortkamp <tobias.kortkamp@gmail.com>
# $FreeBSD: head/lang/chibi-scheme/Makefile 434159 2017-02-15 12:28:29Z tobik $

PORTNAME=	chibi-scheme
PORTVERSION=	0.7.3
CATEGORIES=	lang

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Minimal Scheme implementation for use as a C extension language

LICENSE=	BSD3CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	ashinn

USES=		gmake
USE_LDCONFIG=	yes

MAKE_ARGS+=	MODDIR=${LOCALBASE}/lib/chibi \
		MANDIR=${LOCALBASE}/man/man1 \
		INSTALL_BIN="${INSTALL} -s" \
		PKGCONFDIR=${LOCALBASE}/libdata/pkgconfig

.include <bsd.port.mk>
