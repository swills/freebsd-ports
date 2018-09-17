# $FreeBSD: head/security/kpkpass/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	kpkpass
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	security kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library to deal with Apple Wallet pass files

USES=		cmake:outsource gettext kde:5 qt:5 shared-mime-info tar:xz
USE_KDE=	archive ecm
USE_QT=		core gui testlib \
		buildtools_build qmake_build

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
