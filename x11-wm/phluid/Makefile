# Created by: Yukihiro Nakai <nakai@FreeBSD.org>
# $FreeBSD: head/x11-wm/phluid/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	phluid
PORTVERSION=	0.0.3
PORTREVISION=	13
CATEGORIES=	x11-wm
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-src/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Window manager that emphasizes efficiency, speed, and beauty

LIB_DEPENDS=	libImlib2.so:graphics/imlib2

USES=		gmake
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lm -lX11

.include <bsd.port.mk>
