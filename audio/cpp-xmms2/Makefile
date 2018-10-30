# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: head/audio/cpp-xmms2/Makefile 483091 2018-10-27 01:43:27Z jbeich $

PORTREVISION=	18
CATEGORIES=	audio
PKGNAMEPREFIX=	cpp-

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	C++ Bindings for XMMS2

BUILD_DEPENDS=	${LOCALBASE}/include/boost/bind.hpp:devel/boost-libs
LIB_DEPENDS=	libxmmsclient.so:audio/xmms2

MASTERDIR=	${.CURDIR}/../xmms2
USES=		ssl
USE_LDCONFIG=	yes
USE_GNOME=	glib20

BROKEN_SSL=	openssl-devel

PLIST=		${.CURDIR}/pkg-plist

XMMS2_SLAVE=	cpp

.include "${MASTERDIR}/Makefile"
