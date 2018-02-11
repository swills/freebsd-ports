# Created by: Kai Wang <kaiw27@gmail.com>
# $FreeBSD: head/devel/hs-BNFC/Makefile 461362 2018-02-10 08:03:22Z tcberner $

PORTNAME=	BNFC
PORTVERSION=	2.8.1
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Compiler front-end generator

LICENSE=	GPLv2

USE_CABAL=	mtl
USE_ALEX=	yes
USE_HAPPY=	yes

EXECUTABLE=	bnfc

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
