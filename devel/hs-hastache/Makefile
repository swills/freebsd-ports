# $FreeBSD: head/devel/hs-hastache/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	hastache
PORTVERSION=	0.6.1
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell implementation of Mustache templates

LICENSE=	BSD3CLAUSE

USE_CABAL=	blaze-builder ieee754 mtl syb text

EXECUTABLE=	mkReadme

INSTALL_PORTDATA=	cd ${WRKSRC} && ${INSTALL_DATA} README.md ${STAGEDIR}${DATADIR}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
