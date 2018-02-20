# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/misc/rubygem-dotenv-rails-rails4/Makefile 462431 2018-02-20 20:26:19Z sunpoet $

PORTNAME=	dotenv-rails
PORTVERSION=	2.2.1
CATEGORIES=	misc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails4

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Autoload dotenv in Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-dotenv>=${PORTVERSION}:misc/rubygem-dotenv \
		rubygem-railties4>=3.2:www/rubygem-railties4

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
