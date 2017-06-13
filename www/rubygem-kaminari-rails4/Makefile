# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/www/rubygem-kaminari-rails4/Makefile 427998 2016-12-06 22:15:31Z swills $

PORTNAME=	kaminari
PORTVERSION=	0.17.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Sophisticated paginator for Rails 4

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS?=	rubygem-actionpack4>=4.0.0:www/rubygem-actionpack4 \
		rubygem-activesupport4>=4.0.0:devel/rubygem-activesupport4

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
