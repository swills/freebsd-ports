# $FreeBSD: head/graphics/libksane-kde4/Makefile 462619 2018-02-22 19:03:17Z tcberner $

PORTNAME=	libksane
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	graphics kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	SANE library interface for KDE

LIB_DEPENDS=	libsane.so:graphics/sane-backends

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

pre-configure:
	${REINPLACE_CMD} -e '/pkgconfig/ s/$${LIB_INSTALL_DIR}/libdata/' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
