# $FreeBSD: head/textproc/rubygem-jemoji/Makefile 468971 2018-05-03 18:41:56Z sunpoet $

PORTNAME=	jemoji
PORTVERSION=	0.10.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	GitHub-flavored emoji plugin for Jekyll

LICENSE=	MIT

RUN_DEPENDS=	rubygem-gemoji>=3.0:textproc/rubygem-gemoji \
		rubygem-html-pipeline>=2.2:textproc/rubygem-html-pipeline \
		rubygem-jekyll>=3.0:www/rubygem-jekyll

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
