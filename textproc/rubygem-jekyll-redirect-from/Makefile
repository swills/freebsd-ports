# $FreeBSD: head/textproc/rubygem-jekyll-redirect-from/Makefile 476111 2018-07-31 23:53:57Z sunpoet $

PORTNAME=	jekyll-redirect-from
PORTVERSION=	0.14.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Handles redirection URLs for jekyll pages and posts

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-jekyll>=3.3:www/rubygem-jekyll

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

SHEBANG_FILES=	script/*

.include <bsd.port.mk>
