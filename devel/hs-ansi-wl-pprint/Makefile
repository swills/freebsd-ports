# $FreeBSD: head/devel/hs-ansi-wl-pprint/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	ansi-wl-pprint
PORTVERSION=	0.6.7.3
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Wadler/Leijen Pretty Printer for colored ANSI terminal output

LICENSE=	BSD3CLAUSE

USE_CABAL=	ansi-terminal>=0.4.0

FLAGS_DISABLE=	Example

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
