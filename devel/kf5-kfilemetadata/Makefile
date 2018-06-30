# $FreeBSD: head/devel/kf5-kfilemetadata/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kfilemetadata
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library for extracting file metadata

LIB_DEPENDS=	libavutil.so:multimedia/ffmpeg \
		libepub.so:textproc/ebook-tools \
		libexiv2.so:graphics/exiv2 \
		libpoppler-qt5.so:graphics/poppler-qt5 \
		libtag.so:audio/taglib
# TODO: maybe depend on textproc/catdoc

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 pkgconfig \
		qt:5 tar:xz
USE_KDE=	archive ecm i18n
USE_QT=		buildtools_build core qmake_build xml

# Frameworks ports install localization files that conflict with some
# KDE4 localization ports
CONFLICTS_INSTALL=     kde4-l10n-*

.include <bsd.port.mk>
