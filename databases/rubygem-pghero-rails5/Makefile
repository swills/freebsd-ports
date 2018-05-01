# $FreeBSD: head/databases/rubygem-pghero-rails5/Makefile 468368 2018-04-26 18:51:33Z sunpoet $

PORTNAME=	pghero
DISTVERSION=	2.1.1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Performance dashboard for Postgres

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-activerecord5>0:databases/rubygem-activerecord5

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
