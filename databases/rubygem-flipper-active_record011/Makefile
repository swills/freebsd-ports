# $FreeBSD: head/databases/rubygem-flipper-active_record011/Makefile 461884 2018-02-15 12:30:56Z tz $

PORTNAME=	flipper-active_record
PORTVERSION=	0.11.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	011

MAINTAINER=	idefix@fechner.net
COMMENT=	ActiveRecord adapter for Flipper

LICENSE=	MIT

RUN_DEPENDS=	rubygem-activerecord4>=3.2:databases/rubygem-activerecord4 \
		rubygem-flipper011>=${PORTVERSION}:devel/rubygem-flipper011

PORTSCOUT=	limit:^0\.11\.

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
