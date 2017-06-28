# Created by: Johannes Jost Meixner <xmj@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-activejob4/Makefile 444504 2017-06-27 16:15:52Z sunpoet $

PORTNAME=	activejob
PORTVERSION=	4.2.9
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Job class declarations for a variety of queueing backends

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport4>=${PORTVERSION}:devel/rubygem-activesupport4 \
		rubygem-globalid>=0.3.0:databases/rubygem-globalid

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
