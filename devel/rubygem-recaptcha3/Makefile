# $FreeBSD: head/devel/rubygem-recaptcha3/Makefile 461935 2018-02-15 16:59:19Z tz $

PORTNAME=	recaptcha
PORTVERSION=	3.4.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	3

MAINTAINER=	idefix@fechner.net
COMMENT=	Helpers for the reCAPTCHA API

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-json>=0:devel/rubygem-json

PORTSCOUT=	limit:^3\.

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
