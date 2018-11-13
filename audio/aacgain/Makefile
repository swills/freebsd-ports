# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/audio/aacgain/Makefile 483902 2018-11-03 16:45:37Z danfe $

PORTNAME=	aacgain
PORTVERSION=	1.8
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	http://aacgain.altosdesign.com/alvarez/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Normalizes the volume of MP3 and AAC (MP4/M4A/QuickTime) media files

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USES=		gmake libtool tar:bzip2
PLIST_FILES=	bin/aacgain

CXXFLAGS+=	--std=c++98

.include <bsd.port.mk>
