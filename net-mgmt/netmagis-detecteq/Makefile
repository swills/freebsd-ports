# Created by: Pierre David <pdagog@gmail.com>, Jean Benoit <jean@unistra.fr>
# $FreeBSD: head/net-mgmt/netmagis-detecteq/Makefile 479407 2018-09-10 13:15:47Z mat $

PORTNAME=	netmagis
PKGNAMESUFFIX=	-detecteq

COMMENT=	Files for detection of equipment modifications

LICENSE=	CECILL-B

RUN_DEPENDS=	netmagis-config:net-mgmt/netmagis-common

MASTERDIR=	${.CURDIR}/../netmagis-common

PKGMESSAGE=	${.CURDIR}/pkg-message
PLIST=		${.CURDIR}/pkg-plist

OPTIONS_DEFINE=	EXAMPLES

.include "${MASTERDIR}/Makefile"
