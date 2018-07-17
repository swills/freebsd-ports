# Created by: ijliao
# $FreeBSD: head/astro/libnova/Makefile 474623 2018-07-14 08:11:36Z yuri $

PORTNAME=	libnova
PORTVERSION=	0.15.0
PORTREVISION=	1
CATEGORIES=	astro
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/v%20${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Astronomical Calculation Library

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} -e 's|^CFLAGS=|#CFLAGS=|g' ${WRKSRC}/configure

.include <bsd.port.mk>
