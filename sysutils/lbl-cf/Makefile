# Created by: Craig Leres <leres@FreeBSD.org>
# $FreeBSD: head/sysutils/lbl-cf/Makefile 449916 2017-09-15 18:18:26Z leres $

PORTNAME=	cf
PORTVERSION=	1.2.5
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ee.lbl.gov/ \
		http://www.tux.org//pub/net/ftp.ee.lbl.gov/ \
		http://ftp.riken.go.jp/pub/net/lbl/ \
		http://www.ftpdir.hu/ftp.ee.lbl.gov/
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
