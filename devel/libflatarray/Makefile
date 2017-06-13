# Created by: Kurt Kanzenbach <kurt@kmk-computers.de>
# $FreeBSD: head/devel/libflatarray/Makefile 439934 2017-05-02 06:48:10Z jbeich $

PORTNAME=	libflatarray
PORTVERSION=	0.3.0
PORTREVISION=	4
CATEGORIES=	devel science
MASTER_SITES=	http://www.libgeodecomp.org/archive/

MAINTAINER=	kurt@kmk-computers.de
COMMENT=	Struct of arrays library with object oriented interface for C++

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	boost-libs>=1.48:devel/boost-libs

USES=		cmake:outsource compiler:c++11-lib

CMAKE_ARGS=	-DWITH_CUDA:BOOL=FALSE

.include <bsd.port.mk>
