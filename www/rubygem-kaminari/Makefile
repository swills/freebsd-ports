# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/www/rubygem-kaminari/Makefile 452112 2017-10-15 00:37:53Z sunpoet $

PORTNAME=	kaminari
PORTVERSION=	1.1.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Sophisticated paginator for Rails 4+

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport4>=4.1.0:devel/rubygem-activesupport4 \
		rubygem-kaminari-actionview>=${PORTVERSION}:www/rubygem-kaminari-actionview \
		rubygem-kaminari-activerecord>=${PORTVERSION}:www/rubygem-kaminari-activerecord \
		rubygem-kaminari-core>=${PORTVERSION}:www/rubygem-kaminari-core

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
