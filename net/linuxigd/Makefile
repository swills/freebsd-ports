# Created by: Yen-Ming Lee <leeym@leeym.com>
# $FreeBSD: head/net/linuxigd/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	linuxigd
PORTVERSION=	1.0
PORTREVISION=	10
CATEGORIES=	net
MASTER_SITES=	SF/linux-igd/linux-igd/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Linux UPnP Internet Gateway Device

LIB_DEPENDS=	libupnp.so:devel/upnp

USE_RC_SUBR=	linuxigd
USES=		gmake

post-extract:
	@${RM} ${WRKSRC}/iptc.?

post-patch:
	@${FIND} ${WRKSRC} -type f | ${XARGS} ${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|g"

.include <bsd.port.mk>
