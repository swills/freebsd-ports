# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/misc/rubygem-dotenv-rails-rails50/Makefile 467101 2018-04-11 19:39:44Z sunpoet $

PORTNAME=	dotenv-rails
PORTVERSION=	2.2.2
CATEGORIES=	misc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Autoload dotenv in Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-dotenv>=${PORTVERSION}:misc/rubygem-dotenv \
		rubygem-railties50>=3.2:www/rubygem-railties50

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
