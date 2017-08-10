# $FreeBSD: head/security/hs-x509/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	x509
PORTVERSION=	1.6.5
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	X509 reader and writer

LICENSE=	BSD3CLAUSE

USE_CABAL=	asn1-encoding>=0.9 asn1-parse>=0.9 asn1-types>=0.3.0 \
		cryptonite hourglass memory mtl pem>=0.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
