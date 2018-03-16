# $FreeBSD: head/science/kalzium-kde4/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	kalzium
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	5
CATEGORIES=	science kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Periodic table of elements for KDE 4

LIB_DEPENDS=	libopenbabel.so:science/openbabel \
		libavogadro.so:science/avogadro
BUILD_DEPENDS=	${LOCALBASE}/lib/ocaml/facile/facile.a:math/facile \
		${LOCALBASE}/libdata/pkgconfig/chemical-mime-data.pc:science/chemical-mime-data
RUN_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/chemical-mime-data.pc:science/chemical-mime-data

USES=		cmake:outsource eigen:3 kde:4 pkgconfig tar:xz
USE_KDE=	kdelibs automoc4
USE_OCAML=	yes
NO_OCAML_RUNDEPENDS=	yes
USE_QT4=	corelib declarative designer opengl script xml \
		moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
