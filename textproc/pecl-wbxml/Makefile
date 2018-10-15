# Created by: Florian Smeets <flo@smeets.im>
# $FreeBSD: head/textproc/pecl-wbxml/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	wbxml
PORTVERSION=	1.0.3
PORTREVISION=	3
CATEGORIES=	textproc pear

MAINTAINER=	flo@FreeBSD.org
COMMENT=	PECL extension that provides WBXML conversion capabilities

LIB_DEPENDS=	libwbxml2.so:textproc/wbxml2

USES=		php:pecl

CONFIGURE_ARGS=	--with-wbxml=${LOCALBASE} \
		--with-libexpat-dir=${LOCALBASE}
IGNORE_WITH_PHP=	70 71 72 73

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' ${WRKSRC}/config.m4

.include <bsd.port.mk>
