# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD$

PORTNAME=	pitivi
PORTVERSION=	0.99
CATEGORIES=	multimedia
MASTER_SITES=	GNOME

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Gstreamer based non-linear audio/video editor

LICENSE=	LGPL21+

LIB_DEPENDS+=	libpython3.5m.so:lang/python35
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=0:devel/py-zope.interface@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}goocanvas>=0:graphics/py-goocanvas@${PY_FLAVOR} \
		${LOCALBASE}/bin/gst-validate-1.0:multimedia/gstreamer1-validate

USES=		desktop-file-utils gettext localbase meson ninja pkgconfig python shebangfix tar:xz
SHEBANG_FILES=	bin/pitivi.in
USE_GNOME=	cairo intltool pygtk2
USE_GSTREAMER1=	yes
INSTALLS_ICONS=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
