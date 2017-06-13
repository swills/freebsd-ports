# Created by: Pakhom Golynga <pg@pakhom.spb.ru>
# $FreeBSD: head/net-mgmt/zabbix32-agent/Makefile 422754 2016-09-25 17:13:42Z danilo $

PORTNAME=	zabbix32
CATEGORIES=	net-mgmt
PKGNAMESUFFIX=	-agent

MAINTAINER=	pakhom@pakhom.spb.ru
COMMENT=	Enterprise-class open source distributed monitoring (${PKGNAMESUFFIX:S/^-//})

LICENSE=	GPLv2

MASTERDIR=	${.CURDIR}/../zabbix32-server
PLIST=		${PKGDIR}/pkg-plist.agent

OPTIONS_DEFINE=		IPV6
OPTIONS_DEFAULT=	OPENSSL

.include "${MASTERDIR}/Makefile"
