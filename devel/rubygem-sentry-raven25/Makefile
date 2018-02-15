# $FreeBSD: head/devel/rubygem-sentry-raven25/Makefile 461935 2018-02-15 16:59:19Z tz $

PORTNAME=	sentry-raven
PORTVERSION=	2.5.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	25

MAINTAINER=	idefix@fechner.net
COMMENT=	Client interface for the Sentry error logger

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-faraday>=0.7.6:www/rubygem-faraday

PORTSCOUT=	limit:^2\.5
CONFLICTS_INSTALL=	rubygem-sentry-raven

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

PLIST_FILES=	bin/raven

.include <bsd.port.mk>
