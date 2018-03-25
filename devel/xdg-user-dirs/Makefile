# $FreeBSD: head/devel/xdg-user-dirs/Makefile 465104 2018-03-20 18:26:31Z tcberner $

PORTNAME=	xdg-user-dirs
DISTVERSION=	0.17
CATEGORIES=	devel
MASTER_SITES=	http://user-dirs.freedesktop.org/releases/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tool to help manage personal user directories

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl

GNU_CONFIGURE=	yes
USES=		gettext gmake iconv
USE_GNOME=	libxslt:build
LDFLAGS+=	-L${LOCALBASE}/lib ${ICONV_LIB}
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
