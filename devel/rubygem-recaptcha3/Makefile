# $FreeBSD: head/devel/rubygem-recaptcha3/Makefile 469442 2018-05-09 10:43:26Z mfechner $

PORTNAME=	recaptcha
PORTVERSION=	3.4.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	3

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Helpers for the reCAPTCHA API

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-json>=0:devel/rubygem-json

PORTSCOUT=	limit:^3\.

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
