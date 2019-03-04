# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: head/sysutils/osinfo-db-tools/Makefile 494404 2019-03-02 14:16:20Z novel $

PORTNAME=	osinfo-db-tools
PORTVERSION=	1.4.0
CATEGORIES=	sysutils
MASTER_SITES=	https://releases.pagure.org/libosinfo/

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Tools for managing the osinfo database

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libjson-glib-1.0.so:devel/json-glib

USES=		gettext gmake libarchive pkgconfig
USE_GNOME=	glib20 intltool libxml2 libxslt

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
