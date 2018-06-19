# $FreeBSD: head/devel/hs-abstract-deque/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	abstract-deque
PORTVERSION=	0.3
PORTREVISION=	5
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Abstract, parameterized interface to mutable Deques

LICENSE=	BSD3CLAUSE

USE_CABAL=	random

FLAGS_DISABLE=	useCAS

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
