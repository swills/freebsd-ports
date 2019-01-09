# $FreeBSD: head/devel/hs-project-template/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	project-template
PORTVERSION=	0.2.0.1
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Specify Haskell project templates and generate files

LICENSE=	BSD3CLAUSE

USE_CABAL=	base64-bytestring conduit>=1.0 conduit-extra mtl>=2.0 \
		resourcet>=0.4.3

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
