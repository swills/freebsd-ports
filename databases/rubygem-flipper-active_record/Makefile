# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/databases/rubygem-flipper-active_record/Makefile 463569 2018-03-04 16:10:52Z sunpoet $

PORTNAME=	flipper-active_record
PORTVERSION=	0.13.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	ActiveRecord adapter for Flipper

LICENSE=	MIT

RUN_DEPENDS=	rubygem-activerecord4>=3.2:databases/rubygem-activerecord4 \
		rubygem-flipper>=${PORTVERSION}:devel/rubygem-flipper

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
