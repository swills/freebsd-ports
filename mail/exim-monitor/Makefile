# Created by: sheldonh@FreeBSD.org
# $FreeBSD: head/mail/exim-monitor/Makefile 412348 2016-04-01 14:16:16Z mat $

PKGNAMESUFFIX=	-monitor

COMMENT=	The Exim monitor for the Exim MTA

MASTERDIR=	${.CURDIR}/../exim

EXIMON_ONLY=	yes
OPTIONS_SLAVE=	EXIMON

# This dependency is disabled, because it prevents package users from
# using the exim-monitor package with any of the exim slave packages.
#
#RUN_DEPENDS=	${LOCALBASE}/sbin/exim:mail/exim

.include "${MASTERDIR}/Makefile"
