# Created by: trevor
# $FreeBSD: head/textproc/diffstat/Makefile 489254 2019-01-04 11:16:31Z bapt $

PORTNAME=	diffstat
PORTVERSION=	1.62
CATEGORIES=	textproc devel
MASTER_SITES=	https://invisible-mirror.net/archives/${PORTNAME}/ \
		ftp://ftp.invisible-island.net/${PORTNAME}/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Makes a histogram summarizing "diff" output

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:tgz
GNU_CONFIGURE=	yes
MAKEFILE=	makefile

PLIST_FILES=	bin/diffstat man/man1/diffstat.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
