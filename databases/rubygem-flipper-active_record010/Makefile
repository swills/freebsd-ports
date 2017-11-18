# $FreeBSD$

PORTNAME=	flipper-active_record
PORTVERSION=	0.10.2
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	010

MAINTAINER=	idefix@fechner.net
COMMENT=	ActiveRecord adapter for Flipper

LICENSE=	MIT

RUN_DEPENDS=	rubygem-activerecord4>=3.2:databases/rubygem-activerecord4 \
		rubygem-flipper010>=${PORTVERSION}:devel/rubygem-flipper010

CONFLICTS_INSTALL=	rubygem-flipper-active_record

USES=		gem
NO_ARCH=	yes
USE_RUBY=	yes

.include <bsd.port.mk>
