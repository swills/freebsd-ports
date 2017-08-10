# $FreeBSD: head/textproc/hs-libxml-sax/Makefile 447548 2017-08-08 17:21:45Z tcberner $

PORTNAME=	libxml-sax
PORTVERSION=	0.7.5
PORTREVISION=	3
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings for the libXML2 SAX interface

LICENSE=	MIT

USE_CABAL=	text>=0.7 xml-types>=0.3

USES=		pkgconfig
LIB_DEPENDS=	libxml2.so:textproc/libxml2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
