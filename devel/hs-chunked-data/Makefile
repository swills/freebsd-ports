# $FreeBSD: head/devel/hs-chunked-data/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	chunked-data
PORTVERSION=	0.3.0
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Typeclasses for dealing with various chunked data representations

LICENSE=	MIT

USE_CABAL=	blaze-builder mono-traversable>=0.2 semigroups text>=0.11 \
		vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
