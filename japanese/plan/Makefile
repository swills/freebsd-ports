# Created by: David O'Brien (obrien@cs.ucdavis.edu)
# $FreeBSD: head/japanese/plan/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	plan
PORTVERSION=	1.9
PORTREVISION=	2
CATEGORIES=	japanese

MAINTAINER=	ports@FreeBSD.org

MAKE_ENV+=	JAPANESE=yes

MASTERDIR=	${.CURDIR}/../../deskutils/plan

PLIST=	${WRKDIR}/PLIST
EXTRA_PATCHES=	${.CURDIR}/files/patch-*

PORTDOCS=	plan_calEUC.ps

OPTIONS_DEFINE=	DOCS

post-build:
	${CAT} ${MASTERDIR}/pkg-plist >> ${WRKDIR}/PLIST

post-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}/netplan.dir
	${CHMOD} 1777 ${STAGEDIR}${DATADIR}/netplan.dir
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${.CURDIR}/files/plan_calEUC.ps ${STAGEDIR}${DOCSDIR}

.include	"${MASTERDIR}/Makefile"
