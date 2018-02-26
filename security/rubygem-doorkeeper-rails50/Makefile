# $FreeBSD: head/security/rubygem-doorkeeper-rails50/Makefile 462817 2018-02-24 13:38:22Z sunpoet $

PORTNAME=	doorkeeper
PORTVERSION=	4.3.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Doorkeeper is an OAuth 2 provider for Rails and Grape

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-railties50>0:www/rubygem-railties50

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
