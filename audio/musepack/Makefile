# Created by: Stefan Ehmann <shoesoft@gmx.net>
# $FreeBSD: head/audio/musepack/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	musepack
PORTVERSION=	2011.08.10
CATEGORIES=	audio
MASTER_SITES=	http://files.musepack.net/source/
DISTNAME=	${PORTNAME}_src_r475

MAINTAINER=	shoesoft@gmx.net
COMMENT=	Decoder, encoder, and replaygain for musepack (mpc)

LICENSE=	BSD3CLAUSE GPLv2+ LGPL21+
LICENSE_COMB=	multi

USES=		autoreconf libtool
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
