# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/databases/rubygem-activemodel50/Makefile 496178 2019-03-18 18:23:20Z sunpoet $

PORTNAME=	activemodel
PORTVERSION=	5.0.7.2
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	50

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Toolkit for building modeling frameworks

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport50>=${PORTVERSION}:devel/rubygem-activesupport50

PORTSCOUT=	limit:^5\.0\.

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
