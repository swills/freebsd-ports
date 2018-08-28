# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/graphics/jasper/Makefile 478143 2018-08-26 18:41:27Z sunpoet $

PORTNAME=	jasper
PORTVERSION=	1.900.1
PORTREVISION=	17
CATEGORIES=	graphics
MASTER_SITES=	https://www.ece.uvic.ca/~frodo/jasper/software/ \
		ftp://ftp.imagemagick.org/pub/ImageMagick/delegates/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Implementation of the codec specified in the JPEG-2000 standard

LICENSE=	MIT

OPTIONS_DEFINE=	OPENGL UUID DOCS
OPTIONS_DEFAULT=UUID
OPTIONS_SUB=	yes
UUID_DESC=	UUID support (required by GDAL)

CONFIGURE_ARGS=	--enable-shared --enable-static
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=		jpeg libtool:keepla localbase zip

OPENGL_CONFIGURE_ENABLE=opengl
OPENGL_USE=		GL=glut XORG=x11,xext,xi,xmu
UUID_EXTRA_PATCHES=	${PATCHDIR}/uuid.patch

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/doc/* ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
