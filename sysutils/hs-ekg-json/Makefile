# $FreeBSD: head/sysutils/hs-ekg-json/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	ekg-json
PORTVERSION=	0.1.0.5
CATEGORIES=	sysutils haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	JSON encoding of ekg metrics

LICENSE=	BSD3CLAUSE

USE_CABAL=	aeson ekg-core>=0.1 text unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
