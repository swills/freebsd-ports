# Created by: Oliver Braun <obraun@informatik.unibw-muenchen.de>
# $FreeBSD: head/textproc/hs-HaXml/Makefile 480361 2018-09-22 08:13:53Z antoine $

PORTNAME=	HaXml
PORTVERSION=	1.25.4
PORTREVISION=	2
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Utilities for manipulating XML documents

LICENSE=	LGPL21

USE_CABAL=	polyparse>=1.10 random

EXECUTABLE=	Canonicalise CanonicaliseLazy DtdToHaskell FpMLToHaskell \
		MkOneOf Validate XsdToHaskell Xtract

IGNORE=		Doesn't build with recent GHC version
DEPRECATED=	Doesn't build with recent GHC version
EXPIRATION_DATE=	2018-10-22

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
