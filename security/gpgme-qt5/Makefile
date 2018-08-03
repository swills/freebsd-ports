# $FreeBSD: head/security/gpgme-qt5/Makefile 476015 2018-07-31 19:05:35Z jhale $

PORTREVISION=	0
PKGNAMESUFFIX=	-${SLAVEPORT}

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Gpgme Qt5 bindings

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

MASTERDIR=	${.CURDIR}/../../security/gpgme
SLAVEPORT=	qt5
BINDING_NAME=	qt
PLIST=		${.CURDIR}/pkg-plist

.include "${MASTERDIR}/Makefile"
