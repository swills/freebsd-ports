# $FreeBSD: head/multimedia/avidemux-qt4/Makefile 486489 2018-12-02 21:33:49Z antoine $

PORTNAME=	avidemux
PORTVERSION=	${AVIDEMUX_VERSION}
PORTREVISION=	7
CATEGORIES=	multimedia
PKGNAMESUFFIX=	-qt4

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Simple GUI based video editor (QT4 UI)

LIB_DEPENDS=	libADM6avutil.so.54:multimedia/avidemux

MASTERDIR=	${.CURDIR}/../avidemux
OPTIONS_SLAVE=	QT4
PLIST=		${.CURDIR}/pkg-plist

.include "${MASTERDIR}/Makefile.common"

CMAKE_SOURCE_PATH=	${WRKSRC}/avidemux/qt4

CMAKE_ARGS+=	-DAVIDEMUX_SOURCE_DIR=${WRKSRC} -DAVIDEMUX_INSTALL_PREFIX:PATH="${PREFIX}"

post-configure: post-configure-common

.include <bsd.port.post.mk>
