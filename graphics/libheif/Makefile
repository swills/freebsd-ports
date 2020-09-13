# $FreeBSD$

PORTNAME=		libheif
DISTVERSIONPREFIX=	v
DISTVERSION=		1.8.0
CATEGORIES=		graphics

MAINTAINER=		freebsd@sebastiansteinmetz.ch
COMMENT=		Libheif is an ISO/IEC 23008-12:2017 HEIF file format de- and encoder

LICENSE=		LGPL3+
LICENSE_FILE_LGPL3+ =	${WRKSRC}/COPYING

USES=			autoreconf compiler:c++11-lang libtool localbase pkgconfig \
			shebangfix
USE_GITHUB=		yes
GH_ACCOUNT=		strukturag
GH_PROJECT=		libheif
GNU_CONFIGURE=		yes
USE_LDCONFIG=		yes
SHEBANG_GLOB=		*.sh
INSTALL_TARGET=		install-strip

OPTIONS_DEFINE=	AOM EXAMPLES JPEG LIBDE265 PIXBUF PNG THREADS X265
OPTIONS_DEFAULT=AOM EXAMPLES JPEG LIBDE265 PIXBUF PNG THREADS X265
OPTIONS_SUB=	yes

AOM_DESC=	AV1 encoding/decoding via libaom
EXAMPLES_DESC=	Install example programs (heif-convert, heif-enc, heif-info, heif-thumbnailer)
LIBDE265_DESC=	Use libde265 (support for HEVC decoding)
X265_DESC=	Use x265 (support for HEVC encoding)

AOM_LIB_DEPENDS=	libaom.so:multimedia/aom

PIXBUF_USES=		gnome
PIXBUF_USE=		GNOME=gdkpixbuf2
PIXBUF_CONFIGURE_ENABLE=gdk-pixbuf

THREADS_CONFIGURE_OFF=	--disable-multithreading

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MEXAMPLES}
LICENSE+=		MIT
LICENSE_COMB=		multi
LICENSE_FILE_MIT=	${WRKSRC}/examples/COPYING
USES+=			shared-mime-info
CONFIGURE_ARGS+=	--disable-go
.endif

.if ${PORT_OPTIONS:MJPEG}
USES+=			jpeg
.endif

.if ${PORT_OPTIONS:MLIBDE265}
LIB_DEPENDS+=		libde265.so:multimedia/libde265
.endif

.if ${PORT_OPTIONS:MPNG}
LIB_DEPENDS+=		libpng.so:graphics/png
.endif

.if ${PORT_OPTIONS:MX265}
LIB_DEPENDS+=		libx265.so:multimedia/x265
.endif

.include <bsd.port.mk>
