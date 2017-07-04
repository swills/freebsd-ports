# Created by: sobomax
# $FreeBSD: head/audio/bcg729/Makefile 444761 2017-06-30 15:10:26Z madpilot $

PORTNAME=	bcg729
PORTVERSION=	1.0.2
CATEGORIES=	audio
MASTER_SITES=	SAVANNAH/linphone/plugins/sources

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Software G729A encoder and decoder library written in C

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-msplugin --disable-strict
INSTALL_TARGET=	install-strip
USES=		libtool pathfix pkgconfig
USE_LDCONFIG=	yes

.include <bsd.port.mk>
