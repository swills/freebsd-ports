# Created by: Lars Engels <lars.engels@0x20.net>
# $FreeBSD: head/sysutils/nbosd/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	nbosd
PORTVERSION=	0.5.0
PORTREVISION=	7
CATEGORIES=	sysutils
MASTER_SITES=	http://bsd-geek.de/FreeBSD/distfiles/

MAINTAINER=	lme@FreeBSD.org
COMMENT=	Displays battery life and CPU frequency with an OSD

LIB_DEPENDS=	libxosd.so:misc/xosd

PLIST_FILES=	bin/nbosd
PORTDOCS=	*

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/nbosd ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/CHANGELOG ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
