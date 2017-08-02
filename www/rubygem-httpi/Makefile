# Created by: Joseph Benden <joe@thrallingpenguin.com>
# $FreeBSD: head/www/rubygem-httpi/Makefile 446801 2017-07-28 02:41:30Z sunpoet $

PORTNAME=	httpi
PORTVERSION=	2.4.2
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	joe@thrallingpenguin.com
COMMENT=	Library for common HTTP client API

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-rack>=0:www/rubygem-rack \
		rubygem-socksify>=0:www/rubygem-socksify

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
