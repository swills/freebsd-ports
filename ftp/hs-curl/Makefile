# $FreeBSD: head/ftp/hs-curl/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	curl
PORTVERSION=	1.3.8
PORTREVISION=	11
CATEGORIES=	ftp haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to libcurl

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libcurl.so:ftp/curl

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
