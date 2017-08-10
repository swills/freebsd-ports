# $FreeBSD: head/devel/hs-configurator/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	configurator
PORTVERSION=	0.3.0.0
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Configuration management

LICENSE=	BSD3CLAUSE

USE_CABAL=	attoparsec>=0.10.0.2 hashable text>=0.11.1.0 unix-compat \
		unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
