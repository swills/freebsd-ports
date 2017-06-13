# Created by: asami
# $FreeBSD: head/x11/xcolors/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	xcolors
PORTVERSION=	1.3
PORTREVISION=	4
CATEGORIES=	x11
MASTER_SITES=	LOCAL/markp
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Display all (ok, most of) the colors in the universe

RUN_DEPENDS=	showrgb:x11/rgb

WRKSRC=		${WRKDIR}/xcolors
USE_XORG=	xaw xmu xt sm ice xpm xp xext x11
USES=		imake

.include <bsd.port.mk>
