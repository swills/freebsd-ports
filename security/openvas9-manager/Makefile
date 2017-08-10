# $FreeBSD: head/security/openvas9-manager/Makefile 447298 2017-08-03 22:43:53Z acm $

PORTNAME=	openvas9-manager
PORTVERSION=	7.0.2
MASTER_SITES=	http://wald.intevation.org/frs/download.php/2448/

COMMENT=	OpenVAS 9 manager

CONFLICTS=	${PORTNAME:S/${OPENVAS_VER}/8/}-*

MASTERDIR=	${.CURDIR}/../../security/openvas8-manager

DISTINFO_FILE=	${.CURDIR}/distinfo
PATCHDIR=	${.CURDIR}/files
PLIST=		${.CURDIR}/pkg-plist

OPENVAS_VER=	9

.include "${MASTERDIR}/Makefile"
