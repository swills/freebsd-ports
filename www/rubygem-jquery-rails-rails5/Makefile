# Created by: Jason Helfman <jgh@FreeBSD.org>
# $FreeBSD: head/www/rubygem-jquery-rails-rails5/Makefile 468008 2018-04-22 08:57:34Z sunpoet $

PORTNAME=	jquery-rails
PORTVERSION=	4.3.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Provides a Rails generator for jQuery

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-rails-dom-testing-rails5>=1.0:textproc/rubygem-rails-dom-testing-rails5 \
		rubygem-railties5>=4.2.0:www/rubygem-railties5 \
		rubygem-thor>=0.14:devel/rubygem-thor

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
