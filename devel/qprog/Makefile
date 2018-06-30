# Created by: Brandon Fosdick <bfoz@bfoz.net>
# $FreeBSD: head/devel/qprog/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	qprog
PORTVERSION=	0.4
PORTREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	http://bfoz.net/projects/${PORTNAME}/release/
DISTNAME=	QProg_${PORTVERSION}

MAINTAINER=	bfoz@bfoz.net
COMMENT=	Cross-platform software for the DIY line of PIC programmers

USES=		qmake qt:4 tar:tgz
USE_QT=		moc_build gui network

WRKSRC=		${WRKDIR}/QProg

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
