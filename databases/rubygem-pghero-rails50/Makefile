# $FreeBSD: head/databases/rubygem-pghero-rails50/Makefile 441632 2017-05-25 01:32:24Z jrm $

PORTNAME=	pghero
PORTVERSION=	1.7.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Performance dashboard for Postgres

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-activerecord50>0:databases/rubygem-activerecord50

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
