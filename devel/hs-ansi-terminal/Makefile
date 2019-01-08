# $FreeBSD: head/devel/hs-ansi-terminal/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	ansi-terminal
PORTVERSION=	0.8.0.2
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Simple ANSI terminal support, with Windows compatibility

LICENSE=	BSD3CLAUSE

USE_CABAL=	colour

FLAGS_DISABLE=	Example

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
