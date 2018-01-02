# $FreeBSD: head/devel/libsimdpp/Makefile 456414 2017-12-15 19:26:41Z yuri $

PORTNAME=	libsimdpp
DISTVERSIONPREFIX=	v
DISTVERSION=	2.1
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Header-only zero-overhead C++ wrapper of SIMD instructions

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/LICENSE_1_0.txt

USES=		cmake:outsource
USE_GITHUB=	yes
GH_ACCOUNT=	p12tic
NO_BUILD=	yes
NO_ARCH=	yes
TEST_TARGET=	check

PLIST_SUB=	PORTVERSION="${PORTVERSION}"

.include <bsd.port.mk>
