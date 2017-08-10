# Created by: Simon Marlow <simonmar@microsoft.com>
# $FreeBSD: head/devel/hs-happy/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	happy
PORTVERSION=	1.19.5
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Happy is a parser generator for Haskell

LICENSE=	BSD3CLAUSE

USE_CABAL=	mtl>=1.0

XMLDOCS=	doc/happy:html
USE_AUTOTOOLS=	autoconf:env

STANDALONE=	yes
EXECUTABLE=	happy

INSTALL_PORTEXAMPLES=	@(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR})

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
