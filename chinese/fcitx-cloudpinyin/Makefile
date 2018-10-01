# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: head/chinese/fcitx-cloudpinyin/Makefile 480709 2018-09-25 23:37:21Z wen $

PORTNAME=	fcitx-cloudpinyin
PORTVERSION=	0.3.6
CATEGORIES=	chinese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	lichray@gmail.com
COMMENT=	Cloud-based Pinyin module for Fcitx

LICENSE=	GPLv2

LIB_DEPENDS=	libfcitx-config.so:chinese/fcitx \
		libcurl.so:ftp/curl

USES=		tar:xz cmake gettext pkgconfig

.include <bsd.port.mk>
