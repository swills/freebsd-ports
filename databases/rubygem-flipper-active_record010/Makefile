# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/databases/rubygem-flipper-active_record010/Makefile 461883 2018-02-15 12:22:38Z tz $

PORTNAME=	flipper-active_record
PORTVERSION=	0.10.2
PORTREVISION=	1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	010

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	ActiveRecord adapter for Flipper

LICENSE=	MIT

DEPRECATED=	yes
EXPIRATION_DATE=	2018-08-01

RUN_DEPENDS=	rubygem-activerecord4>=3.2:databases/rubygem-activerecord4 \
		rubygem-flipper010>=${PORTVERSION}:devel/rubygem-flipper010

PORTSCOUT=	limit:^0\.10\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
