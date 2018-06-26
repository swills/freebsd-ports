# $FreeBSD: head/textproc/rubygem-html-pipeline/Makefile 450340 2017-09-22 09:14:13Z sunpoet $

PORTNAME=	html-pipeline
PORTVERSION=	2.7.1
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	271

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	GitHub HTML processing filters and utilities

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-activesupport4>=2:devel/rubygem-activesupport4 \
		rubygem-nokogiri>=1.4:textproc/rubygem-nokogiri

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PORTSCOUT=	limit:^2\.7\.1

.include <bsd.port.mk>
