# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: head/misc/gnome-osd/Makefile 455845 2017-12-09 11:46:20Z antoine $

PORTNAME=	gnome-osd
PORTVERSION=	0.20.0
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	http://launchpadlibrarian.net/63944370/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	On-Screen-Display infrastructure using Pango text rendering

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gettext-tools gmake pathfix pkgconfig python:2.7
USE_GNOME=	gnomeprefix intlhack pygnome2
GNU_CONFIGURE=	yes
NO_ARCH=	yes

GCONF_SCHEMAS=	gnome-osd.schemas

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} AUTHORS NEWS README \
		${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
