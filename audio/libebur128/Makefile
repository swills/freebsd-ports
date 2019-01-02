# Created by: Pietro Cerutti <gahr@FreeBSD.org>
# $FreeBSD: head/audio/libebur128/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	libebur128
PORTVERSION=	1.2.4
DISTVERSIONPREFIX=	v
CATEGORIES=	audio

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Implementation of the EBU R128 loudness standard

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libspeexdsp.so:audio/speexdsp

USE_GITHUB=	yes
GH_ACCOUNT=	jiixyj

USES=		cmake localbase:ldflags pkgconfig
USE_LDCONFIG=	yes

.include <bsd.port.mk>
