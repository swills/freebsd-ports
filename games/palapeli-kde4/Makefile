# $FreeBSD: head/games/palapeli-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	palapeli
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	5
CATEGORIES=	games kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:4 qt:4 shared-mime-info tar:xz
USE_KDE=	kdelibs libkdegames automoc4
USE_QT=		corelib gui gui \
		moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e '/^update_xdg_mimetypes/ d' \
		${WRKSRC}/mime/CMakeLists.txt

.include <${.CURDIR}/../kdegames-kde4/Makefile.common>
.include <bsd.port.mk>
