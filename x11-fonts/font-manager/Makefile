# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD$

PORTNAME=	font-manager
PORTVERSION=	0.6.0
CATEGORIES=	x11-fonts gnome
MASTER_SITES= https://BSDforge.com/projects/source/x11-fonts/font-manager/

MAINTAINER=	portmaster@bsdforge.com
COMMENT=	Font management application for the GNOME desktop
PORTSCOUT=	limit:^0\.6\.0

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	xml2po:textproc/gnome-doc-utils

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libsqlite3.so:databases/sqlite3
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/libxml2.py:textproc/py-libxml2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3@${PY_FLAVOR}

USE_GNOME=	pygtk2
GNU_CONFIGURE=	yes
USES=		gmake gnome pkgconfig python:3.5+ tar:txz

PORTDATA=	*

OPTIONS_DEFINE=	NLS

OPTIONS_SUB=	yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=	gettext
NLS_USES_OFF=	gettext-runtime

pre-configure:
	@${CHMOD} 0544 ${WRKSRC}/configure ${WRKSRC}/po/pogen.sh

.include <bsd.port.mk>
