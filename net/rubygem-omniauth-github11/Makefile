# $FreeBSD: head/net/rubygem-omniauth-github11/Makefile 474739 2018-07-16 14:36:51Z mfechner $

PORTNAME=	omniauth-github
PORTVERSION=	1.1.2
CATEGORIES=	net rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	11

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Official OmniAuth strategy for GitHub

LICENSE=	MIT

DEPRECATED=	Obsoleted by update of www/gitlab-ce. Please use net/rubygem-omniauth-github instead.
EXPIRATION_DATE=	2018-07-31

RUN_DEPENDS=	rubygem-omniauth>=1.0:security/rubygem-omniauth \
		rubygem-omniauth-oauth2>=1.1:net/rubygem-omniauth-oauth2

PORTSCOUT=	limit:^1\.1\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
