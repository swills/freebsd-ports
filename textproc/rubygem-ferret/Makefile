# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-ferret/Makefile 438565 2017-04-15 00:47:50Z sunpoet $

PORTNAME=	ferret
PORTVERSION=	0.11.8.7
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ferret is a ruby port of Lucene

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

BROKEN_aarch64=	fails to build: cannot determine target CPU

USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/ferret-browser

.include <bsd.port.mk>
