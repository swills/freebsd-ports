# Created by: Matt Peterson <matt@peterson.org>
# $FreeBSD: head/net/liboping/Makefile 425042 2016-11-01 01:28:42Z jbeich $

PORTNAME=	liboping
PORTVERSION=	1.8.0
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://noping.cc/files/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Liboping, a C library, and utility to generate ICMP echo requests

LICENSE=	GPLv2

USES=		libtool ncurses perl5 shebangfix
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-pkgconfigdir="${PREFIX}/libdata/pkgconfig"

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Net/Oping/Oping.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/liboping.so.0.2.11

.include <bsd.port.mk>
