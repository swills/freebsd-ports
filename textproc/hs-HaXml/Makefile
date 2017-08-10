# Created by: Oliver Braun <obraun@informatik.unibw-muenchen.de>
# $FreeBSD: head/textproc/hs-HaXml/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	HaXml
PORTVERSION=	1.25.4
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Utilities for manipulating XML documents

LICENSE=	LGPL21

USE_CABAL=	polyparse>=1.10 random

EXECUTABLE=	Canonicalise CanonicaliseLazy DtdToHaskell FpMLToHaskell \
		MkOneOf Validate XsdToHaskell Xtract

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
