# $FreeBSD: head/textproc/rubygem-html-pipeline/Makefile 484749 2018-11-11 18:23:55Z sunpoet $

PORTNAME=	html-pipeline
PORTVERSION=	2.9.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	GitHub HTML processing filters and utilities

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-activesupport4>=2:devel/rubygem-activesupport4 \
		rubygem-nokogiri>=1.4:textproc/rubygem-nokogiri

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
