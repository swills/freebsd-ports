# $FreeBSD: head/textproc/hs-cassava/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	cassava
PORTVERSION=	0.5.0.0
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	CSV parsing and encoding library

LICENSE=	BSD3CLAUSE

USE_CABAL=	attoparsec blaze-builder hashable Only text text-short \
		unordered-containers vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
