# $FreeBSD: head/net-p2p/transmission-daemon/Makefile 488657 2018-12-29 07:18:50Z rigoletto $

PORTREVISION=	1
PKGNAMESUFFIX=	-daemon

USES=		ssl
NLS_USES=	gettext-runtime:run

USERS=		transmission
GROUPS=		transmission
USE_RC_SUBR=	transmission

MASTERDIR=	${.CURDIR}/../transmission-cli
DESCR=		${.CURDIR}/pkg-descr
PKGMESSAGE=	${.CURDIR}/pkg-message
PLIST=		${.CURDIR}/pkg-plist

SLAVEPORT=	daemon

.include "${MASTERDIR}/Makefile"
