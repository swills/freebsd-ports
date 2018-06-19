# $FreeBSD: head/devel/hs-lazysmallcheck/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	lazysmallcheck
PORTVERSION=	0.6
PORTREVISION=	15
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Library for demand-driven testing of Haskell programs

LICENSE=	BSD3CLAUSE

INSTALL_PORTEXAMPLES=	cd ${WRKSRC}/examples && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
