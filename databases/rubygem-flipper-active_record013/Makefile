# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/databases/rubygem-flipper-active_record013/Makefile 466580 2018-04-05 19:11:27Z sunpoet $

PORTNAME=	flipper-active_record
PORTVERSION=	0.13.0
PORTREVISION=	1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	013

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	ActiveRecord adapter for Flipper

LICENSE=	MIT

RUN_DEPENDS=	rubygem-activerecord50>=3.2:databases/rubygem-activerecord50 \
		rubygem-flipper013>=${PORTVERSION}:devel/rubygem-flipper013

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PORTSCOUT=	limit:^0\.13\.

.include <bsd.port.mk>
