# $FreeBSD: head/converters/hs-sandi/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	sandi
PORTVERSION=	0.4.3
PORTREVISION=	1
CATEGORIES=	converters haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Data encoding library

LICENSE=	BSD3CLAUSE

CONFLICTS_INSTALL=	hs-dataenc-[0-9]*

USE_CABAL=	conduit exceptions stringsearch

post-extract:
	${ECHO} "import Distribution.Simple" > ${WRKSRC}/Setup.hs
	${ECHO} "main = defaultMain" >>  ${WRKSRC}/Setup.hs

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
