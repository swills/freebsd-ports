# Created by: Torsten Zuehlsdorff <ports@toco-domains.de>
# $FreeBSD: head/devel/rubygem-health_check/Makefile 452799 2017-10-24 17:41:57Z sunpoet $

PORTNAME=	health_check
PORTVERSION=	2.7.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Simple health check of Rails app for uptime monitoring

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-rails4>=4.0:www/rubygem-rails4

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	test/*railsapp

.include <bsd.port.mk>
