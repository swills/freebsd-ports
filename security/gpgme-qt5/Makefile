# $FreeBSD: head/security/gpgme-qt5/Makefile 461063 2018-02-06 15:18:23Z jhale $

PORTREVISION=	1
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
