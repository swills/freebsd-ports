# Created by: Tobias Kortkamp <t@tobik.me>
# $FreeBSD: head/x11/xbanish/Makefile 455791 2017-12-08 18:34:53Z tobik $

PORTNAME=	xbanish
PORTVERSION=	1.5
DISTVERSIONPREFIX=	v
CATEGORIES=	x11

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Banish the mouse cursor when typing

LICENSE=	BSD3CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	jcs

USE_XORG=	x11 xfixes xi xt

MAKE_ARGS=	X11BASE="${LOCALBASE}"

PLIST_FILES=	bin/xbanish \
		man/man1/xbanish.1.gz

.include <bsd.port.mk>
