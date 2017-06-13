# Created by: Pakhom Golynga <pg@pakhom.spb.ru>
# $FreeBSD: head/net-mgmt/zabbix3-agent/Makefile 415742 2016-05-23 20:35:01Z amdmi3 $

PORTNAME=	zabbix3
CATEGORIES=	net-mgmt
PKGNAMESUFFIX=	-agent

MAINTAINER=	pakhom@pakhom.spb.ru
COMMENT=	Enterprise-class open source distributed monitoring (${PKGNAMESUFFIX:S/^-//}) LTS

LICENSE=	GPLv2

MASTERDIR=	${.CURDIR}/../zabbix3-server
PLIST=		${PKGDIR}/pkg-plist.agent

OPTIONS_DEFINE=		IPV6
OPTIONS_DEFAULT=	OPENSSL

.include "${MASTERDIR}/Makefile"
