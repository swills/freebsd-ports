# $FreeBSD$

PORTNAME=	emby-server
PORTVERSION=	3.5.3.0
CATEGORIES=	multimedia
MASTER_SITES=	https://github.com/MediaBrowser/Emby.Releases/releases/download/${PORTVERSION}/
DISTNAME=	emby-server-freebsd_${PORTVERSION}_amd64

MAINTAINER=	apps@emby.media
COMMENT=	Emby Server

LICENSE=	UNKNOWN
LICENSE_NAME=	custom
LICENSE_FILE=	${WRKSRC}/license.docx
LICENSE_PERMS=	dist-mirror no-dist-sell pkg-mirror no-pkg-sell auto-accept

ONLY_FOR_ARCHS=	amd64

RUN_DEPENDS=	mono:lang/mono
LIB_DEPENDS=	libass.so:multimedia/libass \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libfribidi.so:converters/fribidi \
		libgnutls.so:security/gnutls \
		libiconv.so:converters/iconv \
		libopus.so:audio/opus \
		libsmbclient.so:net/samba48 \
		libsqlite3.so:databases/sqlite3 \
		libtheora.so:multimedia/libtheora \
		libva.so:multimedia/libva \
		libvorbis.so:audio/libvorbis \
		libwebp.so:graphics/webp \
		libx264.so:multimedia/libx264 \
		libzvbi.so:devel/libzvbi

USES=		tar:xz
NO_BUILD=	true
WRKSRC=		${WRKDIR}/emby-server-${PORTVERSION}

USE_RC_SUBR=	${PORTNAME}
SUB_LIST=	PORTNAME=${PORTNAME} USER=${USERS} GROUP=${GROUPS} RC_NAME=emby_server
USERS=		emby
GROUPS=		emby

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/opt/emby-server
	(cd ${WRKSRC}/bin && ${COPYTREE_BIN} . ${STAGEDIR}${PREFIX}/opt/emby-server/bin)
	(cd ${WRKSRC}/lib && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/opt/emby-server/lib)
	(cd ${WRKSRC}/system && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/opt/emby-server/system)
	(ln -s ${PREFIX}/lib/libsqlite3.so ${STAGEDIR}${PREFIX}/opt/emby-server/system/libsqlite3.so)
	(ln -s ${PREFIX}/opt/emby-server/lib/libSkiaSharp.so ${STAGEDIR}${PREFIX}/opt/emby-server/system/libSkiaSharp.so)

.include <bsd.port.mk>
