# $FreeBSD$

PORTNAME=	opencpn
PORTVERSION=	5.0.0
DISTVERSIONPREFIX=	v
CATEGORIES=	astro geography

MAINTAINER=	ml@netfence.it
COMMENT=	Concise ChartPlotter/Navigator

LICENSE=	GPLv2+

LIB_DEPENDS=	libportaudio.so:audio/portaudio \
		libcurl.so:ftp/curl \
		libexpat.so:textproc/expat2 \
		libtinyxml.so:textproc/tinyxml

USES=		cmake compiler:c++11-lang gettext-tools gl gnome localbase xorg
USE_CXXSTD=	c++11
USE_GL=		gl
USE_GNOME=	cairo gdkpixbuf2 gtk30 pango
USE_LDCONFIG=	${PREFIX}/lib/opencpn
USE_WX=		3.0+
USE_XORG=	x11
INSTALLS_ICONS=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	${GH_PROJECT}
GH_PROJECT=	OpenCPN

OPTIONS_DEFINE=	DOCS
OPTIONS_SUB=	yes

CMAKE_ARGS=	--DBUNDLE_GSHHS=CRUDE -DBUNDLE_TCDATA=ON -DOCPN_NEW_SERIAL=OFF -DOCPN_FORCE_GTK3=ON
CFLAGS+=	-I${PREFIX}/include/gdk-pixbuf-2.0 -I${PREFIX}/include/glib-2.0 -I${PREFIX}/lib/glib-2.0/include/ -I${PREFIX}/include/gtk-3.0 -I${PREFIX}/include/pango-1.0
LDFLAGS+=	-lgdk-3 -lgobject-2.0 -lpango-1.0
LDFLAGS+=	-Wl,-E # plugins
LDFLAGS+=	-Wl,--as-needed # ICE, SM, Xext

DOCS_CMAKE_ON=	-DBUNDLE_DOCS=ON
DOCS_CMAKE_OFF=	-DBUNDLE_DOCS=OFF
.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's,/usr/local,${PREFIX},' \
		${WRKSRC}/src/mygdal/cpl_csv.cpp \
		${WRKSRC}/src/mygdal/cpl_findfile.cpp \
		${WRKSRC}/data/doc/help_en_US.html
.if ${ARCH} != amd64 && ${ARCH} != i386
	@${REINPLACE_CMD} -e '/-msse/d' -e '/-mssse3/d' \
		-e '/-mavx2/d' ${WRKSRC}/CMakeLists.txt
.endif

post-install:
	${GZIP_CMD} ${STAGEDIR}${PREFIX}/man/man1/opencpn.1

.include <bsd.port.post.mk>
