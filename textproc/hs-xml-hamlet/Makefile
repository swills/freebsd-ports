# $FreeBSD: head/textproc/hs-xml-hamlet/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	xml-hamlet
PORTVERSION=	0.5.0
PORTREVISION=	2
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Hamlet-style quasiquoter for XML content

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_CABAL=	shakespeare>=1.0 xml-conduit>=1.0

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
