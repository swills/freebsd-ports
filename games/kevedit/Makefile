# Created by: Raymond Pasco <ray@cultofray.net>
# $FreeBSD: head/games/kevedit/Makefile 492151 2019-02-04 18:37:46Z amdmi3 $

PORTNAME=	kevedit
PORTVERSION=	0.5.1
PORTREVISION=	4
CATEGORIES=	games
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Modern ZZT editor with necessary features

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	cdrecord:sysutils/cdrtools
RUN_DEPENDS=	cdrecord:sysutils/cdrtools

USE_SDL=	sdl
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
