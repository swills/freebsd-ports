# $FreeBSD: head/devel/kapptemplate/Makefile 444324 2017-06-25 21:07:58Z tcberner $

PORTNAME=	kapptemplate
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	1
CATEGORIES=	devel kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE template generator

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build \
		corelib dbus declarative

.include <bsd.port.mk>
