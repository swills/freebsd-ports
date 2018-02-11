# $FreeBSD: head/devel/hs-hsb2hs/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	hsb2hs
PORTVERSION=	0.3.1
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Preprocesses a file, adding blobs from files as string literals

LICENSE=	BSD3CLAUSE

USE_CABAL=	preprocessor-tools>1.0

EXECUTABLE=	hsb2hs
STANDALONE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
