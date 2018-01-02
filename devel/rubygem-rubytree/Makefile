# Created by: Mikhail T. <m.tsatsenko@gmail.com>
# $FreeBSD: head/devel/rubygem-rubytree/Makefile 457006 2017-12-22 23:05:03Z sunpoet $

PORTNAME=	rubytree
PORTVERSION=	1.0.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Implementation of the Tree data structure for the Ruby

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-json>=2.1:devel/rubygem-json \
		rubygem-structured_warnings>=0.3:devel/rubygem-structured_warnings

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
