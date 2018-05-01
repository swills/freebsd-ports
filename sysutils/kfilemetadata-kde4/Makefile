# $FreeBSD: head/sysutils/kfilemetadata-kde4/Makefile 468519 2018-04-28 06:14:58Z tcberner $

PORTNAME=	kfilemetadata
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	17
CATEGORIES=	sysutils kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library for extracting file metadata

LIB_DEPENDS=	libpoppler-qt4.so:graphics/poppler-qt4 \
		libtag.so:audio/taglib \
		libexiv2.so:graphics/exiv2 \
		libswscale.so:multimedia/ffmpeg \
		libepub.so:textproc/ebook-tools \
		libqmobipocket.so:graphics/kdegraphics-mobipocket-kde4

USES=		cmake:outsource kde:4 pkgconfig tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	corelib qmake_build moc_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
