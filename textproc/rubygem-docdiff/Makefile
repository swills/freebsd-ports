# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-docdiff/Makefile 439545 2017-04-27 13:16:51Z sunpoet $

PORTNAME=	docdiff
PORTVERSION=	0.5.0
PORTREVISION=	2
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Compares two text files by word, by character, or by line

LICENSE=	BSD3CLAUSE

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

PLIST_FILES=	bin/docdiff

SHEBANG_FILES=	docdiffwebui.cgi langfilter.rb */*.rb lib/docdiff/*.rb

.include <bsd.port.mk>
