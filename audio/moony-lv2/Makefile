# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/audio/moony-lv2/Makefile 481453 2018-10-07 16:05:50Z yuri $

PORTNAME=	moony
PORTVERSION=	0.22.0
CATEGORIES=	audio
MASTER_SITES=	https://gitlab.com/OpenMusicKontrollers/moony.lv2/repository/archive.tar.gz?ref=${PORTVERSION}&dummy=/
PKGNAMESUFFIX=	-lv2

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Realtime Lua as programmable glue in LV2

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	lv2>0:audio/lv2

USES=		cmake:outsource compiler:c++11-lang gl pkgconfig
USE_XORG=	x11 xext
USE_GL=		gl glu

post-extract:
	@${MV} ${WRKDIR}/moony* ${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
