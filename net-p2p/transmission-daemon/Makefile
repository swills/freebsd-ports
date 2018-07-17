# $FreeBSD: head/net-p2p/transmission-daemon/Makefile 474704 2018-07-15 17:01:05Z tcberner $

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
