# Created by: Lars Koeller <Lars.Koeller@Uni-Bielefeld.de>
# $FreeBSD: head/x11-toolkits/xbae/Makefile 425823 2016-11-10 01:21:43Z linimon $

PORTNAME=	Xbae
PORTVERSION=	4.60.4
PORTREVISION=	3
CATEGORIES=	x11-toolkits math
MASTER_SITES=	SF
DISTNAME=	xbae-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Motif-based widget which displays a grid of cells as a spreadsheet

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_aarch64=	Fails to link: missing sbrk

USES=		libtool motif
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-production
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
