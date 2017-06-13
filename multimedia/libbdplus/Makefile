# Created by: kamikaze@bsdforen.de
# $FreeBSD: head/multimedia/libbdplus/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	libbdplus
PORTVERSION=	0.1.2
CATEGORIES=	multimedia
MASTER_SITES=	ftp://ftp.videolan.org/pub/videolan/${PORTNAME}/${PORTVERSION}/ \
		http://blu.opsec.eu/

MAINTAINER=	kami@FreeBSD.org
COMMENT=	BD+ System research implementation

LICENSE=	LGPL21

LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
		libgpg-error.so:security/libgpg-error

USE_LDCONFIG=	yes
USES=		autoreconf tar:bzip2 pkgconfig libtool

CONFIGURE_ARGS=	--without-libaacs

.include "${.CURDIR}/../libbluray/Makefile.include"

.include <bsd.port.mk>
