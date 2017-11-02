# $FreeBSD: head/databases/rubygem-pghero-rails5/Makefile 453124 2017-10-29 16:10:14Z sunpoet $

PORTNAME=	pghero
DISTVERSION=	2.0.7
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
