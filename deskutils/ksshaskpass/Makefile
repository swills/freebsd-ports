# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/deskutils/ksshaskpass/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	ksshaskpass
PORTVERSION=	0.5.3
PORTREVISION=	7
CATEGORIES=	deskutils
MASTER_SITES=	http://kde-apps.org/CONTENT/content-files/
DISTNAME=	50971-${PORTNAME}-${PORTVERSION}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	KDE 4 version of ssh-askpass with KWallet support

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
USES=		cmake kde:4 qt:4
USE_KDE=	kdelibs automoc4
USE_QT=		moc_build uic_build qmake_build rcc_build

SUB_FILES=	pkg-message

.include <bsd.port.mk>
