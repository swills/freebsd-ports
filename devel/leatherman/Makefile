# $FreeBSD: head/devel/leatherman/Makefile 482901 2018-10-24 11:31:40Z romain $

PORTNAME=	leatherman
PORTVERSION=	1.5.1
PORTREVISION=	1
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
CMAKE_ARGS=	-DLEATHERMAN_SHARED:BOOL=ON
USE_LDCONFIG=	yes
TEST_TARGET=	test

PLIST_SUB=	PORTVERSION=${PORTVERSION}

.include <bsd.port.mk>
