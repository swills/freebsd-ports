# Created by: Henry Hu <henry.hu.sh@gmail.com>
# $FreeBSD: head/net-im/libqtelegram-ae/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	libqtelegram-ae
PORTVERSION=	6.1
PORTREVISION=	1
DISTVERSIONPREFIX=	v
DISTVERSIONSUFFIX=	-stable
CATEGORIES=	net-im

MAINTAINER=	henry.hu.sh@gmail.com
COMMENT=	Fork of libqtelegram by Aseman Team

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	Aseman-Land
GH_PROJECT=	libqtelegram-aseman-edition

USES=		qmake:outsource qt:5 ssl
USE_QT=		qmake_build buildtools_build core gui network multimedia
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e "/OPENSSL_INCLUDE_PATH/d" \
		${WRKSRC}/libqtelegram-ae.pri

.include <bsd.port.mk>
