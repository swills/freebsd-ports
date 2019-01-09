# $FreeBSD: head/devel/hs-data-default/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	data-default
PORTVERSION=	0.7.1.1
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Class for types with a default value

LICENSE=	BSD3CLAUSE

USE_CABAL=	data-default-class data-default-instances-base \
		data-default-instances-containers data-default-instances-dlist \
		data-default-instances-old-locale

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
