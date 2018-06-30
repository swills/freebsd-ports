# $FreeBSD: head/devel/hs-vector-instances/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	vector-instances
PORTVERSION=	3.4
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Orphan Instances for 'Data.Vector'

LICENSE=	BSD3CLAUSE

USE_CABAL=	comonad>=3 keys>=3 pointed>=3 semigroupoids>=3 \
		semigroups>=0.8.3.1 vector>=0.9

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
