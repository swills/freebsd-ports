# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-gettext-setup/Makefile 450215 2017-09-20 16:32:01Z sunpoet $

PORTNAME=	gettext-setup
PORTVERSION=	0.28
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Set up i18n for Ruby projects

LICENSE=	APACHE20

RUN_DEPENDS=	rubygem-fast_gettext>=1.1.0:devel/rubygem-fast_gettext \
		rubygem-gettext>=3.0.2:devel/rubygem-gettext \
		rubygem-locale>=0:devel/rubygem-locale

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
