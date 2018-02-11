# $FreeBSD: head/textproc/hs-xmlhtml/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	xmlhtml
PORTVERSION=	0.2.4
PORTREVISION=	1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	XML parser and renderer with HTML 5 quirks mode

LICENSE=	BSD3CLAUSE

USE_CABAL=	blaze-builder blaze-html blaze-markup parsec text \
		unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
