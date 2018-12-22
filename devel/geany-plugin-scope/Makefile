# $FreeBSD: head/devel/geany-plugin-scope/Makefile 487752 2018-12-18 14:34:34Z madpilot $

PORTNAME=	geany-plugin-scope
PORTVERSION=	${GEANY_VER}
CATEGORIES=	devel

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}
USES=		gnome

USE_XORG=	x11 xext

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"

.if ${FLAVOR} == gtk3
USE_GNOME+=	vte3
.else
USE_GNOME+=	vte
.endif

.include <bsd.port.mk>
