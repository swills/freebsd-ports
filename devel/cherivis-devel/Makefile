# $FreeBSD: head/devel/cherivis-devel/Makefile 430235 2017-01-01 03:45:12Z sunpoet $

PORTNAME=	cherivis-devel
PORTVERSION=	0.4
DISTVERSIONPREFIX=	v
CATEGORIES=	devel gnustep

MAINTAINER=	theraven@FreeBSD.org
COMMENT=	Visualisation tool for CHERI / BERI streamtraces

LICENSE=	MIT

BROKEN_aarch64=		does not compile: error: unexpected token in argument list

USES=		gnustep
USE_GITHUB=	yes
GH_ACCOUNT=	CTSRD-CHERI
GH_PROJECT=	CheriVis

LIB_DEPENDS+=	libcheritrace.so:devel/cheritrace-devel

USE_GNUSTEP=		back build
USE_LDCONFIG=	${GNUSTEP_SYSTEM_LIBRARIES}

.include <bsd.port.mk>
