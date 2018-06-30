# Created by: arved
# $FreeBSD: head/games/kcheckers/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kcheckers
PORTVERSION=	0.8.1
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	SF/qcheckers/${PORTNAME}/${PORTVERSION}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Qt version of the classic boardgame checkers

USES=		qmake qt:4
USE_QT=		corelib gui moc_build rcc_build

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|' ${WRKSRC}/common.h
	@${REINPLACE_CMD} -e 's|..PREFIX/share/kcheckers|${DATADIR}|' \
		-e 's|..PREFIX|${PREFIX}|' ${WRKSRC}/kcheckers.pro

.include <bsd.port.mk>
