# $FreeBSD: head/databases/animenfo-client-gtk/Makefile 469100 2018-05-05 10:49:36Z antoine $

PORTNAME=	animenfo
PORTVERSION=	20020819
PORTREVISION=	11
CATEGORIES=	databases
MASTER_SITES=	http://www.animenfo.com/extension/files/
PKGNAMESUFFIX=	-client-gui-gtk${PKGNAMESUFFIX2}
DISTNAME=	${PORTNAME}-client-gui-gtk

MAINTAINER=	ports@FreeBSD.org
COMMENT=	AnimeNfo client with GTK support

BROKEN=		No public distfiles
DEPRECATED=	Broken for more than 6 months
EXPIRATION_DATE=	2018-06-06

LICENSE=	GPLv2

USES=		pkgconfig gettext gmake tar:tgz
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
CFLAGS+=	${CPPFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib
PLIST_FILES=	bin/animenfo-client-gtk

.include <bsd.port.mk>
