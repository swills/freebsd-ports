# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/textproc/uchardet/Makefile 427597 2016-12-03 08:24:32Z jhale $

PORTNAME=	uchardet
PORTVERSION=	0.0.6
CATEGORIES=	textproc
MASTER_SITES=	https://www.freedesktop.org/software/${PORTNAME}/releases/

MAINTAINER=	yuri@rawbw.com
COMMENT=	Universal charset detection library

LICENSE=	GPLv2+ LGPL21+ MPL
LICENSE_COMB=	dual

USES=		cmake pathfix tar:xz
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_INSTALL_MANDIR:PATH=${MANPREFIX}/man

.include <bsd.port.mk>
