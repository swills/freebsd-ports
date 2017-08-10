# $FreeBSD: head/devel/hs-abstract-deque/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	abstract-deque
PORTVERSION=	0.3
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Abstract, parameterized interface to mutable Deques

LICENSE=	BSD3CLAUSE

USE_CABAL=	random

FLAGS_DISABLE=	useCAS

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
