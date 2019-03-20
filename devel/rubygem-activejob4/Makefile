# Created by: Johannes Jost Meixner <xmj@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-activejob4/Makefile 496191 2019-03-18 18:24:27Z sunpoet $

PORTNAME=	activejob
PORTVERSION=	4.2.11.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Job class declarations for a variety of queueing backends

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport4>=${PORTVERSION}:devel/rubygem-activesupport4 \
		rubygem-globalid>=0.3.0:databases/rubygem-globalid

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
