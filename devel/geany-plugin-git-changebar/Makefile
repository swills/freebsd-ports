# $FreeBSD: head/devel/geany-plugin-git-changebar/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	geany-plugin-git-changebar
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}

LIB_DEPENDS=	libgit2.so:devel/libgit2

OPTIONS_DEFINE=	DOCS

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
