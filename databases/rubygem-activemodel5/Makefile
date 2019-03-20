# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/databases/rubygem-activemodel5/Makefile 496168 2019-03-18 18:22:28Z sunpoet $

PORTNAME=	activemodel
PORTVERSION=	5.1.6.2
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	5

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Toolkit for building modeling frameworks

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport5>=${PORTVERSION}:devel/rubygem-activesupport5

PORTSCOUT=	limit:^5\.1\.

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
