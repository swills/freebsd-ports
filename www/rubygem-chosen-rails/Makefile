# $FreeBSD: head/www/rubygem-chosen-rails/Makefile 457416 2017-12-27 19:53:49Z sunpoet $

PORTNAME=	chosen-rails
PORTVERSION=	1.8.2
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Box enhancer for jQuery and Protoype

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-coffee-rails4>=3.2:devel/rubygem-coffee-rails4 \
		rubygem-railties4>=3.0:www/rubygem-railties4 \
		rubygem-sass-rails5>=3.2:textproc/rubygem-sass-rails5

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
