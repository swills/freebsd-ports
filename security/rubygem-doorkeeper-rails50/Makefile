# $FreeBSD: head/security/rubygem-doorkeeper-rails50/Makefile 477742 2018-08-21 18:24:55Z sunpoet $

PORTNAME=	doorkeeper
PORTVERSION=	4.4.2
CATEGORIES=	security rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Doorkeeper is an OAuth 2 provider for Rails and Grape

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-railties50>=4.2:www/rubygem-railties50

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
