# $FreeBSD: head/devel/hs-basic-prelude/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	basic-prelude
PORTVERSION=	0.7.0
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Enhanced core prelude; a common foundation for alternate preludes

LICENSE=	MIT

USE_CABAL=	hashable lifted-base ReadArgs>=1.2 safe unordered-containers \
		vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
