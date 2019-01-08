# $FreeBSD: head/ftp/hs-curl/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	curl
PORTVERSION=	1.3.8
PORTREVISION=	15
CATEGORIES=	ftp haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to libcurl

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libcurl.so:ftp/curl

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
