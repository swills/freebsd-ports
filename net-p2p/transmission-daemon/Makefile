# $FreeBSD: head/net-p2p/transmission-daemon/Makefile 491047 2019-01-23 17:07:22Z rigoletto $

PORTREVISION=	3
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
