# Created by: Pakhom Golynga <pg@pakhom.spb.ru>
# $FreeBSD: head/net-mgmt/zabbix34-agent/Makefile 448743 2017-08-25 23:25:42Z dbaio $

PORTNAME=	zabbix34
CATEGORIES=	net-mgmt
PKGNAMESUFFIX=	-agent

MASTERDIR=	${.CURDIR}/../zabbix34-server
PLIST=		${PKGDIR}/pkg-plist.agent

OPTIONS_DEFINE=		IPV6
OPTIONS_DEFAULT=	OPENSSL

.include "${MASTERDIR}/Makefile"
