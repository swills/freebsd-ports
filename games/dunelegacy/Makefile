# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/games/dunelegacy/Makefile 483515 2018-10-30 19:09:11Z linimon $

PORTNAME=	dunelegacy
PORTVERSION=	0.96.4
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Open source clone of Dune II

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf compiler:c++11-lib tar:bzip2 pkgconfig
GNU_CONFIGURE=	yes
USE_SDL=	sdl2 mixer2
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
