# $FreeBSD: head/devel/cherivis-devel/Makefile 474787 2018-07-17 08:56:32Z antoine $

PORTNAME=	cherivis-devel
PORTVERSION=	0.4
DISTVERSIONPREFIX=	v
PORTREVISION=	2
CATEGORIES=	devel gnustep

MAINTAINER=	theraven@FreeBSD.org
COMMENT=	Visualisation tool for CHERI / BERI streamtraces

LICENSE=	MIT

DEPRECATED=	Depends on broken and expiring cheritrace-devel
EXPIRATION_DATE=	2018-08-20
BROKEN_aarch64=		does not compile: error: unexpected token in argument list

USES=		gnustep
USE_GITHUB=	yes
GH_ACCOUNT=	CTSRD-CHERI
GH_PROJECT=	CheriVis

LIB_DEPENDS+=	libcheritrace.so:devel/cheritrace-devel

USE_GNUSTEP=		back build
USE_LDCONFIG=	${GNUSTEP_SYSTEM_LIBRARIES}

.include <bsd.port.mk>
