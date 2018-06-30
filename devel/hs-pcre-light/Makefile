# $FreeBSD: head/devel/hs-pcre-light/Makefile 473611 2018-06-30 09:57:59Z arrowd $

PORTNAME=	pcre-light
PORTVERSION=	0.4.0.4
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Small, efficient, and portable regex library for Perl 5 compatible

LICENSE=	BSD3CLAUSE

USES=		pkgconfig
LIB_DEPENDS=	libpcre.so:devel/pcre

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
