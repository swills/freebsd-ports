# $FreeBSD: head/misc/bibletime/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	bibletime
PORTVERSION=	2.10.1
PORTREVISION=	2
CATEGORIES=	misc kde
MASTER_SITES=	SF/${PORTNAME}/BibleTime%202/BibleTime%202%20source%20code

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open source Bible study tool

LICENSE=	GPLv2

BROKEN_powerpc64=	fails to compile: btosismorphsegmentation.cpp.o: undefined reference to sword::SWOptionFilter::SWOptionFilter

LIB_DEPENDS=	libclucene-core.so:textproc/clucene \
		libsword.so:misc/sword

USES=		cmake:outsource qt:4 tar:xz ssl
USE_QT=		corelib dbus gui iconengines network phonon qtestlib script \
		svg webkit xml linguist_build moc_build qmake_build \
		rcc_build uic_build

.include <bsd.port.mk>
