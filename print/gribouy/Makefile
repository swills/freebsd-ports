# Created by: bland@FreeBSD.org
# $FreeBSD: head/print/gribouy/Makefile 481492 2018-10-07 20:25:16Z antoine $

PORTNAME=	gribouy
PORTVERSION=	0.0.8
PORTREVISION=	20
CATEGORIES=	print gnome
MASTER_SITES=	LOCAL/bland

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Gribouy is a Type1 font editor

DEPRECATED=	GNOME 2 application
EXPIRATION_DATE=	2018-12-10

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
USES=		gettext gmake pkgconfig
USE_GNOME=	gnomeprefix libglade2 libgnomeui

USE_GCC=	any

post-patch:
	@${REINPLACE_CMD} -e '/^LIBS =/s|$$| -lm|' \
		${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
