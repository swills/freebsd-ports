# Created by: Johannes Jost Meixner <xmj@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-activejob5/Makefile 466986 2018-04-10 18:27:32Z sunpoet $

PORTNAME=	activejob
PORTVERSION=	5.1.6
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	5

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Job class declarations for a variety of queueing backends

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport5>=${PORTVERSION}:devel/rubygem-activesupport5 \
		rubygem-globalid-rails5>=0.3.6:databases/rubygem-globalid-rails5

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
