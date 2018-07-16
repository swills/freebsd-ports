# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD$

PORTNAME=	openrct2
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.0
CATEGORIES=	games
MASTER_SITES+=	https://github.com/OpenRCT2/title-sequences/releases/download/${DISTVERSIONPREFIX}${TITLESVERSION}/:title \
		https://github.com/OpenRCT2/objects/releases/download/${DISTVERSIONPREFIX}${OBJECTSVERSION}/:object
DISTFILES+=	title-sequence-${DISTVERSIONPREFIX}${TITLESVERSION}.zip:title \
		objects.zip:object
EXTRACT_ONLY=	OpenRCT2-OpenRCT2-${DISTVERSIONPREFIX}${DISTVERSION}_GH0.tar.gz

MAINTAINER=	pkubaj@anongoth.pl
COMMENT=	Open source re-implementation of RollerCoaster Tycoon 2

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/licence.txt

IGNORE_FreeBSD_10=	needs newer libc++

LIB_DEPENDS=	libpng.so:graphics/png \
		libjansson.so:devel/jansson \
		libzip.so:archivers/libzip \
		libspeexdsp.so:audio/speexdsp \
		libfontconfig.so:x11-fonts/fontconfig \
		libcurl.so:ftp/curl \
		libfreetype.so:print/freetype2 \
		libicuuc.so:devel/icu

USES=		compiler:c++17-lang cmake:outsource desktop-file-utils iconv localbase:ldflags pkgconfig shared-mime-info ssl
USE_GITHUB=	yes
GH_ACCOUNT=	OpenRCT2
GH_PROJECT=	OpenRCT2
USE_GL=		gl
USE_LDCONFIG=	yes
USE_SDL=	sdl2
INSTALLS_ICONS=	yes
SUB_FILES=	pkg-message
CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_OFF=	DOWNLOAD_TITLE_SEQUENCES \
		DOWNLOAD_OBJECTS
OBJECTSVERSION=	1.0.2
TITLESVERSION=	0.1.2

OPTIONS_DEFINE=	DOCS
PORTDOCS=	changelog.txt contributors.md licence.txt readme.txt

post-extract:
	@${UNZIP_NATIVE_CMD} -d ${WRKDIR}/title-sequence \
		${DISTDIR}/title-sequence-v0.1.2.zip
	@${UNZIP_NATIVE_CMD} -d ${WRKDIR}/objects \
		${DISTDIR}/objects.zip

post-patch:
	@${REINPLACE_CMD} -e 's|%%DATADIR%%|${DATADIR}|' \
		${WRKSRC}/src/openrct2/config/Config.cpp

post-install:
	(cd ${WRKDIR}/title-sequence; \
		${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}/title)
	(cd ${WRKDIR}/objects; \
		${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}/object)

.include <bsd.port.mk>
