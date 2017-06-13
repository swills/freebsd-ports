# Created by: ijliao
# $FreeBSD: head/astro/libnova/Makefile 415839 2016-05-25 15:43:34Z mat $

PORTNAME=	libnova
PORTVERSION=	0.15.0
PORTREVISION=	1
CATEGORIES=	astro
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/v%20${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Astronomical Calculation Library

USES=		autoreconf libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} -e 's|^CFLAGS=|#CFLAGS=|g' ${WRKSRC}/configure

.include <bsd.port.mk>
