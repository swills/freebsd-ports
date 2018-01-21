# $FreeBSD: head/net-p2p/transmission-daemon/Makefile 459492 2018-01-20 01:20:19Z woodsb02 $

PORTREVISION=	4
PKGNAMESUFFIX=	-daemon

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Fast and lightweight daemon BitTorrent client

RUN_DEPENDS=	${GEN_RUN_DEPENDS}

DESCR=		${.CURDIR}/pkg-descr
MASTERDIR=	${.CURDIR}/../transmission-cli
PLIST=		${.CURDIR}/pkg-plist
SLAVEPORT=	daemon
PKGMESSAGE=	${.CURDIR}/pkg-message

USE_RC_SUBR=	transmission
USERS=		transmission
GROUPS=		transmission

EXTRA_CONF_ARGS=--disable-cli \
		--enable-daemon \
		--without-gtk \
		--disable-mac \
		--disable-nls

post-install:
		${MKDIR} ${STAGEDIR}${ETCDIR}/home

.include "${MASTERDIR}/Makefile"
