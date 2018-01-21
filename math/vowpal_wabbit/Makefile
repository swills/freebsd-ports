# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/math/vowpal_wabbit/Makefile 459315 2018-01-18 04:11:02Z jbeich $

PORTNAME=	vowpal_wabbit
PORTVERSION=	7.10
PORTREVISION=	8
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
