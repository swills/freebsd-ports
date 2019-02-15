# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/misc/pciids/Makefile 492871 2019-02-13 23:52:14Z sunpoet $

PORTNAME=	pciids
PORTVERSION=	20190213
CATEGORIES=	misc

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Database of all known IDs used in PCI devices

LICENSE=	BSD3CLAUSE GPLv2+
LICENSE_COMB=	dual

NO_ARCH=	yes
NO_BUILD=	yes

PORTDATA=	pci.ids

GH_ACCOUNT=	pciutils
GH_TAGNAME=	65afe6b
USE_GITHUB=	yes

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/pci.ids ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
