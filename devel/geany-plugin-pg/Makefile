# $FreeBSD: head/devel/geany-plugin-pg/Makefile 427185 2016-11-26 23:41:16Z jhale $

PORTNAME=	geany-plugin-pg
PORTVERSION=	${GEANY_VER}
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}

LIB_DEPENDS=	libgpgme.so:security/gpgme
RUN_DEPENDS=	gpg2:security/gnupg

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
