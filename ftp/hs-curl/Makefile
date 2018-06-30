# $FreeBSD: head/ftp/hs-curl/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	curl
PORTVERSION=	1.3.8
PORTREVISION=	14
CATEGORIES=	ftp haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to libcurl

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libcurl.so:ftp/curl

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
