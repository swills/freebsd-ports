# Created by: Torsten Zuehlsdorff <ports@toco-domains.de>
# $FreeBSD: head/devel/rubygem-sentry-raven/Makefile 447569 2017-08-08 18:58:17Z sunpoet $

PORTNAME=	sentry-raven
PORTVERSION=	2.6.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Client interface for the Sentry error logger

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-faraday>=0.7.6:www/rubygem-faraday

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/raven

.include <bsd.port.mk>
