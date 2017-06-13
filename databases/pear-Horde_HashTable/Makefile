# $FreeBSD: head/databases/pear-Horde_HashTable/Makefile 421524 2016-09-07 22:54:27Z mm $

PORTNAME=	Horde_HashTable
PORTVERSION=	1.2.6
CATEGORIES=	databases www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Hash Table Interface

OPTIONS_DEFINE=	MEMCACHE
USES=	horde
USE_HORDE_RUN=	Horde_Exception

MEMCACHE_USE=	HORDE_RUN=Horde_Memcache

.include <bsd.port.mk>
