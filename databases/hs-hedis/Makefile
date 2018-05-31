# Created by:	martin@sugioarto.com
# $FreeBSD: head/databases/hs-hedis/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	hedis
PORTVERSION=	0.10.1
PORTREVISION=	1
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Client library for the Redis datastore

LICENSE=	BSD3CLAUSE

USE_CABAL=	async bytestring-lexing errors HTTP mtl network network-uri \
		resource-pool scanner unordered-containers vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
