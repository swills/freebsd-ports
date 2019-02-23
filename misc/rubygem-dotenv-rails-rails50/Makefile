# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/misc/rubygem-dotenv-rails-rails50/Makefile 493603 2019-02-22 19:55:25Z sunpoet $

PORTNAME=	dotenv-rails
PORTVERSION=	2.7.0
CATEGORIES=	misc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Autoload dotenv in Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-dotenv>=${PORTVERSION}:misc/rubygem-dotenv \
		rubygem-railties50>=3.2:www/rubygem-railties50

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
