# Created by: Robert Noland <rnoland@FreeBSD.org>
# $FreeBSD$

PORTNAME=	libcompizconfig
PORTVERSION=	0.8.8
PORTREVISION=	1
CATEGORIES=	x11-wm
MASTER_SITES=	http://releases.compiz.org/${PORTVERSION}/

MAINTAINER=	freebsd-ports@dan.me.uk
COMMENT=	Alternative configuration system for Compiz

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/compiz.pc:x11-wm/compiz

GNU_CONFIGURE=	yes
USES=		gmake libtool:keepla pathfix pkgconfig tar:bzip2
USE_GNOME=	intltool libxml2
USE_LDCONFIG=	yes
USE_XORG=	x11

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lpthread

OPTIONS_DEFINE=		INOTIFY NLS
OPTIONS_DEFAULT=	INOTIFY NLS
INOTIFY_DESC?=	Enable inotify support

INOTIFY_LIB_DEPENDS=	libinotify.so:devel/libinotify
INOTIFY_LDFLAGS=	-linotify

post-patch:
	@echo "OSVERSION=${OSVERSION}"
	@${REINPLACE_CMD} -e 's|malloc.h|stdlib.h|'	\
		${WRKSRC}/src/main.c			\
		${WRKSRC}/src/lists.c			\
		${WRKSRC}/src/filewatch.c		\
		${WRKSRC}/src/ini.c			\
		${WRKSRC}/backend/ini.c

post-patch-INOTIFY-off:
	@${REINPLACE_CMD} -e 's|sys/inotify.h||' ${WRKSRC}/configure

post-install:
.for l in compizconfig/backends/libini.so compiz/libccp.so libcompizconfig.so.0.0.0
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/${l}
.endfor

.include <bsd.port.mk>
