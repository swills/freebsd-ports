# $FreeBSD: head/devel/hs-ansi-wl-pprint/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	ansi-wl-pprint
PORTVERSION=	0.6.8.2
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Wadler/Leijen Pretty Printer for colored ANSI terminal output

LICENSE=	BSD3CLAUSE

USE_CABAL=	ansi-terminal>=0.4.0 semigroups>=0.1

FLAGS_DISABLE=	Example

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
