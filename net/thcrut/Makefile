# Created by: Kris Kennaway <kris@FreeBSD.org>
# $FreeBSD: head/net/thcrut/Makefile 412342 2016-04-01 13:18:17Z mat $

PORTNAME=	thcrut
PORTVERSION=	1.2.5
CATEGORIES=	net
MASTER_SITES=	http://thc.org/releases/ \
		http://redundancy.redundancy.org/mirror/

MAINTAINER=	lx@FreeBSD.org
COMMENT=	Local network discovery tool

GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--with-libnet=${LOCALBASE} \
			--sysconfdir=${DATADIR}

.include <bsd.port.mk>
