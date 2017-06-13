# $FreeBSD: head/sysutils/myrescue/Makefile 435219 2017-03-02 09:25:10Z mmokhi $

PORTNAME=	myrescue
PORTVERSION=	0.9.4
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}/

MAINTAINER=	anastasios@mageirias.com
COMMENT=	Rescue still-readable data from a damaged harddisk

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/../COPYING

WRKSRC_SUBDIR=	src

PLIST_FILES=	bin/myrescue \
		man/man1/myrescue.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/myrescue ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKDIR}/${DISTNAME}/doc/myrescue.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
