# Created by: Pierre David <pdagog@gmail.com>, Jean Benoit <jean@unistra.fr>
# $FreeBSD: head/net-mgmt/netmagis-database/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	netmagis
PKGNAMESUFFIX=	-database

COMMENT=	Utilities for the netmagis database server

RUN_DEPENDS=	netmagis-config:net-mgmt/netmagis-common \
		pwgen:sysutils/pwgen \
		tcltls>=1.4.1:devel/tcltls \
		${LOCALBASE}/share/certs/ca-root-nss.crt:security/ca_root_nss

WANT_PGSQL+=	server pltcl

MASTERDIR=	${.CURDIR}/../netmagis-common

PKGMESSAGE=	${.CURDIR}/pkg-message
PLIST=		${.CURDIR}/pkg-plist

.include "${MASTERDIR}/Makefile"
