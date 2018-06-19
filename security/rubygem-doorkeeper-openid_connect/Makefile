# $FreeBSD: head/security/rubygem-doorkeeper-openid_connect/Makefile 471316 2018-06-01 22:48:18Z sunpoet $

PORTNAME=	doorkeeper-openid_connect
PORTVERSION=	1.4.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	OpenID Connect extension for Doorkeeper

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-doorkeeper>=4.3:security/rubygem-doorkeeper \
		rubygem-json-jwt>=1.6:www/rubygem-json-jwt

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
