# $FreeBSD: head/www/rubygem-acts-as-taggable-on3/Makefile 441547 2017-05-23 18:52:29Z sunpoet $

PORTNAME=	acts-as-taggable-on
PORTVERSION=	3.5.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	3

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Tag a single model on several contexts

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-activerecord4>=4.1.6:databases/rubygem-activerecord4

PORTSCOUT=	limit:^3\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
