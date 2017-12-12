# Created by: gurkan@phys.ethz.ch
# $FreeBSD: head/deskutils/charmap/Makefile 455401 2017-12-03 12:23:53Z theraven $

PORTNAME=	charmap
PORTVERSION=	0.2
PORTREVISION=	7
CATEGORIES=	deskutils gnustep
MASTER_SITES=	http://www.sourcefiles.org/Utilities/GUI/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Character map for GNUstep

LICENSE=	GPLv2

USES=		gnustep
USE_GNUSTEP=	back base build gui

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Charmap.app/Charmap

.include <bsd.port.mk>
