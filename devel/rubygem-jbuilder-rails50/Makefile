# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-jbuilder-rails50/Makefile 447386 2017-08-05 03:25:17Z jrm $

PORTNAME=	jbuilder
PORTVERSION=	2.7.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Create JSON structures via a Builder-style DSL

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport50>0:devel/rubygem-activesupport50 \
		rubygem-multi_json>=1.2:devel/rubygem-multi_json

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
