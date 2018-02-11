# $FreeBSD: head/ftp/hs-curl/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	curl
PORTVERSION=	1.3.8
PORTREVISION=	12
CATEGORIES=	ftp haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to libcurl

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libcurl.so:ftp/curl

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
