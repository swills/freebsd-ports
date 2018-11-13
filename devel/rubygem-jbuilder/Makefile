# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-jbuilder/Makefile 484344 2018-11-06 21:11:22Z sunpoet $

PORTNAME=	jbuilder
PORTVERSION=	2.8.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Create JSON structures via a Builder-style DSL

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS?=	rubygem-activesupport4>=4.2.0:devel/rubygem-activesupport4 \
		rubygem-multi_json>=1.2:devel/rubygem-multi_json

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
