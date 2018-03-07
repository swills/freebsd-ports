# $FreeBSD: head/security/rubygem-doorkeeper-rails50/Makefile 463580 2018-03-04 16:11:49Z sunpoet $

PORTNAME=	doorkeeper
PORTVERSION=	4.3.1
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
