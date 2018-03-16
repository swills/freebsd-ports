# Created by: Pierre David <pdagog@gmail.com>, Jean Benoit <jean@unistra.fr>
# $FreeBSD: head/net-mgmt/netmagis-servers/Makefile 464190 2018-03-11 17:53:51Z riggs $

PORTNAME=	netmagis
PKGNAMESUFFIX=	-servers

COMMENT=	Netmagis module for dhcp, bind and mail servers

LICENSE=	CECILL-B

RUN_DEPENDS=	netmagis-config:net-mgmt/netmagis-common

MASTERDIR=	${.CURDIR}/../netmagis-common

PKGMESSAGE=	${.CURDIR}/pkg-message
PLIST=		${.CURDIR}/pkg-plist

.include "${MASTERDIR}/Makefile"
