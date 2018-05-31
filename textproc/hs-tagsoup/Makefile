# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: head/textproc/hs-tagsoup/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	tagsoup
PORTVERSION=	0.14.6
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Parsing and extracting information from HTML/XML documents

LICENSE=	BSD3CLAUSE

FLAGS_DEFINE=	DOWNLOAD

DOWNLOAD_DESC=		Build with Download module
DOWNLOAD_FLAG_ENABLE=	download
DOWNLOAD_FLAG_CABAL=	network

FLAGS_DISABLE=	testprog

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
