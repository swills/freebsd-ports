# $FreeBSD: head/net-p2p/transmission-daemon/Makefile 459011 2018-01-14 22:35:00Z woodsb02 $

PORTREVISION=	4
PKGNAMESUFFIX=	-daemon

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Fast and lightweight daemon BitTorrent client

RUN_DEPENDS=	${GEN_RUN_DEPENDS}

DESCR=		${.CURDIR}/pkg-descr
MASTERDIR=	${.CURDIR}/../transmission-cli
PLIST=		${.CURDIR}/pkg-plist
SLAVEPORT=	daemon

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
