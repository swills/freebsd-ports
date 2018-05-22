# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: head/audio/cpp-xmms2/Makefile 470573 2018-05-21 20:00:48Z madpilot $

PORTREVISION=	16
CATEGORIES=	audio
PKGNAMEPREFIX=	cpp-

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	C++ Bindings for XMMS2

LIB_DEPENDS+=	libboost_signals.so:devel/boost-libs \
		libxmmsclient.so:audio/xmms2

MASTERDIR=	${.CURDIR}/../xmms2
USES=		ssl
USE_LDCONFIG=	yes
USE_GNOME=	glib20

BROKEN_SSL=	openssl-devel

PLIST=		${.CURDIR}/pkg-plist

XMMS2_SLAVE=	cpp

.include "${MASTERDIR}/Makefile"
