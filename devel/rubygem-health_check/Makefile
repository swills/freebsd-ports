# Created by: Torsten Zuehlsdorff <ports@toco-domains.de>
# $FreeBSD: head/devel/rubygem-health_check/Makefile 464609 2018-03-15 17:45:57Z sunpoet $

PORTNAME=	health_check
PORTVERSION=	3.0.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Simple health check of Rails app for uptime monitoring

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-railties5>=5.0:www/rubygem-railties5

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	test/*railsapp

.include <bsd.port.mk>
