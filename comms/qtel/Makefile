# Created by: shurd
# $FreeBSD: head/comms/qtel/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	qtel
PORTREVISION=	1

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Qtel Echolink client

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

LIB_DEPENDS=	libecholib.so:comms/svxlink \
		libgsm.so:audio/gsm

MASTERDIR=	${.CURDIR}/../svxlink
USES=		qt:4
USE_QT=		corelib gui network qmake_build linguist_build moc_build rcc_build uic_build
PKGDIR=		${.CURDIR}
CMAKE_ARGS+=	-DUSE_QT:BOOL=YES \
		-DQT_ONLY:BOOL=YES
USE_GNOME=	libsigc++20

.include "${MASTERDIR}/Makefile"
