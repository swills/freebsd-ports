# $FreeBSD: head/security/rubygem-doorkeeper-openid_connect/Makefile 476328 2018-08-04 00:23:08Z mfechner $

PORTNAME=	doorkeeper-openid_connect
PORTVERSION=	1.5.0
PORTREVISION=	1
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	OpenID Connect extension for Doorkeeper

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-doorkeeper43>=4.3:security/rubygem-doorkeeper43 \
		rubygem-json-jwt>=1.6:www/rubygem-json-jwt

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
