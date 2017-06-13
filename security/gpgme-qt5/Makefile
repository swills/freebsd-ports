# $FreeBSD: head/security/gpgme-qt5/Makefile 437834 2017-04-05 20:13:00Z jhale $

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
