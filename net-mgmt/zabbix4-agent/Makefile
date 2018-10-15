# Created by: Pakhom Golynga <pg@pakhom.spb.ru>
# $FreeBSD: head/net-mgmt/zabbix4-agent/Makefile 481218 2018-10-04 12:03:59Z dbaio $

PORTNAME=	zabbix4
CATEGORIES=	net-mgmt
PKGNAMESUFFIX=	-agent

MASTERDIR=	${.CURDIR}/../zabbix4-server
PLIST=		${PKGDIR}/pkg-plist.agent

OPTIONS_DEFINE=		IPV6
OPTIONS_DEFAULT=	OPENSSL

.include "${MASTERDIR}/Makefile"
