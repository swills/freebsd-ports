# $FreeBSD: head/devel/hs-lazysmallcheck/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	lazysmallcheck
PORTVERSION=	0.6
PORTREVISION=	13
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Library for demand-driven testing of Haskell programs

LICENSE=	BSD3CLAUSE

INSTALL_PORTEXAMPLES=	cd ${WRKSRC}/examples && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
