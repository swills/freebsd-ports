# $FreeBSD: head/net-p2p/transmission/Makefile 447965 2017-08-14 19:21:04Z crees $

PORTNAME=	transmission
PORTVERSION=	2.92
CATEGORIES=	net-p2p

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Meta-port for Transmission BitTorrent client

RUN_DEPENDS=	transmission-cli:net-p2p/transmission-cli \
		transmission-daemon:net-p2p/transmission-daemon \
		transmission-gtk:net-p2p/transmission-gtk

CONFLICTS_INSTALL=	${PORTNAME}${PKGNAMESUFFIX}-2.[56]*

USES=	metaport

.include <bsd.port.mk>
