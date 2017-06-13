# Created by: David O'Brien (obrien@cs.ucdavis.edu)
# $FreeBSD: head/vietnamese/vn7to8/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	vn7to8
PORTVERSION=	1.1.1
CATEGORIES=	vietnamese
MASTER_SITES=	ftp://ftp.monash.edu.au/pub/vietnam/unix/
DISTNAME=	vn7to8
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts between 7-bit Vietnamese VIQR and 8-bit VISCII formats

BUILD_DEPENDS=	${LOCALBASE}/lib/libviqr.a:vietnamese/libviet

CFLAGS+=	-I${PREFIX}/include/viet

post-extract:
	@${MV} ${WRKDIR}/lib ${WRKDIR}/DONT.lib
	@${MV} ${WRKDIR}/include ${WRKDIR}/DONT.include

post-install:
	@${INSTALL_MAN} ${FILESDIR}/vn7to8.1 ${STAGEDIR}${PREFIX}/man/man1
	@${INSTALL_MAN} ${FILESDIR}/vn80to81.1 ${STAGEDIR}${PREFIX}/man/man1
	@${INSTALL_MAN} ${FILESDIR}/vn8to7.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
