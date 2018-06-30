# $FreeBSD: head/devel/hs-hsb2hs/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	hsb2hs
PORTVERSION=	0.3.1
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Preprocesses a file, adding blobs from files as string literals

LICENSE=	BSD3CLAUSE

USE_CABAL=	preprocessor-tools>1.0

EXECUTABLE=	hsb2hs
STANDALONE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
