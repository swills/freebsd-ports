# Created by: Edwin Groothuis (edwin@mavetju.org)
# $FreeBSD: head/net/dhcprelay/Makefile 427093 2016-11-25 09:31:21Z amdmi3 $

PORTNAME=	dhcprelay
PORTVERSION=	1.2
PORTREVISION=	4
CATEGORIES=	net
MASTER_SITES=	http://www.mavetju.org/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lightweight DHCP Relay Agent with GIF tunnel support

LICENSE=	NONE

LIB_DEPENDS=	libdnet.so:net/libdnet

USE_RC_SUBR=	${PORTNAME}

PLIST_FILES=	bin/dhcprelay

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dhcprelay ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
