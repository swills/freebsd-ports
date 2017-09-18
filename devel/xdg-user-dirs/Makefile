# $FreeBSD: head/devel/xdg-user-dirs/Makefile 449832 2017-09-14 11:23:31Z tcberner $

PORTNAME=	xdg-user-dirs
PORTVERSION=	0.16
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
