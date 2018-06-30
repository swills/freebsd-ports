# Created by: arved
# $FreeBSD: head/multimedia/kaffeine/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kaffeine
PORTVERSION=	1.3.1
PORTREVISION=	6
CATEGORIES=	multimedia kde
MASTER_SITES=	SF/kaffeine/current

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multimedia player based on KDE and VLC

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	v4l_compat>0:multimedia/v4l_compat
LIB_DEPENDS=	libvlc.so:multimedia/vlc-qt4

USES=		cmake kde:4 cpe gettext pkgconfig qt:4
USE_KDE=	automoc4 kdelibs
USE_QT=		corelib dbus gui network phonon sql svg xml \
		moc_build qmake_build rcc_build uic_build sql-sqlite2
USE_XORG=	xscrnsaver

CPE_VENDOR=	kaffeine
CPE_PRODUCT=	kaffeine_player

.include <bsd.port.mk>
