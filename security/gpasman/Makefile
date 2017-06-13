# Created by: domi@saargate.de
# $FreeBSD: head/security/gpasman/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	gpasman
PORTVERSION=	1.3.1
PORTREVISION=	6
CATEGORIES=	security
MASTER_SITES=	http://gpasman.sourceforge.net/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Password manager that stores password information encrypted

PLIST_FILES=	bin/gpasman
USES=		gmake
USE_GNOME=	gtk12
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	GTKCONFIG="${GTK_CONFIG}"

do-install:
	 ${INSTALL_PROGRAM} ${WRKSRC}/src/gpasman ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
