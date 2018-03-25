# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/databases/rubygem-state_machines-activerecord/Makefile 465119 2018-03-20 22:34:16Z sunpoet $

PORTNAME=	state_machines-activerecord
PORTVERSION=	0.5.1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Support for creating state machines for attributes on ActiveRecord

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-activerecord4>=4.1:databases/rubygem-activerecord4 \
		rubygem-state_machines-activemodel>=0.5.0:databases/rubygem-state_machines-activemodel

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
