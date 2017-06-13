# Created by: Edwin Groothuis
# $FreeBSD: head/games/xrally/Makefile 426269 2016-11-16 22:55:39Z rene $

PORTNAME=	xrally
PORTVERSION=	1.1.1
PORTREVISION=	6
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/1.1
DISTNAME=	${PORTNAME}-1.1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	XRally is a Linux clone of the classic Rally X arcade game

WRKSRC=		${WRKDIR}/${PORTNAME}
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}
USE_XORG=	x11 xi xpm
USES=		gmake tar:bzip2
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-lpthread -L${LOCALBASE}/lib
MAKE_ENV=	INCLUDES="-I${LOCALBASE}/include"

.include <bsd.port.mk>
