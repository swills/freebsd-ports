# $FreeBSD: head/security/rubygem-doorkeeper/Makefile 463578 2018-03-04 16:11:39Z sunpoet $

PORTNAME=	doorkeeper
PORTVERSION=	4.3.1
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Doorkeeper is an OAuth 2 provider for Rails and Grape

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-railties4>=4.2:www/rubygem-railties4

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
