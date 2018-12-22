# $FreeBSD: head/devel/leatherman/Makefile 487824 2018-12-20 02:06:04Z romain $

PORTNAME=	leatherman
PORTVERSION=	1.5.4
PORTREVISION=	2
CATEGORIES=	devel

MAINTAINER=	puppet@FreeBSD.org
COMMENT=	Leatherman C++ Tool library

LICENSE=	APACHE20

LIB_DEPENDS=	libboost_system.so:devel/boost-libs \
		libcurl.so:ftp/curl

USES=		compiler:c++11-lang cmake:outsource gettext
USE_GITHUB=	yes
GH_ACCOUNT=	puppetlabs

USE_RUBY=	yes
CMAKE_ON=	LEATHERMAN_SHARED
CMAKE_OFF=	ENABLE_CXX_WERROR
USE_LDCONFIG=	yes
TEST_TARGET=	test

PLIST_SUB=	PORTVERSION=${PORTVERSION}

.include <bsd.port.mk>
