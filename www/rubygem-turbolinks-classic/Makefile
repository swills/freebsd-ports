# $FreeBSD: head/www/rubygem-turbolinks-classic/Makefile 456164 2017-12-12 13:35:33Z sunpoet $

PORTNAME=	turbolinks
PORTVERSION=	2.5.4
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-classic

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Turbolinks makes following links in your web application faster

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS?=	rubygem-coffee-rails4>=4.0.1:devel/rubygem-coffee-rails4

DEPRECATED=	Use www/rubygem-turbolinks instead
EXPIRATION_DATE=2018-01-31

PORTSCOUT=	limit:^2\.5

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
