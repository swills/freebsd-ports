# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/databases/rubygem-activemodel4/Makefile 496188 2019-03-18 18:24:12Z sunpoet $

PORTNAME=	activemodel
PORTVERSION=	4.2.11.1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Toolkit for building modeling frameworks

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport4>=${PORTVERSION}:devel/rubygem-activesupport4 \
		rubygem-builder>=3.2.2:devel/rubygem-builder

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
