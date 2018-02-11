# $FreeBSD: head/devel/hs-abstract-deque/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	abstract-deque
PORTVERSION=	0.3
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Abstract, parameterized interface to mutable Deques

LICENSE=	BSD3CLAUSE

USE_CABAL=	random

FLAGS_DISABLE=	useCAS

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
