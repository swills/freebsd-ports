# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/databases/rubygem-activerecord4/Makefile 444502 2017-06-27 16:15:42Z sunpoet $

PORTNAME=	activerecord
PORTVERSION=	4.2.9
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Object-relational mapping layer for Rails MVC Framework

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activemodel4>=${PORTVERSION}:databases/rubygem-activemodel4 \
		rubygem-activesupport4>=${PORTVERSION}:devel/rubygem-activesupport4 \
		rubygem-arel6>=6.0:databases/rubygem-arel6

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
