# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-rspec-core/Makefile 476543 2018-08-06 19:54:17Z sunpoet $

PORTNAME=	rspec-core
PORTVERSION=	3.8.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	RSpec Core provides the structure for writing executable examples

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-rspec-support>=${PORTVERSION:R}.0:devel/rubygem-rspec-support

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/rspec

.include <bsd.port.mk>
