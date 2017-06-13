# Created by: rch@richard.eu.org
# $FreeBSD: head/editors/yudit/Makefile 431796 2017-01-18 13:20:31Z tijl $

PORTNAME=	yudit
PORTVERSION=	2.9.6
CATEGORIES=	editors converters print
MASTER_SITES=	http://yudit.org/download/ \
		SUNSITE/apps/editors/X

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Multi-lingual Unicode text editor with TTF support

CONFLICTS=	netatalk-[0-9]*

USE_XORG=	x11
USES=		gmake
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes

PORTDATA=	*

DESKTOP_ENTRIES="Yudit" "${COMMENT}" "${PREFIX}/share/pixmaps/yudit.xpm" \
		"yudit" "Office;" false

post-install:
	${INSTALL_DATA} ${WRKSRC}/icons/SS_Yudit_XPM.xpm \
		${STAGEDIR}${PREFIX}/share/pixmaps/yudit.xpm

.include <bsd.port.mk>
