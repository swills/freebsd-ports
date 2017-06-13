# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/sysutils/fusefs-curlftpfs/Makefile 438184 2017-04-10 15:50:23Z amdmi3 $

PORTNAME=	curlftpfs
PORTVERSION=	0.9.2
PORTREVISION=	5
CATEGORIES=	sysutils
MASTER_SITES=	SF
PKGNAMEPREFIX=	fusefs-

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Mount remote ftp directories

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcurl.so:ftp/curl

GNU_CONFIGURE=	yes
USES=		fuse pkgconfig
USE_GNOME=	glib20
PLIST_FILES=	bin/curlftpfs man/man1/${PORTNAME}.1.gz

.include <bsd.port.mk>
