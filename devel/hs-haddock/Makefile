# Created by: Oliver Braun <obraun@informatik.unibw-muenchen.de>
# $FreeBSD: head/devel/hs-haddock/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	haddock
PORTVERSION=	2.17.5
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Documentation-generation tool for Haskell libraries

LICENSE=	BSD3CLAUSE

USE_CABAL=	haddock-api>=2.16

USE_ALEX=	true
USE_HAPPY=	true

EXECUTABLE=	haddock-${PORTVERSION}

STANDALONE=	yes

PLIST_SUB+=	GHC_HADDOCK_CMD=${GHC_HADDOCK_CMD} HADDOCK=${PREFIX}/bin/haddock EXECUTABLE=${PREFIX}/bin/haddock-${PORTVERSION}

CONFIGURE_ARGS+=	--program-suffix=-${PORTVERSION}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
