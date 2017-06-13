# Created by: vanilla@
# $FreeBSD: head/devel/spdlog/Makefile 440746 2017-05-13 03:35:51Z linimon $

PORTNAME=	spdlog
PORTVERSION=	0.13.0
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Super fast C++ logging library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_powerpc64=	fails to compile: includes.h: error: chrono: No such file or directory

USE_GITHUB=	yes
GH_ACCOUNT=	gabime

USES=		cmake dos2unix pathfix

.include <bsd.port.mk>
