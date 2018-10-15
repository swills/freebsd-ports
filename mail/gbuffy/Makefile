# Created by: rasmus@kaj.se
# $FreeBSD: head/mail/gbuffy/Makefile 481888 2018-10-12 09:19:04Z antoine $

PORTNAME=	gbuffy
PORTVERSION=	0.2.6
PORTREVISION=	8
CATEGORIES=	mail
MASTER_SITES=	http://www.fiction.net/blong/programs/gbuffy/gbuffy-${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK+ multiple mailbox "biff" program

DEPRECATED=	Uses obsolete glib12
EXPIRATION_DATE=	2018-12-20

LIB_DEPENDS=	libPropList.so:devel/libPropList \
		libcompface.so:mail/faces

GNU_CONFIGURE=	yes
LIBS+=		-L${LOCALBASE}/lib
USE_GNOME=	gtk12
USES=		ssl

PLIST_FILES=	bin/gbuffy

post-patch:
	@${REINPLACE_CMD} -e 's|bindir)|DESTDIR)$$(&|' \
		-e 's|INSTALL)|BSD_INSTALL_PROGRAM)|' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
