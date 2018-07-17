# $FreeBSD: head/www/transmission-web/Makefile 474704 2018-07-15 17:01:05Z tcberner $

CATEGORIES=	www
PKGNAMESUFFIX=	-web

USES=		cpe
NO_ARCH=	yes
NO_BUILD=	yes
PORTDATA=	web

MASTERDIR=	${.CURDIR}/../../net-p2p/transmission-cli
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${NONEXISTENT}

SLAVEPORT=	web

#post-extract:
#	@${FIND} ${WRKSRC}/web \( -name '*.am' -o -name '*.in' \
		-o -name '*.scss' \) -delete

#do-install:
#	( cd ${WRKSRC} && ${COPYTREE_SHARE} web ${STAGEDIR}${DATADIR} )

.include "${MASTERDIR}/Makefile"
