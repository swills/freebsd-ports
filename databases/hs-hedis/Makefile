# Created by:	martin@sugioarto.com
# $FreeBSD: head/databases/hs-hedis/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	hedis
PORTVERSION=	0.9.8
PORTREVISION=	1
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Client library for the Redis datastore

LICENSE=	BSD3CLAUSE

USE_CABAL=	async bytestring-lexing mtl network resource-pool scanner stm \
		text unordered-containers vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
