# $FreeBSD: head/biology/hyphy/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	hyphy
DISTVERSION=	2.3.14-16
PORTREVISION=	1
DISTVERSIONSUFFIX=	-g3d88d3e6
CATEGORIES=	biology

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Hypothesis testing using Phylogenies

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64 i386

LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		compiler:c++14-lang cmake:outsource localbase:ldflags ssl
USE_GITHUB=	yes
GH_ACCOUNT=	veg

CMAKE_ON=	NOAVX

.include <bsd.port.mk>
