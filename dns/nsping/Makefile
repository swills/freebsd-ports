# Created by: Kris Kennaway <kris@FreeBSD.org>
# $FreeBSD: head/dns/nsping/Makefile 415134 2016-05-13 18:59:03Z bapt $

PORTNAME=	nsping
PORTVERSION=	0.8
PORTREVISION=	2
CATEGORIES=	dns
MASTER_SITES=	LOCAL/roam
DISTFILES=	nsping.tar.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DNS "ping"

PLIST_FILES=	sbin/nsping man/man8/nsping.8.gz

post-patch:
	${REINPLACE_CMD} -e "s/dprintf/debug_printf/g" ${WRKSRC}/nsping.*

do-install:
		${INSTALL_PROGRAM} ${WRKSRC}/nsping ${STAGEDIR}${PREFIX}/sbin
		${INSTALL_DATA} ${WRKSRC}/nsping.8 ${STAGEDIR}${PREFIX}/man/man8

.include <bsd.port.mk>
