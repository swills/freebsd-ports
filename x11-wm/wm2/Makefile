# Created by: Yukihiro Nakai <Nakai@Mlab.t.u-tokyo.ac.jp>
# $FreeBSD: head/x11-wm/wm2/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	wm2
PORTVERSION=	4.0
PORTREVISION=	2
CATEGORIES=	x11-wm
MASTER_SITES=	http://www.all-day-breakfast.com/wm2/
DISTNAME=	${PORTNAME}-${PORTVERSION:R}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple window manager for X

BUILD_DEPENDS=	makedepend:devel/makedepend

USE_XORG=	x11 xext xmu
ALL_TARGET=	depend wm2

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wm2 ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
