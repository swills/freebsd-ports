# Created by: Kai Wang <kaiw27@gmail.com>
# $FreeBSD: head/devel/hs-BNFC/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	BNFC
PORTVERSION=	2.8.1
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
