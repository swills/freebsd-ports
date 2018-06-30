# $FreeBSD: head/devel/hs-bifunctors/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	bifunctors
PORTVERSION=	5.5.2
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bifunctors

LICENSE=	BSD3CLAUSE

USE_CABAL=	base-orphans comonad semigroups>=0.8.3.1 tagged>=0.7.3 \
		th-abstraction

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
