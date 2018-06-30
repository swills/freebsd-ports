# Created by: Simon Marlow <simonmar@microsoft.com>
# $FreeBSD: head/devel/hs-happy/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	happy
PORTVERSION=	1.19.5
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Happy is a parser generator for Haskell

LICENSE=	BSD3CLAUSE

USE_CABAL=	mtl>=1.0

XMLDOCS=	doc/happy:html
XMLDOCS_CONF=	yes

STANDALONE=	yes
EXECUTABLE=	happy

INSTALL_PORTEXAMPLES=	@(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR})

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
