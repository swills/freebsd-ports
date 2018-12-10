# $FreeBSD: head/net/eternalterminal/Makefile 486531 2018-12-03 19:41:32Z sunpoet $

PORTNAME=	eternalterminal
DISTVERSIONPREFIX=	et-v
DISTVERSION=	4.2.1
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	trevis@silencedpoet.com
COMMENT=	Remote shell that reconnects without interrupting session

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgflags.so:devel/gflags \
		libglog.so:devel/glog \
		libprotobuf.so:devel/protobuf \
		libsodium.so:security/libsodium

USES=		cmake:outsource compiler:c++11-lang ncurses
USE_GITHUB=	yes
GH_ACCOUNT=	MisterTea
GH_PROJECT=	EternalTerminal

PLIST_FILES=	bin/et bin/etserver

.include <bsd.port.mk>
