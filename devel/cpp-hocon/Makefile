# $FreeBSD: head/devel/cpp-hocon/Makefile 446262 2017-07-20 15:30:52Z romain $

PORTNAME=	cpp-hocon
PORTVERSION=	0.1.4
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	puppet@FreeBSD.org
COMMENT=	C++ configuration library

LICENSE=	APACHE20

LIB_DEPENDS=	libboost_system.so:devel/boost-libs \
		libleatherman_util.so:devel/leatherman

USE_GITHUB=	yes
GH_ACCOUNT=	puppetlabs

USES=		cmake
CMAKE_ARGS=	-DCPP_HOCON_SHARED:BOOL=ON

.include <bsd.port.mk>
