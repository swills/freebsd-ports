# $FreeBSD: head/www/transmission-web/Makefile 463262 2018-02-28 21:09:36Z crees $

CATEGORIES=	www net-p2p
PKGNAMESUFFIX=	-web

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Fast and lightweight WebUI for Transmission BitTorrent client

DESCR=		${.CURDIR}/pkg-descr
MASTERDIR=	${.CURDIR}/../../net-p2p/transmission-cli
PLIST=		${NONEXISTENT}
SLAVEPORT=	web

PORTDATA=	web

NO_BUILD=	yes

post-extract:
	@${FIND} ${WRKSRC}/web -name Makefile.* -delete

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/web
	(cd ${WRKSRC}/web && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}/web)

.include "${MASTERDIR}/Makefile"
