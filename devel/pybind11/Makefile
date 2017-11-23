# $FreeBSD: head/devel/pybind11/Makefile 453910 2017-11-10 18:57:07Z yuri $

PORTNAME=	pybind11
DISTVERSIONPREFIX=	v
DISTVERSION=	2.2.1
CATEGORIES=	devel python

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Seamless interoperability between C++11 and Python (cmake part)

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:outsource
USE_GITHUB=	yes
GH_ACCOUNT=	pybind
NO_ARCH=	yes
CMAKE_ARGS=	-DPYBIND11_TEST:BOOL="OFF"

.include <bsd.port.mk>
