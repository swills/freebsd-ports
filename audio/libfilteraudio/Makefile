# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/audio/libfilteraudio/Makefile 474321 2018-07-10 03:40:07Z yuri $

PORTNAME=	libfilteraudio
DISTVERSIONPREFIX=	v
DISTVERSION=	0.0.1
PORTEPOCH=	1
CATEGORIES=	audio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Lightweight audio filtering library made from webrtc code

LICENSE=	BSD3CLAUSE

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	irungentoo
GH_PROJECT=	filter_audio
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|LIBDIR)/pkgconfig|LIBDIR)data/pkgconfig|' ${WRKSRC}/Makefile

.include <bsd.port.mk>
