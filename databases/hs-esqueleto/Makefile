# $FreeBSD: head/databases/hs-esqueleto/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	esqueleto
PORTVERSION=	2.5.3
PORTREVISION=	2
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Type-safe EDSL for SQL queries on persistent backends

LICENSE=	BSD3CLAUSE

USE_CABAL=	blaze-html conduit monad-logger persistent \
		resourcet tagged unordered-containers

IGNORE=		Doesn't build with recent Persistent

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
