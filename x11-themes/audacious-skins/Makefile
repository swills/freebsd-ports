# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/x11-themes/audacious-skins/Makefile 421683 2016-09-10 10:48:56Z ehaupt $

PORTNAME=	audacious-skins
PORTVERSION=	0.4
CATEGORIES=	x11-themes
MASTER_SITES=	LOCAL/ehaupt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Collection of audacious skins

BUILD_DEPENDS=	audacious:multimedia/audacious

USES=		tar:xz
NO_BUILD=	yes
NO_ARCH=	yes

DATADIR=	${PREFIX}/share/audacious

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}/Skins
	${INSTALL_DATA} ${WRKSRC}/Skins/*/*.wsz ${STAGEDIR}${DATADIR}/Skins

.include <bsd.port.mk>
