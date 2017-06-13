# Created by: Torsten Zuehlsdorff <ports@toco-domains.de>
# $FreeBSD: head/devel/rubygem-health_check22/Makefile 438492 2017-04-14 07:09:23Z miwi $

PORTNAME=	health_check
PORTVERSION=	2.2.1
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	22

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Simple health check of Rails app for uptime monitoring

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

PORTSCOUT=	limit:^2\.2\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	test/setup_railsapp test/test_with_railsapp

.include <bsd.port.mk>
