# Created by: andreas
# $FreeBSD: head/mail/kbiff/Makefile 486467 2018-12-02 15:41:47Z rene $

PORTNAME=	kbiff
PORTVERSION=	4.0
PORTREVISION=	6
CATEGORIES=	mail kde
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Mail notification utility for KDE with nice features

LICENSE=	GPLv2

DEPRECATED=		Qt4 has been EOL since december 2015
EXPIRATION_DATE=	2018-12-31

USES=		cmake gettext kde:4 perl5 qt:4 tar:bzip2
USE_KDE=	automoc4 kdelibs
USE_QT=		corelib dbus gui network svg xml \
		qmake_build uic_build rcc_build
USE_PERL5=	build

.include <bsd.port.mk>
