# $FreeBSD: head/security/rubygem-doorkeeper-rails5/Makefile 483205 2018-10-27 23:24:48Z sunpoet $

PORTNAME=	doorkeeper
PORTVERSION=	5.0.2
CATEGORIES=	security rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Doorkeeper is an OAuth 2 provider for Rails and Grape

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-railties5>=4.2:www/rubygem-railties5

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
