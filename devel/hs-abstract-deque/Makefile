# $FreeBSD: head/devel/hs-abstract-deque/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	abstract-deque
PORTVERSION=	0.3
PORTREVISION=	6
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Abstract, parameterized interface to mutable Deques

LICENSE=	BSD3CLAUSE

USE_CABAL=	random

FLAGS_DISABLE=	useCAS

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
