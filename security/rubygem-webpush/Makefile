# $FreeBSD: head/security/rubygem-webpush/Makefile 447386 2017-08-05 03:25:17Z jrm $

PORTNAME=	webpush
PORTVERSION=	0.3.2
PORTREVISION=	1
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Encryption utilities for Web Push payload

LICENSE=	MIT

RUN_DEPENDS=	rubygem-hkdf>=0.2:security/rubygem-hkdf \
		rubygem-jwt>=0:www/rubygem-jwt

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
