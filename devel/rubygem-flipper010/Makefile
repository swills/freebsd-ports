# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-flipper010/Makefile 455057 2017-11-28 16:13:30Z tz $

PORTNAME=	flipper
PORTVERSION=	0.10.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	010

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Act of enabling/disabling features in your application

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

CONFLICTS_INSTALL=	rubygem-flipper

PORTSCOUT=	limit:^0\.10\.

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

DEPRECATED=	yes
EXPIRATION_DATE=	2018-08-01

.include <bsd.port.mk>
