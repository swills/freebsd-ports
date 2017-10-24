# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/www/rubygem-kaminari/Makefile 452664 2017-10-22 16:10:28Z sunpoet $

PORTNAME=	kaminari
PORTVERSION=	1.1.1
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
