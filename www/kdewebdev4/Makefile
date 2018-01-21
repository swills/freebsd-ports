# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/www/kdewebdev4/Makefile 459315 2018-01-18 04:11:02Z jbeich $

PORTNAME=	kdewebdev
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	8
CATEGORIES=	www kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Comprehensive html/website development environment

LIB_DEPENDS=	libtidy.so:www/tidy-lib \
		libboost_thread.so:devel/boost-libs

USES=		cmake:outsource kde:4 tar:xz
USE_GNOME=	libxml2 libxslt
USE_KDE=	kdelibs pimlibs automoc4
USE_QT4=	dbus porting_build \
		qmake_build moc_build rcc_build uic_build uic3_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
