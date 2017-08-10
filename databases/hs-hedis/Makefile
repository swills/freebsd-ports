# Created by:	martin@sugioarto.com
# $FreeBSD: head/databases/hs-hedis/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	hedis
PORTVERSION=	0.9.8
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Client library for the Redis datastore

LICENSE=	BSD3CLAUSE

USE_CABAL=	async bytestring-lexing mtl network resource-pool scanner stm \
		text unordered-containers vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
