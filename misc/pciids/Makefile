# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/misc/pciids/Makefile 447250 2017-08-03 17:25:57Z sunpoet $

PORTNAME=	pciids
PORTVERSION=	20170727
CATEGORIES=	misc

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Database of all known IDs used in PCI devices

LICENSE=	BSD3CLAUSE GPLv2+
LICENSE_COMB=	dual

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	%%DATADIR%%/pci.ids

GH_ACCOUNT=	pciutils
GH_TAGNAME=	8a1d51e
USE_GITHUB=	yes

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/pci.ids ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
