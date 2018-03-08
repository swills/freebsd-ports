# $FreeBSD: head/databases/pear-Horde_HashTable/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Horde_HashTable
PORTVERSION=	1.2.6
CATEGORIES=	databases www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Hash Table Interface

OPTIONS_DEFINE=	MEMCACHE
USES=	horde
USE_HORDE_RUN=	Horde_Exception

MEMCACHE_USE=	HORDE_RUN=Horde_Memcache

.include <bsd.port.mk>
