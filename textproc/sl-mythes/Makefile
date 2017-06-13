# $FreeBSD: head/textproc/sl-mythes/Makefile 427156 2016-11-26 10:34:54Z sunpoet $

PORTNAME=	mythes
PORTVERSION=	2016.06.30
CATEGORIES=	textproc
MASTER_SITES=	LOCAL/sunpoet/${PORTNAME}/
PKGNAMEPREFIX=	sl-
DISTNAME=	thes_sl_SI_v2-${PORTVERSION:C/\.//g}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Slovenian thesaurus

LICENSE=	LGPL21

USES=		zip
NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	%%DATADIR%%/th_sl_SI_v2.dat \
		%%DATADIR%%/th_sl_SI_v2.idx

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/th_sl_SI_v2.dat ${WRKSRC}/th_sl_SI_v2.idx ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
