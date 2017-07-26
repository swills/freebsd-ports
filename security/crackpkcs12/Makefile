# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/security/crackpkcs12/Makefile 446615 2017-07-25 17:41:46Z ehaupt $

PORTNAME=	crackpkcs12
PORTVERSION=	0.2.10
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
