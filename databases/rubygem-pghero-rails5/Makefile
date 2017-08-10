# $FreeBSD: head/databases/rubygem-pghero-rails5/Makefile 447386 2017-08-05 03:25:17Z jrm $

PORTNAME=	pghero
PORTVERSION=	1.7.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Performance dashboard for Postgres

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-activerecord5>0:databases/rubygem-activerecord5

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
