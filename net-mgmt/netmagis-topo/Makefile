# Created by: Pierre David <pdagog@gmail.com>, Jean Benoit <jean@unistra.fr>
# $FreeBSD: head/net-mgmt/netmagis-topo/Makefile 464190 2018-03-11 17:53:51Z riggs $

PORTNAME=	netmagis
PKGNAMESUFFIX=	-topo

COMMENT=	Netmagis topology module

LICENSE=	CECILL-B

RUN_DEPENDS=	netmagis-config:net-mgmt/netmagis-common \
		rancid-run:net-mgmt/rancid3 \
		fping:net/fping

NO_ARCH=	# no
USE_RC_SUBR=	topographd toposendd
SUB_LIST=	TCLSH=${TCLSH}

MASTERDIR=	${.CURDIR}/../netmagis-common

FILESDIR=	${.CURDIR}/files
PKGMESSAGE=	${.CURDIR}/pkg-message
PLIST=		${.CURDIR}/pkg-plist

ALL_TARGET=build${PKGNAMESUFFIX?=}

post-install:
	@${MKDIR} ${STAGEDIR}/var/netmagis/eqgen ${STAGEDIR}/var/netmagis/eqvirt

.include "${MASTERDIR}/Makefile"
