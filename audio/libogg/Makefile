# Created by: t.vanklaveren@student.utwente.nl
# $FreeBSD: head/audio/libogg/Makefile 428129 2016-12-08 15:38:24Z tijl $

PORTNAME=	libogg
PORTVERSION=	1.3.2
PORTREVISION=	2
PORTEPOCH=	4
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/ogg/

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Ogg bitstream library

USES=		libtool pathfix tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
