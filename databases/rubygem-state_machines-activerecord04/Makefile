# $FreeBSD$

PORTNAME=	state_machines-activerecord
PORTVERSION=	0.4.1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	04

MAINTAINER=	idefix@fechner.net
COMMENT=	Support for creating state machines for attributes on ActiveRecord

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-activerecord4>=4.1:databases/rubygem-activerecord4 \
		rubygem-state_machines-activemodel>=0.3.0:databases/rubygem-state_machines-activemodel

PORTSCOUT=	limit:^0\.4

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
