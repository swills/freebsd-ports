# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/net/proftpd-mod_ldap/Makefile 436247 2017-03-15 14:45:30Z mat $

PORTNAME=	mod_ldap
PORTREVISION=	3
CATEGORIES=	net ftp
PKGNAMEPREFIX=	proftpd-

MAINTAINER=	mm@FreeBSD.org
COMMENT=	LDAP and quotatab_ldap ProFTPD modules

LICENSE=	GPLv2

DESCR=		${.CURDIR}/pkg-descr

MASTERDIR=	${.CURDIR}/../../ftp/proftpd

USE_OPENLDAP=	yes
USES=		ssl

INCLUDEDIRS=	${LOCALBASE}/include
LIBDIRS=	${LOCALBASE}/lib

_BUILDING_PROFTPD_MODULE=	${PORTNAME} \
				mod_quotatab_ldap

.include "${MASTERDIR}/Makefile"
