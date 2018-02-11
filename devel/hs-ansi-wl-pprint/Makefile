# $FreeBSD: head/devel/hs-ansi-wl-pprint/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	ansi-wl-pprint
PORTVERSION=	0.6.7.3
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Wadler/Leijen Pretty Printer for colored ANSI terminal output

LICENSE=	BSD3CLAUSE

USE_CABAL=	ansi-terminal>=0.4.0

FLAGS_DISABLE=	Example

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
