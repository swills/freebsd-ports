# $FreeBSD: head/textproc/rubygem-jekyll-feed/Makefile 471793 2018-06-05 18:56:57Z sunpoet $

PORTNAME=	jekyll-feed
PORTVERSION=	0.10.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Generates an Atom feed from Jekyll posts

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-jekyll>=3.3:www/rubygem-jekyll

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

SHEBANG_FILES=	script/*

.include <bsd.port.mk>
