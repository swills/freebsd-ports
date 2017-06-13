# Created by: Mikhail T. <michael@fun-box.ru>
# $FreeBSD: head/databases/rubygem-memcache/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	memcache
PORTVERSION=	1.5.1
PORTREVISION=	1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby bindings for libmemcached

LICENSE=	MIT

LIB_DEPENDS=	libmemcached.so:databases/libmemcached

CONFIGURE_ARGS=	--with-opt-dir=${LOCALBASE}
GEM_ENV=	EXTERNAL_LIB="yes"
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
