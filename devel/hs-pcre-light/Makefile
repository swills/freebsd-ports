# $FreeBSD: head/devel/hs-pcre-light/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	pcre-light
PORTVERSION=	0.4.0.4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Small, efficient, and portable regex library for Perl 5 compatible

LICENSE=	BSD3CLAUSE

USES=		pkgconfig
LIB_DEPENDS=	libpcre.so:devel/pcre

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
