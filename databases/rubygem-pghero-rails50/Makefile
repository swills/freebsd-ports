# $FreeBSD: head/databases/rubygem-pghero-rails50/Makefile 468369 2018-04-26 18:51:37Z sunpoet $

PORTNAME=	pghero
PORTVERSION=	2.1.1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Performance dashboard for Postgres

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-activerecord50>=0:databases/rubygem-activerecord50

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
