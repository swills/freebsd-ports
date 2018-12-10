# $FreeBSD: head/devel/geany-plugin-debugger/Makefile 487062 2018-12-09 17:29:13Z madpilot $

PORTNAME=	geany-plugin-debugger
PORTVERSION=	${GEANY_VER}
PKGNAMESUFFIX=	-gtk2
CATEGORIES=	devel

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}

LIB_DEPENDS=	libgeany.so:devel/geany@gtk2

FLAVORS=	# intentionally left empty

USES=		gnome
USE_GNOME=	vte
USE_XORG=	x11 xext

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
