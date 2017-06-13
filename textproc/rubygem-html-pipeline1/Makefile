# $FreeBSD: head/textproc/rubygem-html-pipeline1/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	html-pipeline
PORTVERSION=	1.11.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	1

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	GitHub HTML processing filters and utilities

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-activesupport4>=2:devel/rubygem-activesupport4 \
		rubygem-nokogiri>=1.4:textproc/rubygem-nokogiri

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
