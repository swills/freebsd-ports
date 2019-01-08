# $FreeBSD: head/textproc/hs-cassava/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	cassava
PORTVERSION=	0.5.1.0
PORTREVISION=	3
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	CSV parsing and encoding library

LICENSE=	BSD3CLAUSE

USE_CABAL=	attoparsec blaze-builder hashable Only text-short \
		unordered-containers vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
