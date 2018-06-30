# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD: head/audio/kscd-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kscd
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	audio kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	CD Player for KDE

LICENSE=	GPLv2

LIB_DEPENDS=	libmusicbrainz3.so:audio/libmusicbrainz3

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		phonon moc_build qmake_build rcc_build uic_build

OPTIONS_DEFINE=	ALSA

ALSA_LIB_DEPENDS=	libasound.so:audio/alsa-lib
ALSA_EXTRA_PATCHES_OFF=	${FILESDIR}/extrapatch-no_alsa

.include <bsd.port.mk>
