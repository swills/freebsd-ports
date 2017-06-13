# $FreeBSD: head/databases/rubygem-dbd-sqlite3/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	dbd-sqlite3
PORTVERSION=	1.2.5
PORTREVISION=	1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	SQLite3 driver for DBI-for-Ruby

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	rubygem-dbi>=0.4.0:databases/rubygem-dbi \
		rubygem-sqlite3-ruby>=0:databases/rubygem-sqlite3-ruby

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
