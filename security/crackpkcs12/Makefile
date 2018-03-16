# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/security/crackpkcs12/Makefile 464167 2018-03-11 12:55:22Z ehaupt $

PORTNAME=	crackpkcs12
PORTVERSION=	0.2.11
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Multithreaded program to crack PKCS#12 files

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf ssl
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/crackpkcs12

post-patch:
	@${REINPLACE_CMD} -e '/^PKG_CHECK_MODULES/d' ${WRKSRC}/configure.in

.include <bsd.port.mk>
