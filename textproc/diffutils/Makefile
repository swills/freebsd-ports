# Created by: Garrett Rooney <rooneg@electricjellyfish.net>
# $FreeBSD: head/textproc/diffutils/Makefile 445098 2017-07-05 21:07:39Z johans $

PORTNAME=	diffutils
PORTVERSION=	3.6
CATEGORIES=	textproc
MASTER_SITES=	GNU

LICENSE=	GPLv3+

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
