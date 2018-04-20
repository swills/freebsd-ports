# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/math/vowpal_wabbit/Makefile 467711 2018-04-18 13:57:42Z jbeich $

PORTNAME=	vowpal_wabbit
PORTVERSION=	7.10
PORTREVISION=	9
CATEGORIES=	math

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Fast out-of-core learning system

LIB_DEPENDS=	libboost_thread.so:devel/boost-libs

BROKEN_powerpc64=	fails to compile: network.cc: 'atoi' was not declared in this scope

USES=		compiler:c++11-lang libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	JohnLangford

CONFIGURE_ARGS=	--enable-shared=no --with-boost=${LOCALBASE}

.include <bsd.port.mk>
