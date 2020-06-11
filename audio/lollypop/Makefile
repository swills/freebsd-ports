# Created by: Olivier Duchateau
# $FreeBSD$

PORTNAME=	lollypop
DISTVERSION=	1.3.1
CATEGORIES=	audio

MAINTAINER=	greg@unrelenting.technology
COMMENT=	Play and organize your music collection

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS} \
		itstool:textproc/itstool
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlite3>=2.7.8:databases/py-sqlite3@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dbus>=1.1.1:devel/py-dbus@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}gstreamer1>=1.4.0:multimedia/py-gstreamer1@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pylast>=1.4.0:audio/py-pylast@${PY_FLAVOR} \
		${PY_PILLOW}
LIB_DEPENDS=	libnotify.so:devel/libnotify \
		libappstream-glib.so:devel/appstream-glib \
		libtotem-plparser.so:multimedia/totem-pl-parser

USES=		python:3.5+ pkgconfig gnome gettext meson shebangfix sqlite desktop-file-utils
USE_GITLAB=	yes
GL_SITE=	https://gitlab.gnome.org
GL_ACCOUNT=	World
GL_COMMIT=	523bd2fe072689ae7361b01e170915cc0db4064b
GL_TUPLE=	gnumdk:lollypop-po:f849b9c55dd0ae119f505a4c2719709041e2e905:po/subprojects/po
USE_GNOME=	glib20 gtk30 pygobject3 introspection:build intltool intlhack
USE_GSTREAMER1=	yes mpg123 ogg flac opus libav faad good speex
USE_PYTHON=	py3kplist
INSTALLS_ICONS=	yes

SHEBANG_FILES=	lollypop.in search-provider/lollypop-sp.in meson_post_install.py

GLIB_SCHEMAS=	org.gnome.Lollypop.gschema.xml

OPTIONS_DEFINE=	PULSEAUDIO
PULSEAUDIO_USE=	gstreamer1=pulse

SUB_FILES=	pkg-message

.include <bsd.port.mk>
