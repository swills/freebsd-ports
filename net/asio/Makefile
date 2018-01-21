# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/net/asio/Makefile 459315 2018-01-18 04:11:02Z jbeich $

PORTNAME=	asio
PORTVERSION=	1.10.6
PORTREVISION=	3
CATEGORIES=	net devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}%20(Stable)/

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Cross-platform C++ library for network and low-level I/O programming

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE_1_0.txt

RUN_DEPENDS=	${LOCALBASE}/include/boost/chrono/system_clocks.hpp:devel/boost-libs

GNU_CONFIGURE=	yes
USES=		gmake tar:bz2
NO_BUILD=	yes
INSTALL_TARGET=	install-data

.include <bsd.port.mk>
