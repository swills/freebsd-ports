# $FreeBSD: head/sysutils/hs-ekg/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	ekg
PORTVERSION=	0.4.0.15
PORTREVISION=	2
CATEGORIES=	sysutils haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Remote monitoring of processes

LICENSE=	BSD3CLAUSE

USE_CABAL=	aeson ekg-core>=0.1 ekg-json>=0.1 network snap-core \
		snap-server unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
