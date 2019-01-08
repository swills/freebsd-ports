# Created by:	martin@sugioarto.com
# $FreeBSD: head/databases/hs-hedis/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	hedis
PORTVERSION=	0.10.1
PORTREVISION=	3
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Client library for the Redis datastore

LICENSE=	BSD3CLAUSE

USE_CABAL=	async bytestring-lexing errors HTTP mtl network network-uri \
		resource-pool scanner unordered-containers vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
