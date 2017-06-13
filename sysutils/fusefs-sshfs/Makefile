# Created by: Anish Mistry
# $FreeBSD: head/sysutils/fusefs-sshfs/Makefile 442599 2017-06-05 00:46:20Z bofh $

PORTNAME=	sshfs
PORTVERSION=	2.9
DISTVERSIONPREFIX=	${PORTNAME}-
PORTREVISION=	1
CATEGORIES=	sysutils
PKGNAMEPREFIX=	fusefs-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Mount remote directories over ssh

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	libfuse

GNU_CONFIGURE=	yes
USES=		autoreconf fuse gettext pkgconfig
USE_GNOME=	glib20

PLIST_FILES=	bin/sshfs \
		man/man1/sshfs.1.gz

.include <bsd.port.mk>
