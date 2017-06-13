# Created by: trevor
# $FreeBSD: head/audio/festvox-rab8/Makefile 425174 2016-11-02 22:45:14Z mat $

PORTNAME=	festvox-rab8
PORTVERSION=	1.4.1
PORTREVISION=	2
CATEGORIES=	audio accessibility
MASTER_SITES=	FESTIVAL
DISTNAME=	festvox_rablpc8k
DIST_SUBDIR=	festival

MAINTAINER=	ports@FreeBSD.org
COMMENT=	British English male voice, sampled at 8 kHz, for Festival

RUN_DEPENDS=	\
${LOCALBASE}/share/festival/lib/dicts/wsj.wp39.poslexR:audio/festlex-poslex \
${LOCALBASE}/share/festival/lib/dicts/oald/oaldlex.scm:audio/festlex-oald

WRKSRC=		${WRKDIR}/festival

CONFLICTS=	festvox-rab16

NO_BUILD=	yes

FHOME=		${PREFIX}/share/festival

do-install:
	@${MKDIR} ${STAGEDIR}${FHOME}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${FHOME}

.include <bsd.port.mk>
