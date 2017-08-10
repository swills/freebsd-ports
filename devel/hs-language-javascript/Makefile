# $FreeBSD: head/devel/hs-language-javascript/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	language-javascript
PORTVERSION=	0.6.0.10
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Parser for JavaScript

LICENSE=	BSD3CLAUSE

USE_CABAL=	blaze-builder>=0.2 mtl>=1.1 utf8-string>=0.3.7
USE_ALEX=	yes
USE_HAPPY=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
