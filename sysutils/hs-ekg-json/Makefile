# $FreeBSD: head/sysutils/hs-ekg-json/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	ekg-json
PORTVERSION=	0.1.0.6
CATEGORIES=	sysutils haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	JSON encoding of ekg metrics

LICENSE=	BSD3CLAUSE

USE_CABAL=	aeson ekg-core>=0.1 unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
