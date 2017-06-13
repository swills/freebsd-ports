# Created by: dlowe
# $FreeBSD: head/devel/xmake/Makefile 424411 2016-10-21 12:51:40Z mat $

PORTNAME=	xmake
PORTVERSION=	1.06
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://apollo.backplane.com/xmake/
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Powerful make utility

WRKSRC=		${WRKDIR}/xmake
PLIST_FILES=	bin/xmake man/man1/xmake.1.gz

post-extract:
	@${RM} -r ${WRKSRC}/obj

post-patch:
	@${REINPLACE_CMD} 's|gcc|cc|' ${WRKSRC}/defs.h

.include <bsd.port.mk>
