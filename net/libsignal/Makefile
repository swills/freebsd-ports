# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/libsignal/Makefile 470629 2018-05-22 17:47:24Z sunpoet $

PORTNAME=	libsignal
PORTVERSION=	2.3.2
DISTVERSIONPREFIX=	v
CATEGORIES=	net

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Signal Protocol C Library

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

CMAKE_ON=	BUILD_SHARED_LIBS BUILD_STATIC_LIBS
USES=		cmake

PLIST_SUB=	PORTVERSION=${PORTVERSION}

GH_ACCOUNT=	signalapp
GH_PROJECT=	libsignal-protocol-c
USE_GITHUB=	yes

.include <bsd.port.mk>
