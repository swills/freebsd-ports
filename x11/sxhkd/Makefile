# Created by: Anton Tornqvist <antont@inbox.lv>
# $FreeBSD: head/x11/sxhkd/Makefile 446846 2017-07-28 18:41:44Z ultima $

PORTNAME=	sxhkd
PORTVERSION=	0.5.8
CATEGORIES=	x11

MAINTAINER=	gor@clogic.com.ua
COMMENT=	Simple X hotkey daemon

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libxcb-keysyms.so:x11/xcb-util-keysyms

USES=		gmake pkgconfig

USE_XORG=	xcb

USE_GITHUB=	yes
GH_ACCOUNT=	baskerville

PORTEXAMPLES=	*
PLIST_FILES=	bin/sxhkd \
		man/man1/sxhkd.1.gz

OPTIONS_DEFINE=	EXAMPLES

.include <bsd.port.mk>
