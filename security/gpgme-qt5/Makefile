# $FreeBSD: head/security/gpgme-qt5/Makefile 490472 2019-01-16 11:13:44Z tijl $

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
