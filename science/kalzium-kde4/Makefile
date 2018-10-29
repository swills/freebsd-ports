# $FreeBSD: head/science/kalzium-kde4/Makefile 483212 2018-10-28 02:37:33Z yuri $

PORTNAME=	kalzium
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	6
CATEGORIES=	science kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Periodic table of elements for KDE 4

DEPRECATED=	KDE4 is EOL upstream
EXPIRATION_DATE=	2018-12-31

LIB_DEPENDS=	libopenbabel.so:science/openbabel \
		libavogadro.so:science/avogadro
BUILD_DEPENDS=	${LOCALBASE}/lib/ocaml/facile/facile.a:math/facile \
		${LOCALBASE}/libdata/pkgconfig/chemical-mime-data.pc:science/chemical-mime-data
RUN_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/chemical-mime-data.pc:science/chemical-mime-data

USES=		cmake:outsource eigen:2 kde:4 pkgconfig qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_OCAML=	yes
NO_OCAML_RUNDEPENDS=	yes
USE_QT=		corelib declarative designer opengl script xml \
		moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

CMAKE_ON=	CMAKE_DISABLE_FIND_PACKAGE_Eigen3

.include <bsd.port.mk>
