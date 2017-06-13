# Created by: nm@web.am
# $FreeBSD: head/net-im/licq-osd/Makefile 439934 2017-05-02 06:48:10Z jbeich $

PORTNAME=	osd
PORTVERSION=	1.8.2
PORTREVISION=	4
PORTEPOCH=	2
CATEGORIES=	net-im

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	OnScreenDisplay messages in licq

LIB_DEPENDS=	libxosd.so:misc/xosd \
		libboost_regex.so:devel/boost-libs
RUN_DEPENDS=	${LOCALBASE}/lib/licq/licq_qt4-gui.so:${LICQ_PORT}-qt-gui

USES=		cmake gettext-tools iconv

LOCALES=	be de cs es fr pt pt_BR ro ru sv sk tr
PLIST_FILES=	lib/licq/licq_osd.so \
		${LOCALES:C+^.*$+share/locale/&/LC_MESSAGES/licq_osd_plugin.mo+}

LICQ_PORT?=	net-im/licq

.include <bsd.port.pre.mk>

.include "${PORTSDIR}/${LICQ_PORT}/Makefile.inc"

.include <bsd.port.post.mk>
