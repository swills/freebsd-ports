# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/databases/rubygem-pg/Makefile 435939 2017-03-11 16:00:18Z sunpoet $

PORTNAME=	pg
PORTVERSION=	0.20.0
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
