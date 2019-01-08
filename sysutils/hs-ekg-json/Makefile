# $FreeBSD: head/sysutils/hs-ekg-json/Makefile 489492 2019-01-06 13:22:02Z arrowd $

PORTNAME=	ekg-json
PORTVERSION=	0.1.0.6
PORTREVISION=	2
CATEGORIES=	sysutils haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	JSON encoding of ekg metrics

LICENSE=	BSD3CLAUSE

BROKEN=		Doesn't build with newest Haskell libraries
EXPIRATION_DATE=	2019-01-31

USE_CABAL=	aeson ekg-core>=0.1 unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
