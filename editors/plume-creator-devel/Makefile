# $FreeBSD: head/editors/plume-creator-devel/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	plume-creator-devel
PORTVERSION=	${DATE}
CATEGORIES=	editors
MASTER_SITES=	http://deponie.yamagi.org/freebsd/distfiles/plume-creator/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open source tool for novelists

LICENSE=	GPLv3+

DATE=		20150510

USES=		desktop-file-utils qmake qt:4 shared-mime-info tar:xz
USE_QT=		corelib gui moc_build qmake_build rcc_build uic_build webkit
QMAKE_ARGS=	${WRKSRC}/plume-creator.pro

.include <bsd.port.mk>
