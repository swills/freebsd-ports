# $FreeBSD: head/devel/geany-plugin-markdown/Makefile 446127 2017-07-18 07:18:28Z madpilot $

PORTNAME=	geany-plugin-markdown
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}

LIB_DEPENDS=	libwebkitgtk-1.0.so:www/webkit-gtk2 \
		libsoup-2.4.so:devel/libsoup

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
