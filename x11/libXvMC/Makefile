# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD$

PORTNAME=	libXvMC
PORTVERSION=	1.0.12
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Video Extension Motion Compensation library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cpe xorg xorg-cat:lib
USE_XORG=	x11 xext xorgproto xv
CPE_VENDOR=	x
CPE_PRODUCT=	libxvmc

INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	DOCS
OPTIONS_SUB=	yes

DOCS_CONFIGURE_ENABLE= docs

.include <bsd.port.options.mk>
.include <bsd.port.mk>
