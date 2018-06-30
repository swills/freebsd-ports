# Created by: Markus Brueffer <markus@FreeBSD.org>
# $FreeBSD: head/x11-themes/kde4-style-polyester/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	polyester
PORTVERSION=	2.0.0
PORTREVISION=	11
CATEGORIES=	x11-themes kde
MASTER_SITES=	http://www.notmart.org/files/
PKGNAMEPREFIX=	kde4-style-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	KDE style and window decoration

LICENSE=	LGPL20+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		cmake gettext kde:4 qt:4 tar:bzip2
USE_KDE=	kdelibs automoc4
USE_QT=		qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
