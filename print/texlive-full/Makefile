# $FreeBSD: head/print/texlive-full/Makefile 415742 2016-05-23 20:35:01Z amdmi3 $

PORTNAME=	texlive
DISTVERSION=	20150521
CATEGORIES=	print
PKGNAMESUFFIX=	-full

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	TeX Live, Full Version

USE_TEX=	full texhash
USES=		metaport

OPTIONS_DEFINE=	DOCS SOURCE

DOCS_USE=	TEX=docs
SOURCE_DESC=	Install source files
SOURCE_USE=	TEX=source

.include <bsd.port.mk>
