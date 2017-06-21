# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/databases/rubygem-pg/Makefile 443513 2017-06-13 16:54:24Z sunpoet $

PORTNAME=	pg
PORTVERSION=	0.21.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby interface to PostgreSQL library

LICENSE=	BSD2CLAUSE RUBY
LICENSE_COMB=	dual

CONFIGURE_ARGS=	--with-pgsql-include-dir=`${PG_CONFIG} --includedir` \
		--with-pgsql-lib-dir=`${PG_CONFIG} --libdir`
PG_CONFIG=	${LOCALBASE}/bin/pg_config
USE_RUBY=	yes
USES=		gem pgsql

.include <bsd.port.mk>
