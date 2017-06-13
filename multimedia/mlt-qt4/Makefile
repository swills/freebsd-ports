# $FreeBSD: head/multimedia/mlt-qt4/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTREVISION=	1

CONFLICTS_INSTALL=	${PORTNAME}-qt5-*

USE_QT4=	corelib gui opengl svg xml
MASTERDIR=	${.CURDIR:H}/mlt
SLAVEPORT=	qt4

PLIST=		${MASTERDIR}-qt5/pkg-plist

OPTIONS_DEFINE=	KDE4
KDE4_DESC=	Extra image formats

KDE4_CONFIGURE_ENV=	PATH="${KDE_PREFIX}/bin:$$PATH"
KDE4_CONFIGURE_WITH=	kde
KDE4_USES=		kde:4
KDE4_USE=		KDE=kdelibs

.include "${MASTERDIR}/Makefile"
