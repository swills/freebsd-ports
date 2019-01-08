# $FreeBSD: head/devel/hs-abstract-deque/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	abstract-deque
PORTVERSION=	0.3
PORTREVISION=	7
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Abstract, parameterized interface to mutable Deques

LICENSE=	BSD3CLAUSE

USE_CABAL=	random

FLAGS_DISABLE=	useCAS

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
