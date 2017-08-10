# $FreeBSD: head/devel/hs-classy-prelude-conduit/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	classy-prelude-conduit
PORTVERSION=	1.2.0
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Conduit instances for classy-prelude

LICENSE=	MIT

USE_CABAL=	classy-prelude>=0.12.0 conduit>=1.0 \
		conduit-combinators>=0.2.8 monad-control resourcet void

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
