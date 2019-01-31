# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/databases/rubygem-flipper-active_record/Makefile 491723 2019-01-31 14:05:37Z mfechner $

PORTNAME=	flipper-active_record
PORTVERSION=	0.16.0
PORTREVISION=	1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	ActiveRecord adapter for Flipper

LICENSE=	MIT

RUN_DEPENDS=	rubygem-activerecord50>=3.2:databases/rubygem-activerecord50 \
		rubygem-flipper>=${PORTVERSION}:devel/rubygem-flipper

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
