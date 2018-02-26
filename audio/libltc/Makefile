# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/audio/libltc/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	libltc
DISTVERSIONPREFIX=	v
DISTVERSION=	1.3.0
CATEGORIES=	audio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Linear/Logitudinal Time Code (LTC) Library

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf gmake libtool
USE_GITHUB=	yes
GH_ACCOUNT=	x42
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
