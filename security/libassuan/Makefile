# Created by: Michael Nottebrock <lofi@FreeBSD.org>
# $FreeBSD: head/security/libassuan/Makefile 422466 2016-09-19 22:47:35Z jhale $

PORTNAME=	libassuan
PORTVERSION=	2.4.3
CATEGORIES=	security devel
MASTER_SITES=	GNUPG/${PORTNAME}

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	IPC library used by GnuPG and gpgme

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

LIB_DEPENDS=	libgpg-error.so:security/libgpg-error

USES=		libtool tar:bzip2
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

INFO=		assuan

.include <bsd.port.mk>
