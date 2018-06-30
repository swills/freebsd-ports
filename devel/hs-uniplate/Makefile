# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: head/devel/hs-uniplate/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	uniplate
PORTVERSION=	1.6.12
PORTREVISION=	6
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Help writing simple, concise, and fast generic operations

LICENSE=	BSD3CLAUSE

USE_CABAL=	hashable>=1.1.2.3 syb unordered-containers>=0.2.1

INSTALL_PORTDATA=	${INSTALL_DATA} ${WRKSRC}/uniplate.htm ${STAGEDIR}${DATADIR}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
