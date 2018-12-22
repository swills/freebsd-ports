# Created by: Luca Pizzamiglio <pizzamig@FreeBSD.org>
# $FreeBSD: head/net-mgmt/openbmp/Makefile 487266 2018-12-12 00:15:49Z jbeich $

PORTNAME=	openbmp
DISTVERSIONPREFIX=	v
DISTVERSION=	0.14.0
PORTREVISION=	3
CATEGORIES=	net-mgmt

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	OpenBMP Server Collector

LICENSE=	EPL
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/include/boost/exception/all.hpp:devel/boost-libs
LIB_DEPENDS=	librdkafka.so:net/librdkafka \
				libsasl2.so:security/cyrus-sasl2 \
				libyaml-cpp.so:devel/yaml-cpp

USES=		cmake:outsource ssl
USE_GITHUB=	yes
GH_ACCOUNT=	OpenBMP

.include <bsd.port.mk>
