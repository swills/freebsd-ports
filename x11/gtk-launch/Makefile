# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/x11/gtk-launch/Makefile 428840 2016-12-18 09:57:19Z ehaupt $

PORTNAME=	gtk-launch
DISTVERSION=	1.1b
PORTREVISION=	6
CATEGORIES=	x11
MASTER_SITES=	http://pierric.descamps.free.fr/pierric/downloads/ \
		LOCAL/ehaupt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Fast GTK+ program launcher

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gettext-runtime
USE_GNOME=	gtk12
USE_XORG=	x11 xext xi

PLIST_FILES=	bin/gtk-launch
PORTDOCS=	INSTALL

PORTSCOUT=	skipv:1.1

OPTIONS_DEFINE=DOCS

post-patch:
	${ECHO_CMD} >> ${WRKSRC}/launch.c

do-build:
	${CC} ${CFLAGS} `${GTK_CONFIG} --cflags --libs` \
		-o ${WRKSRC}/${PORTNAME} ${WRKSRC}/launch.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
