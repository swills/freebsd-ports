# $FreeBSD: head/devel/geany-plugin-markdown/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	geany-plugin-markdown
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}

LIB_DEPENDS=	libwebkitgtk-1.0.so:www/webkit-gtk2 \
		libsoup-2.4.so:devel/libsoup

OPTIONS_DEFINE=	DOCS

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
