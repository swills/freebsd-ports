# Created by: Craig Leres <leres@FreeBSD.org>
# $FreeBSD: head/sysutils/lbl-cf/Makefile 452566 2017-10-21 00:45:50Z leres $

PORTNAME=	cf
PORTVERSION=	1.2.5
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ee.lbl.gov/
PKGNAMEPREFIX=	lbl-

MAINTAINER=	leres@FreeBSD.org
COMMENT=	Unix time to formated time and date filter

LICENSE=	BSD3CLAUSE

INSTALL_TARGET=	install install-man

PLIST_FILES=	bin/cf \
		man/man1/cf.1.gz

GNU_CONFIGURE=	yes

pre-install:
	@${STRIP_CMD} ${WRKSRC}/cf

.include <bsd.port.mk>
