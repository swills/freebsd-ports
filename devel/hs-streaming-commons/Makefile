# $FreeBSD: head/devel/hs-streaming-commons/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	streaming-commons
PORTVERSION=	0.2.0.0
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Common lower-level functions needed by various streaming data libraries

LICENSE=	MIT

USE_CABAL=	async blaze-builder network random zlib

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
