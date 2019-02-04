# Created by: gurkan@phys.ethz.ch
# $FreeBSD: head/archivers/zipper/Makefile 492056 2019-02-03 15:37:58Z theraven $

PORTNAME=	zipper
PORTVERSION=	1.5
PORTREVISION=	7
CATEGORIES=	archivers gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	Zipper-${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Tool for inspecting the contents of a compressed archive

USES=		gnustep
USE_GNUSTEP=	back build

post-patch:
	cd ${WRKSRC} && ${FIND} . -name "*#*" -exec ${RM} -v {} ";"

.include <bsd.port.mk>
