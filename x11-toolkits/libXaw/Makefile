# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD$

PORTNAME=	libXaw
PORTVERSION=	1.0.13
PORTREVISION=	3
PORTEPOCH=	2
CATEGORIES=	x11-toolkits

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Athena Widgets library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake xorg xorg-cat:lib
USE_XORG=	x11 xau xext xmu xpm xorgproto xt
CONFIGURE_ARGS=	--without-xmlto

OPTIONS_DEFINE=	DOCS
OPTIONS_SUB=	yes

DOCS_CONFIGURE_ENABLE=	specs

.include <bsd.port.options.mk>
.include <bsd.port.mk>
