# Created by: Garrett Rooney <rooneg@electricjellyfish.net>
# $FreeBSD: head/textproc/diffutils/Makefile 421960 2016-09-12 20:34:01Z johans $

PORTNAME=	diffutils
PORTVERSION=	3.5
CATEGORIES=	textproc
MASTER_SITES=	GNU

MAINTAINER=	johans@FreeBSD.org
COMMENT=	The GNU diff utilities

LIB_DEPENDS=	libsigsegv.so:devel/libsigsegv

USES=		charsetfix tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--program-prefix=g

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes
NLS_USES=	gettext iconv
NLS_CONFIGURE_ENABLE=nls

INFO=		diffutils

post-patch:
	@${REINPLACE_CMD} -e '/^mkdir/s:@mkdir_p@:${MKDIR}:' \
		${WRKSRC}/po/Makefile.in.in

.include <bsd.port.mk>
