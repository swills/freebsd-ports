# $FreeBSD: head/ftp/hs-curl/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	curl
PORTVERSION=	1.3.8
PORTREVISION=	13
CATEGORIES=	ftp haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to libcurl

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libcurl.so:ftp/curl

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
