# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: head/audio/minitunes/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	minitunes
PORTVERSION=	0.1.1
PORTREVISION=	4
CATEGORIES=	audio
MASTER_SITES=	http://flavio.tordini.org/files/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Just another music player

LIB_DEPENDS=	libtag.so:audio/taglib

USES=		qmake qt:4
USE_QT=		dbus gui moc_build network phonon rcc_build \
		sql uic_build xml
INSTALLS_ICONS=	yes

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

WRKSRC=		${WRKDIR}/${PORTNAME}

.include <bsd.port.mk>
