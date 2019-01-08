# $FreeBSD: head/devel/hs-test-framework/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	test-framework
PORTVERSION=	0.8.2.0
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Framework for running and organising tests, with HUnit and QuickCheck support

LICENSE=	BSD3CLAUSE

USE_CABAL=	ansi-terminal>=0.4.0 ansi-wl-pprint>=0.5.1 hostname>=1.0 \
		old-locale>=1.0 random>=1.0 regex-posix>=0.72 xml>=1.3.5

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
