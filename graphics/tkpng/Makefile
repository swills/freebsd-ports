# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/graphics/tkpng/Makefile 413747 2016-04-21 16:48:50Z gahr $

PORTNAME=	tkpng
PORTVERSION=	0.9
PORTREVISION=	1
CATEGORIES=	graphics tk
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PNG support for Tcl/Tk

LICENSE=	TclTk
LICENSE_NAME=	Tcl/Tk License
LICENSE_FILE=	${WRKSRC}/license.terms
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES=		tk:tea tar:tgz

TKPKG=		${PORTNAME}${PORTVERSION}
PLIST_SUB=	VER=${PORTVERSION} TKPKG=${TKPKG} TKLIBVER=${TKLIBVER}

PLIST_FILES=	lib/${TKPKG}/lib${TKPKG}.so \
		lib/${TKPKG}/pkgIndex.tcl

.include <bsd.port.mk>
