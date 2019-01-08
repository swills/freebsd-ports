# Created by: Samy Al Bahra <sbahra@kerneled.org>
# $FreeBSD: head/ports-mgmt/hs-porte/Makefile 489492 2019-01-06 13:22:02Z arrowd $

PORTNAME=	porte
PORTVERSION=	0.0.4
PORTREVISION=	20
CATEGORIES=	ports-mgmt haskell

MAINTAINER=	sbahra@repnop.org
COMMENT=	FreeBSD ports index search and statistical analysis tool

LICENSE=	BSD3CLAUSE

DEPRECATED=	No updates since 2010
BROKEN=		Doesn't build with newest GHC
EXPIRATION_DATE=	2019-01-31

USE_CABAL=	extensible-exceptions stringsearch

EXECUTABLE=	porte

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
