# $FreeBSD: head/net/daemonlogger/Makefile 471485 2018-06-03 09:57:19Z farrokhi $

PORTNAME=	daemonlogger
PORTVERSION=	1.2.1
DISTVERSIONPREFIX=	v
CATEGORIES=	net

MAINTAINER=	farrokhi@FreeBSD.org
COMMENT=	Packet sniffer capable of running as a daemon and as a software tap

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libdnet.so:net/libdnet

GNU_CONFIGURE=	yes
USE_RC_SUBR=	daemonlogger

USE_GITHUB=	yes
GH_ACCOUNT=	Cisco-Talos
GH_PROJECT=	Daemonlogger

PLIST_FILES=	bin/daemonlogger

.include <bsd.port.mk>
