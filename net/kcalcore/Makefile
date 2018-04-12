# $FreeBSD: head/net/kcalcore/Makefile 467007 2018-04-10 19:09:05Z tcberner $

PORTNAME=	kcalcore
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE calendar access library

LICENSE=	LGPL21

LIB_DEPENDS=	libical.so:devel/libical

USES=		bison cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	ecm emoticons init itemmodels itemviews kdelibs4support
USE_QT5=	core gui \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
