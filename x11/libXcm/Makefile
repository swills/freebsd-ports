# $FreeBSD: head/x11/libXcm/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	libXcm
PORTVERSION=	0.5.4
CATEGORIES=	x11

MAINTAINER=	bsam@FreeBSD.org
COMMENT=	X Colour Management Library

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	oyranos-cms
GH_PROJECT=	${PORTNAME:tl}

USES=		libtool pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_XORG=	x11 xfixes xmu xt
INSTALL_TARGET=	install-strip
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
