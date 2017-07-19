# Created by: Stanislav Sedov <ssedov@mbsd.msk.ru>
# $FreeBSD: head/x11-wm/e-module-cpu/Makefile 446188 2017-07-19 09:01:00Z amdmi3 $

PORTNAME=	e-module-cpu
PORTVERSION=	20140911
PORTREVISION=	1
CATEGORIES=	x11-wm enlightenment
MASTER_SITES=	LOCAL/gblach/enlightenment/
DIST_SUBDIR=	enlightenment

MAINTAINER=	enlightenment@FreeBSD.org
COMMENT=	Enlightenment module which allows users to monitor cpu load

BUILD_DEPENDS=	enlightenment:x11-wm/enlightenment
RUN_DEPENDS=	enlightenment:x11-wm/enlightenment

GNU_CONFIGURE=	yes
USES=		gmake libtool pkgconfig tar:xz
INSTALL_TARGET=	install-strip

.include "../enlightenment/Makefile.plist"

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes
NLS_USES=	gettext
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
