# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/security/keepassx/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	KeePassX
PORTVERSION=	0.4.4
CATEGORIES=	security
MASTER_SITES=	https://www.keepassx.org/releases/${PORTVERSION}/ \
		http://www.keepassx.org/releases/${PORTVERSION}/
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Cross Platform Password Manager

DATADIR=	${PREFIX}/share/${PORTNAME:tl}
WRKSRC=		${WRKDIR}/${PORTNAME:tl}-${PORTVERSION}

USES=		desktop-file-utils qmake qt:4 shared-mime-info
USE_QT=		moc_build uic_build qt3support_build rcc_build \
		corelib gui xml
USE_XORG=	xt inputproto xtst xrender xrandr xfixes xcursor\
		xext x11 sm ice xi

QMAKE_ARGS+=	INCLUDEPATH+=${LOCALBASE}/include LIBS+=-L${LOCALBASE}/lib

.include <bsd.port.mk>
