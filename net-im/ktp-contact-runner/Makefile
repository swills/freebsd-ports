# $FreeBSD: head/net-im/ktp-contact-runner/Makefile 495946 2019-03-16 19:13:34Z tcberner $

PORTNAME=	ktp-contact-runner
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KRunner integration module for KDE Telepathy

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt \
		libKTpCommonInternals.so:net-im/ktp-common-internals

USES=		compiler:c++11-lang cmake gettext kde:5 qt:5 tar:xz
USE_KDE=	config coreaddons ecm i18n package plasma-framework runner \
		service wallet
USE_QT=		core dbus gui network widgets xml\
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
