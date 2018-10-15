# Created by: Jesse <jessefrgsmith@yahoo.ca>
# $FreeBSD: head/multimedia/xmms-skins-huge/Makefile 481899 2018-10-12 12:42:22Z antoine $

PORTNAME=	xmms-skins-huge
PORTVERSION=	1.0.0
CATEGORIES=	multimedia
MASTER_SITES=	http://webs.ono.com/supercarlos/
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	jessefrgsmith@yahoo.ca
COMMENT=	Skins for X Multimedia System (XMMS)

DEPRECATED=	Uses obsolete glib12
EXPIRATION_DATE=	2018-12-20

CONFLICTS_INSTALL=	xmms-skins-[0-9]*

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/Skins
DATADIR=	${PREFIX}/share/xmms

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/Skins
	${INSTALL_DATA} ${WRKSRC}/* ${STAGEDIR}${DATADIR}/Skins

.include <bsd.port.mk>
