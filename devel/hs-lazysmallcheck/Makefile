# $FreeBSD: head/devel/hs-lazysmallcheck/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	lazysmallcheck
PORTVERSION=	0.6
PORTREVISION=	17
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Library for demand-driven testing of Haskell programs

LICENSE=	BSD3CLAUSE

INSTALL_PORTEXAMPLES=	cd ${WRKSRC}/examples && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
