# $FreeBSD: head/www/hs-http2/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	http2
PORTVERSION=	1.6.3
PORTREVISION=	3
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	HTTP/2.0 library including frames and HPACK

LICENSE=	BSD3CLAUSE

USE_CABAL=	aeson aeson-pretty case-insensitive hex mwc-random psqueues \
		unordered-containers vector word8

FLAGS_DISABLE=	devel

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
