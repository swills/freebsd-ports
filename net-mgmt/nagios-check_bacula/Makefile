# Created by: Anders Troback
# $FreeBSD: head/net-mgmt/nagios-check_bacula/Makefile 420618 2016-08-22 16:00:00Z mat $

PORTNAME=	bacula
PORTREVISION=	3
CATEGORIES=	net-mgmt
PKGNAMEPREFIX=	nagios-check_
PKGNAMESUFFIX=	#

MAINTAINER=	freebsd@troback.com
COMMENT=	Nagios plugin for Bacula

LIB_DEPENDS+=	libbac.so:sysutils/bacula-client

PLIST=		${.CURDIR}/pkg-plist
PLIST_FILES=	libexec/nagios/check_bacula
WITH_NAGIOS_CHECK_ONLY=	yes
MASTERDIR=	${.CURDIR}/../../sysutils/bacula-server

CONFIGURE_ARGS=	--enable-client-only	\
		--disable-build-dird	\
		--disable-build-stored	\
		--disable-nls		\
		--disable-xatt

OPTIONS_DEFINE=	#
OPTIONS_DEFAULT=#

NO_CCACHE=	yes

.include "${MASTERDIR}/Makefile"
