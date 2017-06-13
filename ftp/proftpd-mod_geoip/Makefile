# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/ftp/proftpd-mod_geoip/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	mod_geoip
CATEGORIES=	ftp
PKGNAMEPREFIX=	proftpd-

MAINTAINER=	mm@FreeBSD.org
COMMENT=	GeoIP ProFTPD module

LICENSE=	GPLv2

LIB_DEPENDS=	libGeoIP.so:net/GeoIP

DESCR=		${.CURDIR}/pkg-descr

MASTERDIR=	${.CURDIR}/../../ftp/proftpd

INCLUDEDIRS=	${LOCALBASE}/include
LIBDIRS=	${LOCALBASE}/lib

_BUILDING_PROFTPD_MODULE=	${PORTNAME}

.include "${MASTERDIR}/Makefile"
