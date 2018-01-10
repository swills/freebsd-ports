# $FreeBSD: head/www/rubygem-turbolinks-rails5/Makefile 458553 2018-01-09 16:41:33Z sunpoet $

PORTNAME=	turbolinks
PORTVERSION=	5.1.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Turbolinks makes following links in your web application faster

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-coffee-rails-rails5>=4.0.1:devel/rubygem-coffee-rails-rails5 \
		rubygem-turbolinks-source>=5.1:www/rubygem-turbolinks-source

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
