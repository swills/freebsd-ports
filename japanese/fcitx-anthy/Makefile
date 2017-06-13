# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/japanese/fcitx-anthy/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	fcitx-anthy
PORTVERSION=	0.2.1
CATEGORIES=	japanese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Anthy support for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:chinese/fcitx \
		libanthy.so:japanese/anthy

USES=		cmake gettext pkgconfig tar:xz
INSTALLS_ICONS=	yes

.include <bsd.port.mk>
