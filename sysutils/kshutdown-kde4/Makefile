# $FreeBSD: head/sysutils/kshutdown-kde4/Makefile 464071 2018-03-10 12:12:10Z tcberner $

PORTNAME=	kshutdown
DISTVERSION=	4.2
CATEGORIES=	sysutils kde
MASTER_SITES=	SF/${PORTNAME}/KShutdown/${DISTVERSION}/
DISTNAME=	${PORTNAME}-source-${DISTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Advanced shutdown utility for KDE

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		alias cmake:outsource compiler:c++0x gettext kde:4 zip
USE_QT4=	corelib dbus gui moc_build qmake_build rcc_build svg uic_build
USE_KDE=	automoc4 kdelibs workspace

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}

# Make sure, we're building the KDE4 version.
CMAKE_ARGS=	-DKS_KF5:BOOL=FALSE \
		-DKS_PURE_QT:BOOL=FALSE

.include <bsd.port.mk>
