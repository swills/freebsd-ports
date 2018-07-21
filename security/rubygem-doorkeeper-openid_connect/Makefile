# $FreeBSD: head/security/rubygem-doorkeeper-openid_connect/Makefile 471316 2018-06-01 22:48:18Z sunpoet $

PORTNAME=	doorkeeper-openid_connect
PORTVERSION=	1.5.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	OpenID Connect extension for Doorkeeper

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-doorkeeper>=4.3:security/rubygem-doorkeeper \
		rubygem-json-jwt>=1.6:www/rubygem-json-jwt

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
