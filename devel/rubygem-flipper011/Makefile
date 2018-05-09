# $FreeBSD: head/devel/rubygem-flipper011/Makefile 469442 2018-05-09 10:43:26Z mfechner $

PORTNAME=	flipper
PORTVERSION=	0.11.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	011

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Act of enabling/disabling features in your application

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

CONFLICTS_INSTALL=	rubygem-flipper rubygem-flipper010

PORTSCOUT=	limit:^0\.11\.

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
